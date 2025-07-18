//
//  ACRCustomSubmitTargetBuilder.mm
//  AdaptiveCards
//
//  Copyright © 2020 Microsoft. All rights reserved.

#import "ACRCustomSubmitTargetBuilder.h"
#ifdef SWIFT_PACKAGE
#import "ACRAggregateTarget.h"
#else
#import <AdaptiveCards/ACRAggregateTarget.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputLabelView.h"
#else
#import <AdaptiveCards/ACRInputLabelView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTargetBuilderDirector.h"
#else
#import <AdaptiveCards/ACRTargetBuilderDirector.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRViewPrivate.h"
#else
#import <AdaptiveCards/ACRViewPrivate.h>
#endif

@interface ACRCustomSubmitTarget : ACRAggregateTarget
@end

@implementation ACRCustomSubmitTarget

- (void)doIfValidationPassed:(ACOInputResults *)results button:(UIButton *)button
{
    [super doIfValidationPassed:results button:button];
    button.backgroundColor = UIColor.grayColor;
}

- (void)doIfValidationFailed:(ACOInputResults *)results button:(UIButton *)button
{
    if (results) {
        if ([self.view.acrActionDelegate respondsToSelector:@selector(didChangeViewLayout:newFrame:properties:)]) {
            UIView *viewToFocus = (UIView *)results.firstFailedInput;
            NSDictionary *prop = @{@"actiontype" : @"submit", @"firstResponder" : results.firstFailedInput};
            if (viewToFocus) {
                [self.view.acrActionDelegate didChangeViewLayout:CGRectNull newFrame:viewToFocus.frame properties:prop];
            } else {
                [self.view.acrActionDelegate didChangeViewLayout:CGRectNull newFrame:CGRectNull properties:prop];
            }
        }
    }
    button.backgroundColor = UIColor.redColor;
}

- (void)updateInputUI:(ACOInputResults *)result button:(UIButton *)button;
{
    [super updateInputUI:result button:button];

    for (id<ACRIBaseInputHandler> input in result.gatheredInputs) {
        ACRInputLabelView *inputLabelView = (ACRInputLabelView *)input;
        if ([inputLabelView isKindOfClass:[ACRInputLabelView class]]) {
            if (![result isInputValid:input]) {
                inputLabelView.inputView.layer.borderWidth = 5.0f;
                inputLabelView.inputView.layer.cornerRadius = 2.0f;
                inputLabelView.inputView.layer.borderColor = UIColor.purpleColor.CGColor;
            } else {
                inputLabelView.inputView.layer.borderWidth = 0.0f;
                inputLabelView.inputView.layer.cornerRadius = 0.0f;
                inputLabelView.inputView.layer.borderColor = nil;
            }
        }
    }
}

@end

@implementation ACRCustomSubmitTargetBuilder

+ (ACRCustomSubmitTargetBuilder *)getInstance
{
    static ACRCustomSubmitTargetBuilder *singletonInstance = [[self alloc] init];
    return singletonInstance;
}

- (NSObject *)build:(ACOBaseActionElement *)action
           director:(ACRTargetBuilderDirector *)director
{
    return [[ACRCustomSubmitTarget alloc] initWithActionElement:action rootView:director.rootView];
}

- (NSObject *)build:(ACOBaseActionElement *)action
           director:(ACRTargetBuilderDirector *)director
          ForButton:(UIButton *)button
{
    NSObject *target = [self build:action director:director];
    if (target) {
        [button addTarget:target
                      action:@selector(send:)
            forControlEvents:UIControlEventTouchUpInside];
    }
    return target;
}

@end

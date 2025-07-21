//
//  ACRShowCardTarget
//  ACRShowCardTarget.h
//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRBaseTarget.h"
#import "ACRIContentHoldingView.h"
#import "ACRView.h"
#import "SharedAdaptiveCard.h"
#import "ShowCardAction.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRBaseTarget.h"
#else
#import "ACRBaseTarget.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIContentHoldingView.h"
#else
#import "ACRIContentHoldingView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import "ACRView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import "SharedAdaptiveCard.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ShowCardAction.h"
#else
#import "ShowCardAction.h"
#endif
#endif
#import <UIKit/UIKit.h>

@interface ACRShowCardTarget : ACRBaseTarget

- (instancetype)initWithActionElement:(std::shared_ptr<AdaptiveCards::ShowCardAction> const &)showCardActionElement
                               config:(ACOHostConfig *)config
                             rootView:(ACRView *)rootView
                               button:(UIButton *)button;

- (void)createShowCard:(NSMutableArray *)inputs superview:(UIView<ACRIContentHoldingView> *)superview;

// show or hide a showCard UIView. If the UIView is not created already, it will be created and shown
// else, it toggles the visibility
- (IBAction)toggleVisibilityOfShowCard;

- (void)hideShowCard;
@end

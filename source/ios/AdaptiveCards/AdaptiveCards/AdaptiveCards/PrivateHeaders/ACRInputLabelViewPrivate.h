//
//  ACRInputLabelViewPrivate
//  ACRInputLabelViewPrivate.h
//
//  Copyright © 2020 Microsoft. All rights reserved.
//
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRInputLabelView.h"
#import "ACRView.h"
#import "BaseInputElement.h"
#import "SharedAdaptiveCard.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRInputLabelView.h"
#else
#import <AdaptiveCards/ACRInputLabelView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import <AdaptiveCards/ACRView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "BaseInputElement.h"
#else
#import <AdaptiveCards/BaseInputElement.h>
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import <AdaptiveCards/SharedAdaptiveCard.h>
#endif
#endif

using namespace AdaptiveCards;

@interface ACRInputLabelView ()

- (instancetype)initInputLabelView:(ACRView *)rootView acoConfig:(ACOHostConfig *)acoConfig adaptiveInputElement:(const std::shared_ptr<BaseInputElement> &)inputBlck inputView:(UIView *)inputView accessibilityItem:(UIView *)accessibilityItem viewGroup:(UIView<ACRIContentHoldingView> *)viewGroup dataSource:(NSObject<ACRIBaseInputHandler> *)dataSource;

@end

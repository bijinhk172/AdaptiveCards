//
//  ACRToggleVisibilityTarget
//  ACRToggleVisibilityTarget.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRBaseTarget.h"
#import "ACRIContentHoldingView.h"
#import "ACRView.h"
#import "ToggleVisibilityAction.h"
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
#import "ToggleVisibilityAction.h"
#else
#import "ToggleVisibilityAction.h"
#endif
#endif

#import <UIKit/UIKit.h>

@interface ACRToggleVisibilityTarget : ACRBaseTarget

- (instancetype)initWithActionElement:(std::shared_ptr<AdaptiveCards::ToggleVisibilityAction> const &)action
                               config:(ACOHostConfig *)config
                             rootView:(ACRView *)rootView;
@end

//
//  ACRRendererPrivate
//  ACRRendererPrivate.h
//
//  Copyright © 2017 Microsoft. All rights reserved.
//
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRBaseCardElementRenderer.h"
#import "ACRIContentHoldingView.h"
#import "ACRRenderer.h"
#import "BackgroundImage.h"
#import "HostConfig.h"
#import "SharedAdaptiveCard.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRBaseCardElementRenderer.h"
#else
#import "ACRBaseCardElementRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIContentHoldingView.h"
#else
#import "ACRIContentHoldingView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRenderer.h"
#else
#import "ACRRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "BackgroundImage.h"
#else
#import "BackgroundImage.h"
#endif
#ifdef SWIFT_PACKAGE
#import "HostConfig.h"
#else
#import "HostConfig.h"
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import "SharedAdaptiveCard.h"
#endif
#endif
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

using namespace AdaptiveCards;

@interface ACRRenderer ()

+ (UIView *)renderWithAdaptiveCards:(std::shared_ptr<AdaptiveCards::AdaptiveCard> const &)adaptiveCard
                             inputs:(NSMutableArray *)inputs
                            context:(ACRView *)rootView
                     containingView:(ACRColumnView *)guideFrame
                         hostconfig:(ACOHostConfig *)config;

+ (UIView<ACRIContentHoldingView> *)render:(UIView *)view
                                  rootView:(ACRView *)rootView
                                    inputs:(NSMutableArray *)inputs
                             withCardElems:(std::vector<std::shared_ptr<BaseCardElement>> const &)elems
                             andHostConfig:(ACOHostConfig *)config;

@end

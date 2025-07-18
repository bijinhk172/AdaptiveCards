//
//  ACRSeparator.h
//  ADCIOSFramework
//
//  Copyright © 2017 Microsoft. All rights reserved.
//
#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRContentStackView.h"
#import "ACRIContentHoldingView.h"
#import "HostConfig.h"
#import "SharedAdaptiveCard.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRContentStackView.h"
#else
#import <AdaptiveCards/ACRContentStackView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIContentHoldingView.h"
#else
#import <AdaptiveCards/ACRIContentHoldingView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "HostConfig.h"
#else
#import <AdaptiveCards/HostConfig.h>
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import <AdaptiveCards/SharedAdaptiveCard.h>
#endif
#endif
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ACRSeparator : UIView

@property BOOL isVisibilityObserved;

+ (ACRSeparator *)renderSeparation:(std::shared_ptr<AdaptiveCards::BaseCardElement> const &)elem
                      forSuperview:(UIView *)view
                    withHostConfig:(std::shared_ptr<AdaptiveCards::HostConfig> const &)config;

+ (void)renderActionsSeparator:(UIView *)view
                    hostConfig:(std::shared_ptr<AdaptiveCards::HostConfig> const &)config;

+ (void)renderSeparationWithFrame:(CGRect)frame
                        superview:(UIView<ACRIContentHoldingView> *)superview
                             axis:(UILayoutConstraintAxis)huggingAxis;

- (NSLayoutConstraint *)configAutoLayout:(UIView *)superview
                              havingAxis:(UILayoutConstraintAxis)superviewAxis
                                  toAxis:(UILayoutConstraintAxis)huggingAxis;

@end

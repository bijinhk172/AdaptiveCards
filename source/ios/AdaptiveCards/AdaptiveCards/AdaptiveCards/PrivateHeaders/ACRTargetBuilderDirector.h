//
//  ACRTargetBuilderDirector.h
//  AdaptiveCards
//
//  Copyright © 2019 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOBaseActionElementPrivate.h"
#import "ACRTargetBuilder.h"
#import "ACRView.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOBaseActionElementPrivate.h"
#else
#import <AdaptiveCards/ACOBaseActionElementPrivate.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTargetBuilder.h"
#else
#import <AdaptiveCards/ACRTargetBuilder.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import <AdaptiveCards/ACRView.h>
#endif
#endif
#import <Foundation/Foundation.h>

// protocol all TargetBuild should implement
@interface ACRTargetBuilderDirector : NSObject
// indicates types of target director is allowed to build
@property __weak ACRView *rootView;
@property __weak ACOHostConfig *adaptiveHostConfig;
@property (readonly) ACRTargetCapability capability;

- (instancetype)init:(ACRView *)rootView capability:(ACRTargetCapability)capability adaptiveHostConfig:(ACOHostConfig *)adaptiveHostConfig;
- (NSObject *)build:(ACOBaseActionElement *)action;
- (NSObject *)build:(ACOBaseActionElement *)action forButton:(UIButton *)button;

@end

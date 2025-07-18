//
//  ACOActionOverflow
//  ACOActionOverflow.h
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOBaseActionElement.h"
#import "BaseActionElement.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOBaseActionElement.h"
#else
#import <AdaptiveCards/ACOBaseActionElement.h>
#endif
#ifdef SWIFT_PACKAGE
#import "BaseActionElement.h"
#else
#import <AdaptiveCards/BaseActionElement.h>
#endif
#endif
#import <Foundation/Foundation.h>

using namespace AdaptiveCards;

@interface ACOActionOverflow : ACOBaseActionElement

- (instancetype)initWithBaseActionElements:(const std::vector<std::shared_ptr<BaseActionElement>> &)elements
                                    atCard:(ACOAdaptiveCard *)card;

@end

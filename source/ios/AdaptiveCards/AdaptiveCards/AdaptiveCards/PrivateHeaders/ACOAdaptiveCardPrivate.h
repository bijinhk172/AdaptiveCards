//
//  ACOAdaptiveCardPrivate.h
//  ACOAdaptiveCardPrivate
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOAdaptiveCard.h"
#import "SharedAdaptiveCard.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOAdaptiveCard.h"
#else
#import "ACOAdaptiveCard.h"
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import "SharedAdaptiveCard.h"
#endif
#endif
using namespace AdaptiveCards;

@interface ACOAdaptiveCard ()

- (std::shared_ptr<AdaptiveCard> const &)card;
- (void)setCard:(std::shared_ptr<AdaptiveCard> const &)card;

@end

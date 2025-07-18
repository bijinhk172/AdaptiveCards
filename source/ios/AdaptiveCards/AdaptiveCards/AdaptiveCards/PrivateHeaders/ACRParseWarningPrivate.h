//
//  ACRParseWarningPrivate
//  ACRParseWarningPrivate.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRParseWarning.h"
#import "AdaptiveCardParseWarning.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRParseWarning.h"
#else
#import <AdaptiveCards/ACRParseWarning.h>
#endif
#ifdef SWIFT_PACKAGE
#import "AdaptiveCardParseWarning.h"
#else
#import <AdaptiveCards/AdaptiveCardParseWarning.h>
#endif
#endif
#import <Foundation/Foundation.h>

@interface ACRParseWarning ()

- (instancetype)initWithParseWarning:(std::shared_ptr<AdaptiveCards::AdaptiveCardParseWarning> const &)parseWarning;

@end

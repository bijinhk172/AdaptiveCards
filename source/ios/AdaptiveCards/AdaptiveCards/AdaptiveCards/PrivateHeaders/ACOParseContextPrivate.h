//
//  ACOParseContextPrivate.h
//  ACOParseContextPrivate
//
//  Copyright © 2019 Microsoft. All rights reserved.
//
#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOParseContext.h"
#import "ParseContext.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOParseContext.h"
#else
#import <AdaptiveCards/ACOParseContext.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ParseContext.h"
#else
#import <AdaptiveCards/ParseContext.h>
#endif
#endif

using namespace AdaptiveCards;

@interface ACOParseContext ()

- (std::shared_ptr<AdaptiveCards::ActionElementParser> const)getActionParser:(NSString *)elementType;

@end

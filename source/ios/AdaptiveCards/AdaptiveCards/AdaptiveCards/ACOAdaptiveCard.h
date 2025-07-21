//
//  ACOAdaptiveCard.h
//  ACOAdaptiveCard
//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOAdaptiveCardParseResult.h"
#import "ACOAuthentication.h"
#import "ACORefresh.h"
#import "ACORemoteResourceInformation.h"
#import "ACRIBaseInputHandler.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOAdaptiveCardParseResult.h"
#else
#import "ACOAdaptiveCardParseResult.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOAuthentication.h"
#else
#import "ACOAuthentication.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACORefresh.h"
#else
#import "ACORefresh.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACORemoteResourceInformation.h"
#else
#import "ACORemoteResourceInformation.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseInputHandler.h"
#else
#import "ACRIBaseInputHandler.h"
#endif
#endif
#import <Foundation/Foundation.h>

@interface ACOAdaptiveCard : NSObject

@property ACORefresh *refresh;
@property ACOAuthentication *authentication;

+ (ACOAdaptiveCardParseResult *)fromJson:(NSString *)payload;
- (NSData *)inputs;
- (NSArray<ACRIBaseInputHandler> *)getInputs;
- (void)setInputs:(NSArray *)inputs;
- (void)appendInputs:(NSArray *)inputs;
- (NSArray<ACORemoteResourceInformation *> *)remoteResourceInformation;
- (NSData *)additionalProperty;

@end

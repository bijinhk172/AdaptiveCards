//
//  ADCResolver.h
//  ADCResolver.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef SWIFT_PACKAGE
#import "AdaptiveCards.h"
#else
#import <AdaptiveCards/AdaptiveCards.h>
#endif

@interface ADCResolver : NSObject <ACOIResourceResolver>

@end

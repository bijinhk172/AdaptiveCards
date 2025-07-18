//
//  MockRenderer.h
//  ADCIOSVisualizer
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef SWIFT_PACKAGE
#import "AdaptiveCards.h"
#else
#import <AdaptiveCards/AdaptiveCards.h>
#endif

@interface MockRenderer : ACRBaseCardElementRenderer

+ (MockRenderer *)getInstance;

@end

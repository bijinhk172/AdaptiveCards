//
//  CustomActionSetRenderer.h
//  ADCIOSVisualizer
//
//  Copyright © 2020 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef SWIFT_PACKAGE
#import "AdaptiveCards.h"
#else
#import <AdaptiveCards/AdaptiveCards.h>
#endif

@interface CustomActionSetRenderer : ACRActionSetRenderer

+ (CustomActionSetRenderer *)getInstance;

@end

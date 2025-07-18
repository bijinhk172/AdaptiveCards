//
//  CustomInputNumberRenderer.h
//  ADCIOSVisualizer
//
//  Created by jwoo on 10/19/17.
//  Copyright © 2017 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef SWIFT_PACKAGE
#import "AdaptiveCards.h"
#else
#import <AdaptiveCards/AdaptiveCards.h>
#endif

@interface CustomInputNumberRenderer : ACRBaseCardElementRenderer

+ (CustomInputNumberRenderer *)getInstance;

@end

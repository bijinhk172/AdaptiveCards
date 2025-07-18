//
//  CustomProgressBarRenderer.h
//  ADCIOSVisualizer
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef SWIFT_PACKAGE
#import "AdaptiveCards.h"
#else
#import <AdaptiveCards/AdaptiveCards.h>
#endif

@interface CACProgressBar : ACOBaseCardElement <ACOIBaseCardElementParser>

@property NSNumber *red;
@property NSNumber *green;
@property NSNumber *blue;
@property NSNumber *alpha;
@property NSNumber *progress;
@property NSNumber *thickness;

- (instancetype)init:(NSNumber *)red green:(NSNumber *)green blue:(NSNumber *)blue
               alpha:(NSNumber *)alpha
            progress:(NSNumber *)progress
           thickness:(NSNumber *)thickness;
@end


@interface CustomProgressBarRenderer : ACRBaseCardElementRenderer

@end

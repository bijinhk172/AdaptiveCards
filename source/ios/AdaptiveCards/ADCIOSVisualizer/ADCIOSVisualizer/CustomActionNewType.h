//
//  CustomActionNewType.h
//  ADCIOSVisualizer
//
//  Copyright © 2019 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef SWIFT_PACKAGE
#import "AdaptiveCards.h"
#else
#import <AdaptiveCards/AdaptiveCards.h>
#endif

@interface CustomActionNewType : ACOBaseActionElement <ACOIBaseActionElementParser>

@property UIColor *color;
@property NSInteger cornerradius;
@property UIAlertController *alertController;
@property NSString *alertMessage;

@end

@interface CustomActionNewTypeRenderer : ACRBaseActionElementRenderer

+ (CustomActionNewTypeRenderer *)getInstance;

@end

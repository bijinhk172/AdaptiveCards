//
//  ACRImageProperties
//  ACRImageProperties.h
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOBaseCardElement.h"
#import "ACOHostConfig.h"
#import "ACREnums.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOBaseCardElement.h"
#else
#import <AdaptiveCards/ACOBaseCardElement.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOHostConfig.h"
#else
#import <AdaptiveCards/ACOHostConfig.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACREnums.h"
#else
#import <AdaptiveCards/ACREnums.h>
#endif
#endif
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

struct ACRAspectRatio {
    CGFloat widthToHeight;
    CGFloat heightToWidth;
};
typedef struct ACRAspectRatio ACRAspectRatio;

@interface ACRImageProperties : NSObject

@property BOOL hasExplicitDimensions;
@property BOOL isAspectRatioNeeded;
@property CGSize contentSize;
@property ACRImageSize acrImageSize;
@property ACRHorizontalAlignment acrHorizontalAlignment;
@property ACRHeightType height;
@property CGFloat pixelWidth;
@property CGFloat pixelHeight;

- (instancetype)init:(ACOBaseCardElement *)acoElem config:(ACOHostConfig *)acoConfig image:(UIImage *)image;

- (void)updateContentSize:(CGSize)size;

+ (ACRAspectRatio)convertToAspectRatio:(CGSize)cgsize;
@end

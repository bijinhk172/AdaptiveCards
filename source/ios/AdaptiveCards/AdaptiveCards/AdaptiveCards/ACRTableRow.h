//
//  ACRTableRow.h
//  ACRTableRow
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRContentStackView.h"
#import "ACREnums.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRContentStackView.h"
#else
#import <AdaptiveCards/ACRContentStackView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACREnums.h"
#else
#import <AdaptiveCards/ACREnums.h>
#endif
#endif

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ACRColumnDefinition : NSObject

// if pixel, numeric has the pixel width, else has the fraction,
// the width / total relative width
@property CGFloat numeric;
// sum of all pixel width in a row
@property CGFloat totalPixelWidth;
// min width of the relative Width
@property CGFloat minWidth;
// the column definition was invalid; will be skipped in rendering
@property BOOL isValid;
// the column has pixel width;
@property BOOL isPixelWidth;

@property BOOL showGridLines;

- (instancetype)initWithPixelWidth:(CGFloat)numeric;

- (instancetype)initWithRelativeWidth:(CGFloat)numeric
                      totalPixelWidth:(CGFloat)totalPixelWidth;

@end

@interface ACRTableRowView : ACRContentStackView
// spacing between cells
@property CGFloat spacing;

- (instancetype)init:(ACOBaseCardElement *)acoElem
    columnDefinitions:(NSArray<ACRColumnDefinition *> *)columnDefinition
             rootView:(ACRView *)rootView
               inputs:(NSMutableArray *)inputs
           hostConfig:(ACOHostConfig *)acoConfig
            gridStyle:(ACRContainerStyle)gridStyle;

@end

NS_ASSUME_NONNULL_END

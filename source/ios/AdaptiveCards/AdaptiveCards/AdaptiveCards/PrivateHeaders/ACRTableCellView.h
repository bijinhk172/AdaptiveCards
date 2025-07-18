//
//  ACRTableCell.h
//  ACRTableCell
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRContentStackView.h"
#import "ACRView.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRContentStackView.h"
#else
#import <AdaptiveCards/ACRContentStackView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import <AdaptiveCards/ACRView.h>
#endif
#endif
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ACRTableCellDefinition : NSObject

@property ACRContainerStyle style;
@property ACRVerticalContentAlignment verticalAlignment;
@property ACRHorizontalAlignment horizontalAlignment;
@property CGFloat cellSpacing;

@end

@interface ACRTableCellView : ACRColumnView

- (instancetype)init:(ACOBaseCardElement *)baseCardElement
      cellDefinition:(ACRTableCellDefinition *)definition
            rootView:(ACRView *)rootView
              inputs:(NSMutableArray *)inputs
          hostConfig:(ACOHostConfig *)acoConfig;
@end

NS_ASSUME_NONNULL_END

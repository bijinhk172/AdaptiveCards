//
//  ACRImageSetUICollectionViewController
//  ACRImageSetUICollectionViewController.h
//  ADCIOSFramework
//
//  Copyright © 2017 Microsoft. All rights reserved.
//
#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRView.h"
#import "HostConfig.h"
#import "ImageSet.h"
#import "SharedAdaptiveCard.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import "ACRView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "HostConfig.h"
#else
#import "HostConfig.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ImageSet.h"
#else
#import "ImageSet.h"
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import "SharedAdaptiveCard.h"
#endif
#endif
#import <UIKit/UIKit.h>

@interface ACRImageSetUICollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (instancetype)init:(std::shared_ptr<AdaptiveCards::ImageSet> const &)imageSet
      WithHostConfig:(ACOHostConfig *)hostConfig
       WithSuperview:(UIView *)superview
            rootView:(ACRView *)rootView;
@end

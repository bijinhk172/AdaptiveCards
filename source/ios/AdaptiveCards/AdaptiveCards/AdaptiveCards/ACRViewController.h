//
//  ACRViewController.h
//  ACRViewController
//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOWarning.h"
#import "ACRActionDelegate.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOWarning.h"
#else
#import "ACOWarning.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionDelegate.h"
#else
#import "ACRActionDelegate.h"
#endif
#endif
#import "ACOAdaptiveCard.h"
#import "ACOHostConfig.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ACRViewController : UIViewController

- (instancetype)init:(ACOAdaptiveCard *)card hostconfig:(ACOHostConfig *)config frame:(CGRect)frame delegate:(id<ACRActionDelegate>)acrActionDelegate;
@end

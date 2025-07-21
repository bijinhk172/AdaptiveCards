//
//  ACRColumnSetRenderer
//  ACRColumnSetRenderer.h
//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRBaseCardElementRenderer.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRBaseCardElementRenderer.h"
#else
#import "ACRBaseCardElementRenderer.h"
#endif
#endif

@interface ACRColumnSetRenderer : ACRBaseCardElementRenderer

+ (ACRColumnSetRenderer *)getInstance;

@end

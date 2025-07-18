//
//  ACOBaseActionElementPrivate
//  ACOBaseActionElementPrivate.h
//
//  Copyright © 2017 Microsoft. All rights reserved.
//
#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOBaseActionElement.h"
#import "BaseActionElement.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOBaseActionElement.h"
#else
#import <AdaptiveCards/ACOBaseActionElement.h>
#endif
#ifdef SWIFT_PACKAGE
#import "BaseActionElement.h"
#else
#import <AdaptiveCards/BaseActionElement.h>
#endif
#endif

using namespace AdaptiveCards;

@interface ACOBaseActionElement ()

- (instancetype)initWithBaseActionElement:(std::shared_ptr<BaseActionElement> const &)element;
- (std::shared_ptr<BaseActionElement>)element;
- (void)setElem:(std::shared_ptr<BaseActionElement> const &)elem;
+ (instancetype)getACOActionElementFromAdaptiveElement:(std::shared_ptr<BaseActionElement> const &)element;

@end

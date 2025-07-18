//
//  ACOTokenExchangeResource.h
//  ACOTokenExchangeResourcePrivate
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOTokenExchangeResource.h"
#import "TokenExchangeResource.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOTokenExchangeResource.h"
#else
#import <AdaptiveCards/ACOTokenExchangeResource.h>
#endif
#ifdef SWIFT_PACKAGE
#import "TokenExchangeResource.h"
#else
#import <AdaptiveCards/TokenExchangeResource.h>
#endif
#endif

using namespace AdaptiveCards;

@interface ACOTokenExchangeResource ()

- (instancetype)init:(std::shared_ptr<TokenExchangeResource> const &)tokenExchangeResourceElement;
- (std::shared_ptr<TokenExchangeResource> const &)adaptiveTokenExchangeResource;

@end

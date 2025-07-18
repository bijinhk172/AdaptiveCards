//
//  ACOAuthentication.h
//  ACOAuthentication
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOAuthentication.h"
#import "Authentication.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOAuthentication.h"
#else
#import <AdaptiveCards/ACOAuthentication.h>
#endif
#ifdef SWIFT_PACKAGE
#import "Authentication.h"
#else
#import <AdaptiveCards/Authentication.h>
#endif
#endif

using namespace AdaptiveCards;

@interface ACOAuthentication ()

- (instancetype)init:(std::shared_ptr<Authentication> const &)adaptiveAuthentication;

@end

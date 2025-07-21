//
//  ACORefresh.h
//  ACORefresh
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACORefresh.h"
#import "Refresh.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACORefresh.h"
#else
#import "ACORefresh.h"
#endif
#ifdef SWIFT_PACKAGE
#import "Refresh.h"
#else
#import "Refresh.h"
#endif
#endif

using namespace AdaptiveCards;

@interface ACORefresh ()

- (instancetype)init:(std::shared_ptr<Refresh> const &)refreshElement;

@end

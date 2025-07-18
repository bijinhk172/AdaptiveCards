//
//  ACORemoteResourceInformationPrivate.h
//  ACORemoteResourceInformationPrivate
//
//  Copyright © 2018 Microsoft. All rights reserved.
//
#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACORemoteResourceInformation.h"
#import "RemoteResourceInformation.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACORemoteResourceInformation.h"
#else
#import <AdaptiveCards/ACORemoteResourceInformation.h>
#endif
#ifdef SWIFT_PACKAGE
#import "RemoteResourceInformation.h"
#else
#import <AdaptiveCards/RemoteResourceInformation.h>
#endif
#endif

@interface ACORemoteResourceInformation ()

- (instancetype)initWithRemoteResourceInformation:(AdaptiveCards::RemoteResourceInformation const &)remoteResourceInformation;

@end

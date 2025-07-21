//
//  ACOMediaEventPrivate.h
//  ACOMediaEventPrivate
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOMediaEvent.h"
#import "Media.h"
#import "MediaSource.h"
#import "SharedAdaptiveCard.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOMediaEvent.h"
#else
#import "ACOMediaEvent.h"
#endif
#ifdef SWIFT_PACKAGE
#import "Media.h"
#else
#import "Media.h"
#endif
#ifdef SWIFT_PACKAGE
#import "MediaSource.h"
#else
#import "MediaSource.h"
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import "SharedAdaptiveCard.h"
#endif
#endif
#import <Foundation/Foundation.h>

using namespace AdaptiveCards;

@interface ACOMediaSource ()

- (instancetype)initWithMediaSource:(std::shared_ptr<MediaSource> const &)mediaSource;

@end

@interface ACOMediaEvent ()

- (instancetype)initWithMedia:(std::shared_ptr<Media> const &)media;

@end

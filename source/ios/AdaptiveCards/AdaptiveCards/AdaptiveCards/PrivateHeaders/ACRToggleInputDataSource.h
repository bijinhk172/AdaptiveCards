//
//  ACRToggleInputDataSource
//  ACRToggleInputDataSource.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOBaseCardElement.h"
#import "ACRColumnSetView.h"
#import "ACRIBaseCardElementRenderer.h"
#import "ACRIBaseInputHandler.h"
#import "HostConfig.h"
#import "ToggleInput.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOBaseCardElement.h"
#else
#import "ACOBaseCardElement.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRColumnSetView.h"
#else
#import "ACRColumnSetView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseCardElementRenderer.h"
#else
#import "ACRIBaseCardElementRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseInputHandler.h"
#else
#import "ACRIBaseInputHandler.h"
#endif
#ifdef SWIFT_PACKAGE
#import "HostConfig.h"
#else
#import "HostConfig.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ToggleInput.h"
#else
#import "ToggleInput.h"
#endif
#endif

@interface ACRToggleInputDataSource : NSObject <ACRIBaseInputHandler>

@property NSString *id;
@property NSString *valueOn;
@property NSString *valueOff;
@property (weak) UISwitch *toggleSwitch;

- (instancetype)initWithInputToggle:(std::shared_ptr<AdaptiveCards::ToggleInput> const &)toggleInput
                     WithHostConfig:(std::shared_ptr<AdaptiveCards::HostConfig> const &)hostConfig;
@end

//
//  ACRChoiceSetViewDataSourceCompactStyle
//  ACRChoiceSetViewDataSourceCompactStyle.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRIBaseInputHandler.h"
#import "ACRView.h"
#import "ChoiceInput.h"
#import "ChoiceSetInput.h"
#import "HostConfig.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRIBaseInputHandler.h"
#else
#import <AdaptiveCards/ACRIBaseInputHandler.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import <AdaptiveCards/ACRView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ChoiceInput.h"
#else
#import <AdaptiveCards/ChoiceInput.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ChoiceSetInput.h"
#else
#import <AdaptiveCards/ChoiceSetInput.h>
#endif
#ifdef SWIFT_PACKAGE
#import "HostConfig.h"
#else
#import <AdaptiveCards/HostConfig.h>
#endif
#endif
#import <UIKit/UIKit.h>

@interface ACRChoiceSetViewDataSourceCompactStyle : NSObject <UITableViewDataSource, UITableViewDelegate, UIPickerViewDataSource, UIPickerViewDelegate, ACRIBaseInputHandler>
@property NSString *id;
@property BOOL isMultiChoicesAllowed;
@property NSMutableDictionary *results;
@property (weak) ACRView *rootView;

- (instancetype)initWithInputChoiceSet:(std::shared_ptr<AdaptiveCards::ChoiceSetInput> const &)choiceSet
                              rootView:(ACRView *)rootView;
@end

//
//  ACRDateTextField
//  ACRDateTextField.h
//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRIBaseInputHandler.h"
#import "ACRTextField.h"
#import "BaseInputElement.h"
#import "SharedAdaptiveCard.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRIBaseInputHandler.h"
#else
#import "ACRIBaseInputHandler.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTextField.h"
#else
#import "ACRTextField.h"
#endif
#ifdef SWIFT_PACKAGE
#import "BaseInputElement.h"
#else
#import "BaseInputElement.h"
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import "SharedAdaptiveCard.h"
#endif
#endif
#import <UIKit/UIKit.h>

@interface ACRDateTextField : ACRTextField <ACRIBaseInputHandler>
@property NSDate *min;
@property NSDate *max;
@property NSRegularExpression *regularExpression;

- (instancetype)initWithTimeDateInput:(std::shared_ptr<AdaptiveCards::BaseInputElement> const &)elem
                            dateStyle:(NSDateFormatterStyle)dateStyle;
- (IBAction)update:(UIDatePicker *)picker;
- (IBAction)dismiss;
@end

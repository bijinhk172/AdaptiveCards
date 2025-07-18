//
//  ACRLongPressGestureRecognizerFactory
//  ACRLongPressGestureRecognizerFactory.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//
#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRBaseTarget.h"
#import "ACRIContentHoldingView.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACRBaseTarget.h"
#else
#import <AdaptiveCards/ACRBaseTarget.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIContentHoldingView.h"
#else
#import <AdaptiveCards/ACRIContentHoldingView.h>
#endif
#endif
#import "ACRTapGestureRecognizerEventHandler.h"
#import "ACRView.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ACRTapGestureRecognizerFactory : NSObject
/// instantiates a target for UITapGestureRecognizer object
/// and instantiate a tap gesture reconginizer with target, and return it
+ (ACRBaseTarget *_Nullable)addTapGestureRecognizerToUIView:(UIView<ACRIContentHoldingView> *_Nonnull)viewGroup
                                                   rootView:(ACRView *_Nonnull)rootView
                                              recipientView:(UIView *_Nonnull)receipientView
                                              actionElement:(ACOBaseActionElement *_Nonnull)action
                                                 hostConfig:(ACOHostConfig *_Nonnull)config;

+ (UITapGestureRecognizer *_Nullable)getGestureRecognizer:(UIView<ACRIContentHoldingView> *_Nonnull)viewGroup
                                                   target:(NSObject<ACRSelectActionDelegate> *_Nonnull)target;

+ (void)addTapGestureRecognizerToUITextView:(UITextView *_Nonnull)textView
                                     target:(NSObject<ACRSelectActionDelegate> *_Nonnull)target
                                   rootView:(ACRView *_Nonnull)rootView
                                 hostConfig:(ACOHostConfig *_Nonnull)config;

@end

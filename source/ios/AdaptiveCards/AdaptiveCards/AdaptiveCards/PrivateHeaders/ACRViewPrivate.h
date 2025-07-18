//
//  ACRViewPrivate
//  ACRViewPrivate.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOInputResults.h"
#import "ACRErrors.h"
#import "ACRRegistration.h"
#import "ACRTargetBuilderDirector.h"
#import "ACRView.h"
#import "ActionParserRegistration.h"
#import "BackgroundImage.h"
#import "Image.h"
#import "SharedAdaptiveCard.h"
#import "StyledCollectionElement.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOInputResults.h"
#else
#import <AdaptiveCards/ACOInputResults.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRErrors.h"
#else
#import <AdaptiveCards/ACRErrors.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRegistration.h"
#else
#import <AdaptiveCards/ACRRegistration.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTargetBuilderDirector.h"
#else
#import <AdaptiveCards/ACRTargetBuilderDirector.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import <AdaptiveCards/ACRView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ActionParserRegistration.h"
#else
#import <AdaptiveCards/ActionParserRegistration.h>
#endif
#ifdef SWIFT_PACKAGE
#import "BackgroundImage.h"
#else
#import <AdaptiveCards/BackgroundImage.h>
#endif
#ifdef SWIFT_PACKAGE
#import "Image.h"
#else
#import <AdaptiveCards/Image.h>
#endif
#ifdef SWIFT_PACKAGE
#import "SharedAdaptiveCard.h"
#else
#import <AdaptiveCards/SharedAdaptiveCard.h>
#endif
#ifdef SWIFT_PACKAGE
#import "StyledCollectionElement.h"
#else
#import <AdaptiveCards/StyledCollectionElement.h>
#endif
#endif

using namespace AdaptiveCards;

@interface ACRView ()

typedef void (^ObserverActionBlock)(NSObject<ACOIResourceResolver> *resolver,
                                    NSString *key, std::shared_ptr<BaseCardElement> const &elem, NSURL *url, ACRView *rootView);

typedef void (^ObserverActionBlockForBaseAction)(NSObject<ACOIResourceResolver> *resolver,
                                                 NSString *key, std::shared_ptr<BaseActionElement> const &elem, NSURL *url, ACRView *rootView);

- (void)setImageContext:(NSString *)key context:(std::shared_ptr<BaseCardElement> const &)elem;

// Walk through adaptive cards elements and if images are found, download and process images concurrently and on different thread
// from main thread, so images process won't block UI thread.
- (void)addBaseCardElementListToConcurrentQueue:(std::vector<std::shared_ptr<BaseCardElement>> const &)body registration:(ACRRegistration *)registration;
// async method
- (void)loadImagesForActionsAndCheckIfAllActionsHaveIconImages:(std::vector<std::shared_ptr<BaseActionElement>> const &)actions hostconfig:(ACOHostConfig *)hostConfig hash:(NSNumber *)hash;

- (void)loadImage:(std::string const &)urlStr;

- (void)loadBackgroundImageAccordingToResourceResolverIF:(std::shared_ptr<BackgroundImage> const &)backgroundImage key:(NSString *)key observerAction:(ObserverActionBlock)observerAction;

- (void)loadImageAccordingToResourceResolverIFFromString:(std::string const &)url
                                                     key:(NSString *)key
                                          observerAction:(ObserverActionBlock)observerAction;

- (void)loadImageAccordingToResourceResolverIF:(std::shared_ptr<BaseCardElement> const &)elem
                                           key:(NSString *)key
                                observerAction:(ObserverActionBlock)observerAction;

- (void)removeObserverOnImageView:(NSString *)KeyPath onObject:(NSObject *)object keyToImageView:(NSString *)key;

- (void)updatePaddingMap:(std::shared_ptr<StyledCollectionElement> const &)collection view:(UIView *)view;

- (UIView *)getBleedTarget:(InternalId const &)internalId;

- (ACRTargetBuilderDirector *)getActionsTargetBuilderDirector;

- (ACRTargetBuilderDirector *)getSelectActionsTargetBuilderDirector;

- (ACRTargetBuilderDirector *)getQuickReplyTargetBuilderDirector;

- (void)enqueueIntermediateTextProcessingResult:(NSDictionary *)data
                                      elementId:(NSString *)elementId;

- (void)addWarnings:(ACRWarningStatusCode)statusCode mesage:(NSString *)message;

- (ACRColumnView *)getParent:(ACRColumnView *)child;

- (void)setParent:(ACRColumnView *)parent child:(ACRColumnView *)child;

- (void)pushCurrentShowcard:(ACRColumnView *)showcard;

- (void)popCurrentShowcard;

- (ACRColumnView *)peekCurrentShowCard;

- (ACOInputResults *)dispatchAndValidateInput:(ACRColumnView *)parent;

- (void)removeObserver:(NSObject *)observer forKeyPath:(NSString *)path onObject:(NSObject *)object;

- (void)setContext:(ACORenderContext *)context;

@end

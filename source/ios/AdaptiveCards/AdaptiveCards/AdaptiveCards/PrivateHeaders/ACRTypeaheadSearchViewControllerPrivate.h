//
//  ACRTypeaheadSearchViewControllerPrivate.h
//  AdaptiveCards
//
//  Copyright © 2023 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOTypeaheadDebouncer.h"
#import "ACOTypeaheadSearchHandler.h"
#import "ACRChoiceSetCompactStyleView.h"
#import "ACRChoiceSetFilteredStyleView.h"
#import "ACRTypeaheadSearchParameters.h"
#import "ACRView.h"
#import "BaseCardElement.h"
#import "HostConfig.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOTypeaheadDebouncer.h"
#else
#import <AdaptiveCards/ACOTypeaheadDebouncer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOTypeaheadSearchHandler.h"
#else
#import <AdaptiveCards/ACOTypeaheadSearchHandler.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRChoiceSetCompactStyleView.h"
#else
#import <AdaptiveCards/ACRChoiceSetCompactStyleView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRChoiceSetFilteredStyleView.h"
#else
#import <AdaptiveCards/ACRChoiceSetFilteredStyleView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTypeaheadSearchParameters.h"
#else
#import <AdaptiveCards/ACRTypeaheadSearchParameters.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import <AdaptiveCards/ACRView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "BaseCardElement.h"
#else
#import <AdaptiveCards/BaseCardElement.h>
#endif
#ifdef SWIFT_PACKAGE
#import "HostConfig.h"
#else
#import <AdaptiveCards/HostConfig.h>
#endif
#endif
#import "ACOTypeaheadDynamicChoicesService.h"
#import <UIKit/UIKit.h>

@interface ACRTypeaheadSearchViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, ACRTypeaheadSearchProtocol>

@property NSString *id;
@property (weak) UIView *filteredListView;
@property UISearchBar *searchBar;
@property UIView *searchBarSeparator;
@property UIActivityIndicatorView *loader;
@property UILabel *searchStateTitleLabel;
@property UILabel *searchStateSubtitleLabel;
@property UIImageView *searchStateImageView;
@property UIStackView *stackViewContainer;

- (instancetype)initWithInputChoiceSet:(ACOBaseCardElement *)acoElem
                              rootView:(ACRView *)rootView
                            hostConfig:(ACOHostConfig *)acoConfig
                    filteredDataSource:(ACOFilteredDataSource *)filteredDataSource
                filteredStyleValidator:(ACOChoiceSetFilteredStyleValidator *)validator
                    typeaheadViewTitle:(NSString *)typeaheadViewTitle
                     choiceSetDelegate:(id<ACRChoiceSetFilteredDelegate>)choiceSetDelegate
                     searchStateParams:(ACRTypeaheadStateAllParameters *)searchStateParams;
@end

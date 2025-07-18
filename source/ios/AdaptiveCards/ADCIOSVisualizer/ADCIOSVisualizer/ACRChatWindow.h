//
//  ACRChatWindow
//  ACRChatWindow.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef SWIFT_PACKAGE
#import "AdaptiveCards.h"
#else
#import <AdaptiveCards/AdaptiveCards.h>
#endif
#import <UIKit/UIKit.h>

@interface ACRChatWindow : NSObject <UITableViewDataSource, UITableViewDelegate>

extern NSString *identifier;

@property NSObject<ACRActionDelegate> *adaptiveCardsDelegates;
@property NSObject<ACRMediaDelegate> *adaptiveCardsMediaDelegates;

- (instancetype)init:(CGFloat)width;
- (void)insertCard:(NSString *)card;
- (void)insertView:(UIView *)view;
- (void)deleteAllRows:(UITableView *)tableView;
- (void)prepareForRedraw;

@end

@interface ACRChatWindowCell : UITableViewCell

@property (nonatomic) ACRView *adaptiveCardView;
@end

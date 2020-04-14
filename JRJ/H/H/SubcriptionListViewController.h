//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class HTImageView, MessegeKKTableDataSource, NSMutableArray, NSMutableDictionary;

@interface SubcriptionListViewController : KKTableViewController
{
    NSMutableDictionary *_messageDic;
    HTImageView *_userImageView;
    NSMutableArray *_allMessages;
    MessegeKKTableDataSource *_allSource;
    NSMutableArray *_subMsgList;
    NSMutableArray *_messageList;
    NSMutableArray *_switchArray;
}

@property(retain, nonatomic) NSMutableArray *switchArray; // @synthesize switchArray=_switchArray;
- (void).cxx_destruct;
- (id)getChatConversationWithNSIndexPath:(id)arg1;
- (void)handleSwitchArrayWithIsOn:(_Bool)arg1 withChatConversation:(id)arg2;
- (void)updateSwitchWithStatus:(_Bool)arg1 withChatConversation:(id)arg2;
- (void)receiveMessageNotification:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)clickTitleMore;
- (void)dealAllUnRead;
- (void)didPressShareButton;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)requestMessageList;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)refreshConversation;
- (void)didUpdateUnreadNumber:(id)arg1;
- (void)showPurchaseNewStock;
- (void)didClickedChat:(id)arg1 indexPath:(id)arg2;
- (void)didClickedNewChat;
- (void)reloadData;
- (_Bool)allMsgContainsWithMsgType:(long long)arg1;
- (void)addChatToSubMsgListWithMsgType:(long long)arg1 withSwitchOpen:(long long)arg2;
- (void)addConversationWithMsgType:(long long)arg1;
- (void)reloadConversation;
- (_Bool)isExistMessageTypeInMsgList:(long long)arg1;
- (_Bool)isExistMessageTypeInSubMsgList:(long long)arg1;
- (void)handleRequestArray:(id)arg1;
- (void)userLoginOut;
- (void)userLoginSuccess;
- (void)userImageViewTouched:(id)arg1;
- (id)userBarbuttonItem;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshMessageList;
- (void)registNotifications;
- (void)viewDidAppear:(_Bool)arg1;
- (void)requestDataWhenTakeSwitch;
- (void)viewDidLoad;

@end

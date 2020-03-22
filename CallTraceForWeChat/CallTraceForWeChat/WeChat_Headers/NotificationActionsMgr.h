//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMNewSessionMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class MMDisturbConfirmViewController, MMToastViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UNNotificationSettings;

@interface NotificationActionsMgr : MMService <PBMessageObserverDelegate, UNUserNotificationCenterDelegate, IMMNewSessionMgrExt, MMServiceProtocol>
{
    NSMutableDictionary *_actionCompletions;
    MMToastViewController *_toastView;
    MMDisturbConfirmViewController *_distrubConfirmViewController;
    NSMutableArray *_sendingMessages;
    UNNotificationSettings *_notificationSettings;
    NSDictionary *_actionMaping;
}

@property(readonly, nonatomic) UNNotificationSettings *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
@property(readonly, retain, nonatomic) NSDictionary *actionMaping; // @synthesize actionMaping=_actionMaping;
- (void).cxx_destruct;
- (void)handleApnsDeepLink:(id)arg1;
- (void)handleReceiveLocalNotification:(id)arg1;
- (void)handleReceiveRemoteNotification:(id)arg1;
- (void)handleStatusNotifyResp:(id)arg1;
- (void)handleSendMsgResp:(id)arg1;
- (void)handleSetPushMuteResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)genRandomClienMsgId;
- (void)markChatRead:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyUserSendMessageFailWithClientId:(unsigned int)arg1 toUsername:(id)arg2;
- (void)replyText:(id)arg1 toUsername:(id)arg2 userInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)onAppIconTotalUnreadCountChange:(unsigned int)arg1;
- (void)handleReplyYoAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMuteChatAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReplyAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReply1Action:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleUnlockDeviceAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleConfirmLoginAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleGoToMessageAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMarkAsReadAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateShortcutsBecauseOfDisturbMayChanged;
- (_Bool)isDontDisturbModeAndCheckRestore:(_Bool)arg1;
- (void)_muteForSeconds:(unsigned int)arg1;
- (void)unmute;
- (void)muteForOneHour;
- (void)showDisturbConfirmViewController;
- (void)handleActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 isRemote:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleRemoteActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleLocalActionWithIdentifier:(id)arg1 forUserInfo:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)registerNotification;
- (void)onServiceTerminate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

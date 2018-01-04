//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, WAChatSession, WAContact, WAMessage, WAMessageID, WAPBWebMessageInfo, WAProfilePictureItem, WAWebClient, WAWebClientRecentMessages, WAWebClientRequestInfo;

@protocol WAWebClientDelegate <NSObject>
- (void)webClient:(WAWebClient *)arg1 displayedMessageNotificationsWithCompletion:(void (^)(NSArray *, unsigned int, unsigned int))arg2;
- (NSArray *)webClient:(WAWebClient *)arg1 mostContactedChatsWithPreferredContentType:(int)arg2;
- (void)webClient:(WAWebClient *)arg1 vCardsFromKnownContactsForWhatsAppID:(NSString *)arg2 completion:(void (^)(NSArray *))arg3;
- (NSArray *)webClient:(WAWebClient *)arg1 starredMessagesInChatWithJID:(NSString *)arg2 olderThanMessageID:(WAMessageID *)arg3 limit:(unsigned int)arg4 gifOnly:(BOOL)arg5;
- (void)webclient:(WAWebClient *)arg1 fetchMessagesMatchingSearchTerm:(NSString *)arg2 inChatWithJID:(NSString *)arg3 offset:(unsigned int)arg4 limit:(unsigned int)arg5 completion:(void (^)(NSArray *, BOOL))arg6;
- (NSArray *)allWhatsAppableContactsInWebClient:(WAWebClient *)arg1;
- (NSArray *)allChatSessionsInWebClient:(WAWebClient *)arg1;
- (void)webClient:(WAWebClient *)arg1 didSetStatusPrivacyTo:(int)arg2 jids:(NSArray *)arg3;
- (unsigned int)webClient:(WAWebClient *)arg1 didPin:(BOOL)arg2 chatWithJID:(NSString *)arg3 pinDate:(NSDate *)arg4;
- (unsigned int)webClient:(WAWebClient *)arg1 didSetMute:(BOOL)arg2 ofStatusWithJID:(NSString *)arg3;
- (unsigned int)webClient:(WAWebClient *)arg1 didAddContact:(WAContact *)arg2;
- (void)webClient:(WAWebClient *)arg1 didSetBlockedState:(BOOL)arg2 ofUserWithJID:(NSString *)arg3 reason:(NSString *)arg4 requestInfo:(WAWebClientRequestInfo *)arg5 completion:(void (^)(int))arg6;
- (void)webClient:(WAWebClient *)arg1 didCreateGroupWithSubject:(NSString *)arg2 participants:(NSArray *)arg3 requestInfo:(WAWebClientRequestInfo *)arg4 completion:(void (^)(int))arg5;
- (void)webClient:(WAWebClient *)arg1 didChangeSubjectOfGroupWithJID:(NSString *)arg2 to:(NSString *)arg3 requestInfo:(WAWebClientRequestInfo *)arg4 completion:(void (^)(int))arg5;
- (void)webClient:(WAWebClient *)arg1 didLeaveGroupWithJID:(NSString *)arg2 requestInfo:(WAWebClientRequestInfo *)arg3 completion:(void (^)(int))arg4;
- (void)webClient:(WAWebClient *)arg1 didPromoteParticipantWithJID:(NSString *)arg2 inChatWithJID:(NSString *)arg3 requestInfo:(WAWebClientRequestInfo *)arg4 completion:(void (^)(int))arg5;
- (void)webClient:(WAWebClient *)arg1 didAddParticipants:(NSArray *)arg2 inChatWithJID:(NSString *)arg3 requestInfo:(WAWebClientRequestInfo *)arg4 completion:(void (^)(int))arg5;
- (void)webClient:(WAWebClient *)arg1 didRemoveParticipants:(NSArray *)arg2 inChatWithJID:(NSString *)arg3 requestInfo:(WAWebClientRequestInfo *)arg4 completion:(void (^)(int))arg5;
- (void)webClient:(WAWebClient *)arg1 didRequestMediaUploadForMessageID:(WAMessageID *)arg2 inChatWithJID:(NSString *)arg3 extraRecipientJIDs:(NSSet *)arg4 requestID:(NSString *)arg5;
- (void)webClient:(WAWebClient *)arg1 didDeletePictureForChatWithJID:(NSString *)arg2 requestInfo:(WAWebClientRequestInfo *)arg3 completion:(void (^)(int))arg4;
- (void)webClient:(WAWebClient *)arg1 didSetPicture:(NSData *)arg2 forChatWithJID:(NSString *)arg3 requestInfo:(WAWebClientRequestInfo *)arg4 completion:(void (^)(int))arg5;
- (void)webClient:(WAWebClient *)arg1 didSetSpamStatus:(BOOL)arg2 ofChatWithJID:(NSString *)arg3 requestInfo:(WAWebClientRequestInfo *)arg4 completion:(void (^)(int))arg5;
- (unsigned int)webClient:(WAWebClient *)arg1 didUnstarAllMessagesInChatWithJID:(NSString *)arg2;
- (unsigned int)didUnstarAllMessagesInWebClient:(WAWebClient *)arg1;
- (unsigned int)webClient:(WAWebClient *)arg1 didSetStarredState:(BOOL)arg2 ofMessageIDs:(NSArray *)arg3 inChatWithJID:(NSString *)arg4;
- (unsigned int)webClient:(WAWebClient *)arg1 didSetMuteDate:(NSDate *)arg2 fromMuteDate:(NSDate *)arg3 ofChatWithJID:(NSString *)arg4;
- (unsigned int)webClient:(WAWebClient *)arg1 didSetArchivedState:(BOOL)arg2 ofChatWithJID:(NSString *)arg3 messageID:(WAMessageID *)arg4;
- (unsigned int)webClient:(WAWebClient *)arg1 didDeleteMessageIDs:(NSArray *)arg2 inChatWithJID:(NSString *)arg3;
- (void)webClient:(WAWebClient *)arg1 didClearChatWithJID:(NSString *)arg2 includingStarred:(BOOL)arg3 lastMessageID:(WAMessageID *)arg4 completion:(void (^)(int))arg5;
- (unsigned int)webClient:(WAWebClient *)arg1 didDeleteChatWithJID:(NSString *)arg2 messageID:(WAMessageID *)arg3;
- (void)webClient:(WAWebClient *)arg1 didPlayIncomingMessageWithStanzaID:(NSString *)arg2 participant:(NSString *)arg3 inChatWithJID:(NSString *)arg4;
- (void)webClient:(WAWebClient *)arg1 didUpdateStatus:(NSString *)arg2 requestInfo:(WAWebClientRequestInfo *)arg3 completion:(void (^)(int))arg4;
- (unsigned int)webClient:(WAWebClient *)arg1 hasSeenStatus:(WAMessageID *)arg2 inChatWithJID:(NSString *)arg3;
- (unsigned int)webClient:(WAWebClient *)arg1 didReadUntilMessageID:(WAMessageID *)arg2 inChatWithJID:(NSString *)arg3 readCount:(int)arg4;
- (void)webClient:(WAWebClient *)arg1 didRequestResendMessage:(WAMessage *)arg2;
- (BOOL)webClient:(WAWebClient *)arg1 didRelayMessage:(WAPBWebMessageInfo *)arg2;
- (WAProfilePictureItem *)webClient:(WAWebClient *)arg1 profilePictureItemForJID:(NSString *)arg2;
- (WAChatSession *)webClient:(WAWebClient *)arg1 chatSessionForJID:(NSString *)arg2;
- (WAMessage *)webClient:(WAWebClient *)arg1 existingOutgoingMessageWithStanzaID:(NSString *)arg2 inJID:(NSString *)arg3;
- (void)webClient:(WAWebClient *)arg1 didChangeOutgoingChatStateToJID:(NSString *)arg2;
- (void)webClient:(WAWebClient *)arg1 didSubscribeToJID:(NSString *)arg2;
- (NSArray *)webClient:(WAWebClient *)arg1 outgoingMessagesAndPTTWithOrAfterMessageID:(WAMessageID *)arg2 inChatSession:(WAChatSession *)arg3;
- (WAWebClientRecentMessages *)webClient:(WAWebClient *)arg1 statusMessagesInChatSession:(WAChatSession *)arg2;
- (WAWebClientRecentMessages *)webClient:(WAWebClient *)arg1 recentMessagesInChatSession:(WAChatSession *)arg2 activity:(int)arg3;
- (NSArray *)webClient:(WAWebClient *)arg1 memberJIDsInBroadcastList:(WAChatSession *)arg2;
- (NSArray *)webClient:(WAWebClient *)arg1 messagesInChatSession:(WAChatSession *)arg2 afterMessageID:(WAMessageID *)arg3 count:(unsigned int)arg4 countExceeded:(out char *)arg5;
- (NSDictionary *)webClient:(WAWebClient *)arg1 JIDToChatSessionMapWithJIDs:(NSSet *)arg2;
- (unsigned int)webClient:(WAWebClient *)arg1 countMediaMessagesInJID:(NSString *)arg2;
- (unsigned int)webClient:(WAWebClient *)arg1 countMessagesInJID:(NSString *)arg2 ofType:(int)arg3;
- (NSArray *)webClient:(WAWebClient *)arg1 mediaMessagesInJID:(NSString *)arg2 count:(unsigned int)arg3 withOrder:(unsigned int)arg4 relativeToMessageID:(WAMessageID *)arg5;
- (NSArray *)webClient:(WAWebClient *)arg1 messagesInJID:(NSString *)arg2 ofType:(int)arg3 count:(unsigned int)arg4 withOrder:(unsigned int)arg5 relativeToMessageID:(WAMessageID *)arg6;
- (NSArray *)webClient:(WAWebClient *)arg1 messagesInJID:(NSString *)arg2 count:(unsigned int)arg3 withOrder:(unsigned int)arg4 relativeToMessageID:(WAMessageID *)arg5;
@end


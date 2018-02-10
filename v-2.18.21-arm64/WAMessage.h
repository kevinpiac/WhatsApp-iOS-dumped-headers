//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatStorageManagedObject.h"

#import "QLPreviewControllerDataSource-Protocol.h"
#import "QLPreviewItem-Protocol.h"
#import "WAIndexableManagedObject-Protocol.h"
#import "WAMediaUploadable-Protocol.h"

@class NSArray, NSAttributedString, NSData, NSDate, NSManagedObjectID, NSNumber, NSPointerArray, NSSet, NSString, NSURL, UIColor, WA2Tuple, WAChatSession, WAFuture, WAGroupMember, WAMediaItem, WAMessageHelper, WAMessageID, WAMessageInfo, WAPaymentTransaction, WAWeakTimer;
@protocol NSObject><NSCopying, WADeviceDate, WAServerDate;

@interface WAMessage : WAChatStorageManagedObject <QLPreviewItem, QLPreviewControllerDataSource, WAIndexableManagedObject, WAMediaUploadable>
{
    NSPointerArray *_chatCellDataObjects;
    long long _maximumNumberOfLinesInBubble;
    float _uploadProgress;
    struct CGSize _previewAspectRatio;
    NSURL *_exportedURL;
    WAFuture *_saveXMPPDataFuture;
    _Bool _isFileKnownToExistAtMediaPath;
    WAWeakTimer *_progressSpinnerSuppressionTimer;
    NSDate<WADeviceDate> *_progressSpinnerSuppressionStartDate;
    WAMessageHelper *_helper;
    _Bool _isMediaInspected;
    _Bool _networkActivity;
    NSData *_streamingSidecar;
    WAChatSession *_cachedQuotedChatSession;
    int _change;
    _Bool _offlineStorage;
    _Bool _active;
    _Bool _needsLocalNotification;
    _Bool _alwaysAutoDownload;
    _Bool _webClientResendRequest;
    _Bool _liveLocationTransientState;
    _Bool _fastForward;
    NSString *_transientParticipantJID;
    NSData *_transientXMPPThumbnailData;
    unsigned long long _notificationBehavior;
    NSURL *_cameraRollReferenceUrl;
    unsigned long long _originationFlags;
    NSData *_locationKeyDistributionMessage;
    double _forwardAge;
}

+ (_Bool)isMessageStatusSent:(int)arg1;
+ (id)messageTypeIconForMessage:(id)arg1;
+ (id)messageTypeStringForMessageType:(int)arg1 mediaOrigin:(int)arg2 status:(int)arg3 systemEvent:(int)arg4 isFromMe:(_Bool)arg5 isPayment:(_Bool)arg6 preferredColor:(id)arg7 fontSize:(double)arg8;
+ (id)messageTypeStringForMessage:(id)arg1 preferredColor:(id)arg2 fontSize:(double)arg3;
+ (id)randomMediaUploadIdentifier;
+ (id)randomMediaEncryptionKey;
+ (_Bool)getChatJID:(id *)arg1 stanzaID:(id *)arg2 participant:(id *)arg3 isFromMe:(_Bool *)arg4 fromUniqueKey:(id)arg5;
+ (unsigned int)enumMaskForRange:(struct _NSRange)arg1;
+ (id)eligibleForUnreadMessagesPredicate;
+ (id)mediaSectionIDUpperBoundForDocumentMessages;
+ (id)mediaSectionIDLowerBoundForDocumentMessages;
+ (id)mediaSectionIDUpperBoundForMediaMessages;
+ (id)mediaSectionIDForMessage:(id)arg1 usingDateFormatter:(id)arg2 requireLocalMedia:(_Bool)arg3;
+ (id)mediaSectionIDForMigratedMessage:(id)arg1 usingDateFormatter:(id)arg2;
+ (id)dateFormatterForMediaSectionID;
+ (id)allMessageBubbleTableViewCellReuseIdentifiers;
+ (void)notifyDidFinishExtractingURLs;
+ (void)createNewOutgoingMessageWithPlace:(id)arg1 liveLocationEndDate:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)createNewOutgoingMessageWithVideoURL:(id)arg1 isGIF:(_Bool)arg2 gifProvider:(id)arg3 caption:(id)arg4 replyingToMessage:(id)arg5 inChatSession:(id)arg6 interactiveAnnotations:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)createNewOutgoingMessageWithDocumentAttachment:(id)arg1 replyingToMessage:(id)arg2 inChatSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)createNewOutgoingMessageWithImage:(id)arg1 caption:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4 interactiveAnnotations:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)createNewOutgoingMessageWithMedia:(id)arg1 MIMEType:(id)arg2 caption:(id)arg3 replyingToMessage:(id)arg4 inChatSession:(id)arg5 messageType:(int)arg6 mediaOrigin:(int)arg7 interactiveAnnotations:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (id)insertMessageWithID:(id)arg1 localJID:(id)arg2 date:(id)arg3 type:(int)arg4 context:(id)arg5;
+ (_Bool)areAllMessages:(id)arg1 ofType:(int)arg2;
@property(nonatomic) _Bool fastForward; // @synthesize fastForward=_fastForward;
@property(nonatomic) double forwardAge; // @synthesize forwardAge=_forwardAge;
@property(nonatomic) _Bool liveLocationTransientState; // @synthesize liveLocationTransientState=_liveLocationTransientState;
@property(copy, nonatomic) NSData *locationKeyDistributionMessage; // @synthesize locationKeyDistributionMessage=_locationKeyDistributionMessage;
@property(nonatomic) unsigned long long originationFlags; // @synthesize originationFlags=_originationFlags;
@property(retain, nonatomic) NSURL *cameraRollReferenceUrl; // @synthesize cameraRollReferenceUrl=_cameraRollReferenceUrl;
@property(nonatomic) _Bool alwaysAutoDownload; // @synthesize alwaysAutoDownload=_alwaysAutoDownload;
@property(nonatomic) _Bool needsLocalNotification; // @synthesize needsLocalNotification=_needsLocalNotification;
@property(nonatomic) unsigned long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) NSData *transientXMPPThumbnailData; // @synthesize transientXMPPThumbnailData=_transientXMPPThumbnailData;
@property(copy, nonatomic) NSString *transientParticipantJID; // @synthesize transientParticipantJID=_transientParticipantJID;
@property(nonatomic) _Bool networkActivity; // @synthesize networkActivity=_networkActivity;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *recipientsJids; // @dynamic recipientsJids;
@property(readonly, nonatomic) long long httpRetryCount; // @dynamic httpRetryCount;
@property(readonly, nonatomic) _Bool isIncomingStatusPlaceholder;
@property(readonly, nonatomic, getter=isTextOrURL) _Bool textOrURL;
@property(readonly, nonatomic) _Bool isPTT;
@property(readonly, nonatomic) int mediaOrigin; // @dynamic mediaOrigin;
@property(readonly, nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *fileHash;
@property(readonly, nonatomic) id <NSObject><NSCopying> uniqueID; // @dynamic uniqueID;
@property(readonly, copy, nonatomic) NSString *mediaUploadPath; // @dynamic mediaUploadPath;
@property(readonly, copy, nonatomic) NSString *mediaFilePath; // @dynamic mediaFilePath;
@property(readonly, nonatomic) _Bool containsYouTubeContent;
@property(readonly, copy, nonatomic) NSString *encFileHash;
- (void)setMediaKey:(id)arg1 base64EncHash:(id)arg2;
- (void)setMediaKey:(id)arg1;
@property(readonly, copy, nonatomic) NSData *mediaKey;
- (_Bool)containsMentions;
@property(readonly, nonatomic) _Bool canEverBeForwarded;
@property(copy, nonatomic) NSString *originalFilename;
@property(readonly, nonatomic) NSString *preferredFilenameForChatSessionExport;
@property(readonly, nonatomic) NSString *preferredFilenameForExport;
@property(readonly, nonatomic) NSString *localizedDocumentTitle;
@property(readonly, nonatomic) NSString *relativeXMPPThumbnailPath;
@property(readonly, nonatomic) NSString *relativeMediaPath;
@property(nonatomic) long long vCardCount;
@property(copy, nonatomic) NSString *vCardString;
@property(copy, nonatomic) NSString *vCardName;
@property(copy, nonatomic) NSString *MIMEType;
@property(retain, nonatomic) NSNumber *movieDuration;
@property(nonatomic) long long pageCount;
@property(nonatomic) long long mediaHeight;
@property(nonatomic) long long mediaWidth;
@property(readonly, nonatomic) _Bool hasValidMediaDimensions;
@property(readonly, nonatomic) _Bool containsImageVideoOrGIF;
@property(nonatomic) _Bool liveLocation;
@property(nonatomic) long long liveLocationSequenceNumber;
@property(retain, nonatomic) NSDate<WAServerDate> *liveLocationEndDate;
@property(nonatomic) float latitude;
@property(nonatomic) float longitude;
@property(copy, nonatomic) NSString *placeDetails;
@property(nonatomic) int systemEvent;
- (void)setMultiGroupEventAuthorJID:(id)arg1 participantJIDs:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *multiGroupMemberEventParticipantJIDs;
@property(readonly, copy, nonatomic) NSString *multiGroupMemberEventAuthorJID;
@property(readonly, nonatomic, getter=isMultiGroupMemberEvent) _Bool multiGroupMemberEvent;
@property(readonly, nonatomic, getter=isUserJoinedEvent) _Bool userJoinedEvent;
@property(readonly, nonatomic, getter=isUserMessage) _Bool userMessage;
- (void)inspectMediaIfNeeded;
- (_Bool)canFormAlbumWithMessage:(id)arg1;
- (_Bool)canFormAlbumWithMessageBasedOnSender:(id)arg1;
@property(readonly, nonatomic, getter=isEligibleForAlbum) _Bool eligibleForAlbum;
@property(readonly, nonatomic) _Bool shouldSuppressProgressSpinner;
- (void)internalSetNetworkActivity:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasPendingDownloadTask;
@property(copy, nonatomic) NSData *streamingSidecar;
@property(readonly, nonatomic) NSNumber *docIDIfValid;
@property(readonly, nonatomic) _Bool canBeRepliedTo;
@property(readonly, nonatomic) WAChatSession *quotedChatSession;
@property(readonly, nonatomic) _Bool containsQuotedChatSession;
@property(readonly, nonatomic) _Bool containsReplyContext;
@property(readonly, nonatomic, getter=isImmediatelyPlayable) _Bool immediatelyPlayable;
@property(readonly, nonatomic) _Bool containsStreamableMedia;
@property(readonly, nonatomic) _Bool containsUndownloadedMedia;
@property(readonly, nonatomic) _Bool storesMediaExternally;
@property(readonly, nonatomic) NSString *downloadIdentifier;
@property(readonly, nonatomic) NSString *uniqueKey;
@property(readonly, nonatomic) NSString *participantJID;
@property(readonly, nonatomic) NSString *senderJID;
- (void)setEnum:(unsigned int)arg1 withRange:(struct _NSRange)arg2;
- (unsigned int)getEnumWithRange:(struct _NSRange)arg1;
- (void)unsetFlag:(int)arg1;
- (void)setFlag:(int)arg1;
- (_Bool)hasFlag:(int)arg1;
@property(readonly, nonatomic) _Bool transientSendError;
@property(nonatomic) _Bool textContainsURLs;
@property(nonatomic, getter=isPayment) _Bool payment;
@property(nonatomic, getter=isSendWithoutLocalMedia) _Bool sendWithoutLocalMedia; // @dynamic sendWithoutLocalMedia;
@property(nonatomic, getter=isRevocationSignal) _Bool revocationSignal;
@property(nonatomic, getter=isRetriesDisabled) _Bool retriesDisabled;
@property(nonatomic, getter=isWebRelayMessage) _Bool webRelayMessage;
@property(nonatomic, getter=isMultiVCardMessage) _Bool multiVCardMessage;
@property(nonatomic, getter=isHighlyStructuredMessage) _Bool highlyStructuredMessage;
@property(nonatomic, getter=isMulticast) _Bool multicast;
@property(nonatomic, getter=isStatus) _Bool status;
@property(nonatomic) _Bool webClientResendRequest; // @synthesize webClientResendRequest=_webClientResendRequest;
@property(nonatomic) int outgoingMessageOrigin;
@property(nonatomic, getter=isBroadcast) _Bool broadcast;
@property(readonly, nonatomic, getter=isEligibleForUnreadMessages) _Bool eligibleForUnreadMessages;
@property(nonatomic) _Bool isImageLikeDocument;
@property(nonatomic) _Bool offlineStorage; // @synthesize offlineStorage=_offlineStorage;
@property(readonly, nonatomic) NSString *authorJID;
- (void)willSave;
@property(readonly, nonatomic) WAMessageHelper *helper;
@property(readonly, nonatomic) NSString *mediaSectionPrefix;
- (void)clearMediaSectionID;
- (_Bool)setMediaSectionIDIfNeeded;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (void)deleteStickerStarredEvent;
- (void)createStickerStarredEvent;
- (void)updateStickerStarredEventIfNeededStarred:(_Bool)arg1;
@property(readonly, nonatomic) _Bool needsAlertButton;
@property(readonly, nonatomic) NSString *textToSpeak;
@property(readonly, nonatomic) _Bool containsSpeakableContent;
@property(readonly, nonatomic) _Bool shouldRenderInEmojiView;
@property(readonly, nonatomic) NSString *messageBubbleTableViewCellReuseIdentifier;
@property(readonly, nonatomic) NSAttributedString *footerAttributedText;
@property(readonly, nonatomic) NSAttributedString *attributedText;
@property(readonly, nonatomic) _Bool requiresBroadcastListIcon;
@property(readonly, nonatomic) unsigned long long footerStatus;
@property(readonly, nonatomic, getter=isTransferringMedia) _Bool transferringMedia;
@property(readonly, nonatomic) UIColor *nameColor;
- (id)contactNameOrFormattedPushNameReturningJID:(id *)arg1 nameType:(long long *)arg2;
@property(readonly, nonatomic) _Bool contactHasVerifiedBadge;
@property(readonly, nonatomic) NSString *contactNameMedium;
@property(readonly, nonatomic) NSString *contactNameJID;
@property(readonly, nonatomic, getter=isGroupInviteLink) _Bool groupInviteLink;
@property(readonly, nonatomic, getter=isSentToGroup) _Bool sentToGroup;
@property(readonly, nonatomic, getter=isSenderUnknown) _Bool senderUnknown;
- (id)voiceOverStringForMediaTransferStatusReturningStatus:(unsigned long long *)arg1;
@property(readonly, nonatomic) float uploadOrDownloadProgress;
@property(readonly, nonatomic) float uploadProgress;
@property(readonly, nonatomic) _Bool showsUploadTransferView;
@property(nonatomic) long long maximumNumberOfLinesInBubble;
- (void)invalidateMessageStatusInMessageContainers;
- (void)invalidateMediaContentInMessageContainers;
- (void)invalidateMessageContainers;
- (void)enumerateChatCellDataObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)attachToChatCellData:(id)arg1;
@property(readonly, nonatomic) _Bool isActiveLiveLocationMessageFromMe;
@property(readonly, nonatomic) _Bool isActiveLiveLocationMessageFromSomeoneElse;
@property(readonly, nonatomic) NSString *placeURL;
@property(readonly, nonatomic) NSString *placeAddress;
@property(readonly, nonatomic) NSString *placeName;
- (id)fetchConversionInfoDictionary;
- (void)checkForCompletedOutgoingStatusMessage;
@property(nonatomic) short statusDeletionType;
- (_Bool)markStatusPSAViewed;
- (void)setNeedsSpotlightIndexing;
@property(readonly, nonatomic) long long searchEngineDocumentType;
@property(readonly, copy, nonatomic) NSString *textForSearchIndex;
@property(readonly, nonatomic) float searchQualityScore;
- (void)fetchRequiredDataForWAPlace:(id)arg1 live:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (id)cachedExportedMediaPath;
- (_Bool)containsContactName;
@property(readonly, copy, nonatomic) NSString *stringRepresentationForNotification;
@property(readonly, copy, nonatomic) NSAttributedString *attributedStringRepresentationForReply;
@property(readonly, copy, nonatomic) NSAttributedString *stringRepresentationForChat;
- (id)stringRepresentationForExportWithMetadata:(_Bool)arg1;
- (id)formattedStringWithFormat:(unsigned long long)arg1;
- (void)endRetainingCachedImages;
- (void)beginRetainingCachedImages;
- (void)setHighQualityImage:(id)arg1;
- (_Bool)cancelImageRequestWithQuality:(long long)arg1;
- (void)requestImageWithQuality:(long long)arg1 options:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct CGSize preferredPreviewAspectRatio;
- (void)markDelivered;
- (void)sendServerErrorReceiptIfNeeded;
- (void)updateReceiptInfoFrom:(id)arg1 status:(int)arg2 date:(id)arg3 overridesExistingTimestamp:(_Bool)arg4;
@property(readonly, copy, nonatomic) NSString *mediaPath;
@property(readonly, copy, nonatomic) NSData *xmppThumbnailData;
@property(readonly, copy, nonatomic) NSString *xmppThumbnailPath;
- (void)updateMediaLocalPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *directPath;
- (void)setMediaMimeType:(id)arg1 filesize:(unsigned long long)arg2 linkToFileAtAbsolutePath:(id)arg3 saveImmediately:(_Bool)arg4;
- (_Bool)failWithUploadResult:(id)arg1 error:(id)arg2 terminal:(_Bool)arg3;
- (void)finishWithUploadResult:(id)arg1;
- (void)updateWithUploadProgress:(float)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)attachXMPPThumbnailData:(id)arg1;
- (void)attachMediaAtRelativePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pathExtensionUsingHint:(id)arg1;
- (id)pathExtension;
- (void)populateChildMessage:(id)arg1;
- (id)addChildMessagesIfNeeded;
- (void)attachQuotedMessage:(id)arg1 quotedChatSession:(id)arg2 mentions:(id)arg3 backgroundColor:(id)arg4 fontStyle:(int)arg5;
- (void)attachQuotedMessage:(id)arg1 mentions:(id)arg2 backgroundColor:(id)arg3 fontStyle:(int)arg4;
- (_Bool)checkRecipientExists;
- (_Bool)willSend;
- (void)removeInvalidMentions;
- (void)copyMediaItemPropertiesFromMessage:(id)arg1 viaForward:(_Bool)arg2;
- (id)copyToChatTransaction:(id)arg1 viaForward:(_Bool)arg2;
- (id)querySortedDataItems;
@property(readonly, nonatomic, getter=isGhost) _Bool ghost;
@property(readonly, nonatomic) NSString *bestSenderName;
@property(readonly, nonatomic) NSString *contactNameShort;
@property(readonly, nonatomic) _Bool needsResend;
@property(readonly, nonatomic) _Bool messageTypeIsEligibleToSendStatus;
@property(readonly, nonatomic) _Bool canBeForwarded;
@property(readonly, nonatomic) _Bool needsSendReadReceipt;
@property(readonly, nonatomic, getter=isEligibleToResortChats) _Bool eligibleToResortChats;
@property(readonly, nonatomic, getter=isEligibleForNotification) _Bool eligibleForNotification;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isValidIgnoringExpiration) _Bool validIgnoringExpiration;
@property(readonly, nonatomic, getter=isValidIgnoringExpirationAndChat) _Bool validIgnoringExpirationAndChat;
- (void)endSuppressingProgressSpinner;
- (void)beginSuppressingProgressSpinner;
- (void)setStarred:(_Bool)arg1 allowExternalSideEffects:(_Bool)arg2;
- (void)setMessageStatus:(int)arg1 allowExternalSideEffects:(_Bool)arg2 allowsSendingStatusRegression:(_Bool)arg3;
- (_Bool)shouldInvalidateMessageContainerWhenChangingFromStatus:(int)arg1 to:(int)arg2;
- (void)setMessageStatus:(int)arg1 allowExternalSideEffects:(_Bool)arg2;
- (void)setChatSession:(id)arg1 allowExternalSideEffects:(_Bool)arg2;
- (void)updateMessageAffectingChatSession:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)copyContentToPasteboardOfType:(unsigned long long)arg1;
- (_Bool)canCopyContentToPasteboardOfType:(unsigned long long)arg1;
- (void)prepareXMPPThumbnailWithRelativePath:(id)arg1 group:(id)arg2;
- (void)prepareXMPPThumbnailWithBaseImage:(id)arg1 group:(id)arg2;
@property(retain, nonatomic) WA2Tuple *paymentSystemEventTransactionMetadata;
@property(copy, nonatomic) WAMessageID *paymentSystemEventTransactionMessageID;
@property(readonly, getter=isPaymentSystemEvent) _Bool paymentSystemEvent;
- (id)paymentTransactionMessageIDFromMediaSection:(id)arg1;
- (id)mediaSectionIDForPaymentTransactionMessageID:(id)arg1;
- (id)paymentNote;
@property(readonly) WAPaymentTransaction *paymentTransaction;
- (_Bool)canBeRevokedIgnoringDate:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canBeRevoked;
@property(retain, nonatomic) WAMessageID *revokedMessageID;
- (void)updateWithDataFromProtobuf:(id)arg1 canMarkAsDelivered:(_Bool)arg2;
- (void)updateWithDataFromProtobuf:(id)arg1;
- (void)updatePlaceholderMessageWithPaymentDetailsFromStanza:(id)arg1;
- (void)updateLiveLocationEndDateFromStanza:(id)arg1;
- (id)encInStanzaWithLiveLocation:(id)arg1;
- (void)updateWithData:(id)arg1 encVersion:(int)arg2;
- (id)uniqueKeyHandlingPlaceholdersAndRevokes;
@property(readonly, nonatomic) _Bool autoResendEligible;

// Remaining properties
@property(readonly, nonatomic) WAChatSession *chatSession; // @dynamic chatSession;
@property(copy, nonatomic) NSSet *childMessages; // @dynamic childMessages;
@property(retain, nonatomic) NSNumber *childMessagesDeliveredCount; // @dynamic childMessagesDeliveredCount;
@property(retain, nonatomic) NSNumber *childMessagesPlayedCount; // @dynamic childMessagesPlayedCount;
@property(retain, nonatomic) NSNumber *childMessagesReadCount; // @dynamic childMessagesReadCount;
@property(retain, nonatomic) NSNumber *dataItemVersion; // @dynamic dataItemVersion;
@property(copy, nonatomic) NSSet *dataItems; // @dynamic dataItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *docID; // @dynamic docID;
@property(retain, nonatomic) NSNumber *encRetryCount; // @dynamic encRetryCount;
@property(retain, nonatomic) NSNumber *filteredRecipientCount; // @dynamic filteredRecipientCount;
@property(nonatomic) int flags; // @dynamic flags;
@property(copy, nonatomic) NSString *fromJID; // @dynamic fromJID;
@property(nonatomic) int groupEventType; // @dynamic groupEventType;
@property(retain, nonatomic) WAGroupMember *groupMember; // @dynamic groupMember;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFromMe; // @dynamic isFromMe;
@property(readonly, nonatomic) _Bool isMultiVCardMessage;
@property(retain, nonatomic) WAMediaItem *mediaItem; // @dynamic mediaItem;
@property(copy, nonatomic) NSString *mediaSectionID; // @dynamic mediaSectionID;
@property(retain, nonatomic) NSDate<WAServerDate> *messageDate; // @dynamic messageDate;
@property(retain, nonatomic) NSNumber *messageErrorStatus; // @dynamic messageErrorStatus;
@property(retain, nonatomic) WAMessageInfo *messageInfo; // @dynamic messageInfo;
@property(readonly, nonatomic) int messageStatus; // @dynamic messageStatus;
@property(nonatomic) int messageType; // @dynamic messageType;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(retain, nonatomic) WAMessage *parentMessage; // @dynamic parentMessage;
@property(copy, nonatomic) NSString *phash; // @dynamic phash;
@property(copy, nonatomic) NSString *pushName; // @dynamic pushName;
@property(retain, nonatomic) NSDate *sentDate; // @dynamic sentDate;
@property(nonatomic) int sort; // @dynamic sort;
@property(nonatomic) short spotlightStatus; // @dynamic spotlightStatus;
@property(copy, nonatomic) NSString *stanzaID; // @dynamic stanzaID;
@property(readonly, nonatomic) _Bool starred; // @dynamic starred;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(copy, nonatomic) NSString *toJID; // @dynamic toJID;

@end


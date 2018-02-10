//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatDataStoreMediaManager.h"

#import "WAMMSMediaExistCheckUploadOperationDelegate-Protocol.h"
#import "WAMMSMediaUploadOperationDelegate-Protocol.h"

@class NSMutableDictionary, WAMMSTaskSession, WAOptimisticMediaUploadManager, WAPersistentRequestManager, WASimpleOperationQueue;

@interface WAMediaUploader : WAChatDataStoreMediaManager <WAMMSMediaUploadOperationDelegate, WAMMSMediaExistCheckUploadOperationDelegate>
{
    WASimpleOperationQueue *_mms4OperationQueue;
    NSMutableDictionary *_existCheckOnlyPool;
    NSMutableDictionary *_operationForMessageKey;
    WAMMSTaskSession *_mmsTaskSession;
    WAPersistentRequestManager *_persistentRequestManager;
    WAOptimisticMediaUploadManager *_optimisticMediaUploadManager;
}

+ (id)mediaItemsWithFileHash:(id)arg1 inContext:(id)arg2;
+ (void)checkAndRepairMp4AtPath:(id)arg1 dstPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)transcodeVideoWithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)transcodeAudioWithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setupUserInfoForRequest:(id)arg1 messages:(id)arg2 mediaKey:(id)arg3 reuploading:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) WAOptimisticMediaUploadManager *optimisticMediaUploadManager; // @synthesize optimisticMediaUploadManager=_optimisticMediaUploadManager;
@property(readonly, nonatomic) WAPersistentRequestManager *persistentRequestManager; // @synthesize persistentRequestManager=_persistentRequestManager;
@property(readonly, nonatomic) WAMMSTaskSession *mmsTaskSession; // @synthesize mmsTaskSession=_mmsTaskSession;
- (void).cxx_destruct;
- (void)updateMediaForUploadedMessage:(id)arg1;
- (void)uploadTask:(id)arg1 needUploadReadyAssetFromAsset:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (float)progressOfMediaUploadForMessage:(id)arg1;
- (void)fetchForReuseWithPlaintextFileHash:(id)arg1 mediaKeyData:(out id *)arg2 mediaFilePath:(out id *)arg3;
- (id)libraryMediaKeyAndEncHashForMediaItemWithHash:(id)arg1;
- (id)mediaItemWithFileHash:(id)arg1 inContext:(id)arg2;
- (id)operationForMessageKey;
- (id)existCheckOnlyPool;
- (id)mms4OperationQueue;
- (id)initWithChatDataStores:(id)arg1 mmsTaskSession:(id)arg2 persistentRequestManager:(id)arg3;
- (void)uploadProfilePictureData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)existCheckTask:(id)arg1 willRetryWithUploadEvent:(id)arg2;
- (void)existCheckTask:(id)arg1 didFinishWithResult:(BOOL)arg2 directPath:(id)arg3 mmsv3DownloadURL:(id)arg4 uploadEvent:(id)arg5 error:(id)arg6 terminal:(BOOL)arg7;
- (BOOL)handleFinishedOptimisticUploadTask:(id)arg1 messages:(id)arg2 result:(id)arg3 uploadEvent:(id)arg4 error:(id)arg5;
- (void)uploadTaskCompletedWithResult:(id)arg1 error:(id)arg2 messages:(id)arg3 reuploading:(BOOL)arg4 terminal:(BOOL)arg5;
- (void)uploadTask:(id)arg1 willRetryWithUploadEvent:(id)arg2;
- (void)uploadTask:(id)arg1 didFinishWithResult:(id)arg2 uploadEvent:(id)arg3 error:(id)arg4 terminal:(BOOL)arg5;
- (void)uploadTask:(id)arg1 willBeginUploadWithMediaKey:(id)arg2 ciphertextHash:(id)arg3;
- (void)uploadTask:(id)arg1 didUpdateProgress:(double)arg2;
- (void)cancelOptimisticUploadsWithIdentifiers:(id)arg1;
- (id)startOptimisticMediaUploadForFile:(id)arg1 mediaType:(unsigned int)arg2 mimeType:(id)arg3 identifier:(id)arg4 cellularAllowed:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)validateAndEnqueuePersistentExistCheckForMessageFastForward:(id)arg1;
- (void)cancelStreamingUploadOperation:(id)arg1;
- (void)cancelAllUploads;
- (BOOL)cancelUploadForItemWithUniqueID:(id)arg1;
- (void)cancelUploadForMessage:(id)arg1 userInitiated:(BOOL)arg2;
- (void)mediaUploadBeganForMessages:(id)arg1;
- (BOOL)handleOptimisticUploadForMessages:(id)arg1 templateMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)startMediaUploadForMessages:(id)arg1 templateMessage:(id)arg2 streaming:(BOOL)arg3 reuploading:(BOOL)arg4 additionalRecipients:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)startMediaUploadForMessages:(id)arg1;
- (void)reuploadMediaInMessage:(id)arg1 requesterIsWebClient:(BOOL)arg2 extraRecipientJIDs:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)mms4StreamingPTTUploadOperationForMediaAtPath:(id)arg1;
- (BOOL)existCheckOnlyUploadForMessages:(id)arg1;
- (unsigned int)countOfInProgressUploads;

@end


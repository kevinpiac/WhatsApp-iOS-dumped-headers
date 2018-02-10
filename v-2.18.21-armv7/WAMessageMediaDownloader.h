//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatDataStoreMediaManager.h"

#import "WAMediaDownloadPolicyDelegate-Protocol.h"
#import "WARegularMediaDownloadManagerDelegate-Protocol.h"
#import "WAStreamingMediaLoaderManagerDownloadDelegate-Protocol.h"

@class NSMutableArray, NSString, WAMediaDownloadPolicy, WARegularMediaDownloadManager, WAStreamingMediaLoaderManager, XMPPConnection;

@interface WAMessageMediaDownloader : WAChatDataStoreMediaManager <WAMediaDownloadPolicyDelegate, WARegularMediaDownloadManagerDelegate, WAStreamingMediaLoaderManagerDownloadDelegate>
{
    NSMutableArray *_pendingAutodownloadMessages;
    WARegularMediaDownloadManager *_regularMediaDownloadManager;
    XMPPConnection *_xmppConnection;
    WAStreamingMediaLoaderManager *_streamingMediaLoaderManager;
    WAMediaDownloadPolicy *_policy;
}

@property(readonly, nonatomic) WAMediaDownloadPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) WAStreamingMediaLoaderManager *streamingMediaLoaderManager; // @synthesize streamingMediaLoaderManager=_streamingMediaLoaderManager;
@property(readonly, nonatomic) XMPPConnection *xmppConnection; // @synthesize xmppConnection=_xmppConnection;
- (void).cxx_destruct;
- (void)regularMediaDownloader:(id)arg1 didUpdateProgressOfMessage:(id)arg2;
- (void)processPendingAutodownloadsForRegularMediaDownloader:(id)arg1;
- (void)regularMediaDownloader:(id)arg1 didFinishDownloadingMediaInMessage:(id)arg2 toRelativePath:(id)arg3;
- (void)regularMediaDownloader:(id)arg1 didFailToDownloadMediaInMessage:(id)arg2 autodownload:(BOOL)arg3 error:(id)arg4;
- (void)xmppConnectionChatStateDidChange:(id)arg1;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)processPendingAutodownloads;
- (void)checkMessagesForMediaAutodownload;
- (void)didChangeDataStoreReadiness;
- (void)streamingMediaLoaderManager:(id)arg1 didUpdateDownloadProgress:(id)arg2 inMessage:(id)arg3;
- (void)streamingMediaLoaderManager:(id)arg1 didFailToDownloadMediaInMessage:(id)arg2 userInitiated:(BOOL)arg3 error:(id)arg4;
- (void)streamingMediaLoaderManager:(id)arg1 didFinishDownloadingMediaInMessage:(id)arg2 toRelativePath:(id)arg3;
- (void)streamingMediaLoaderManager:(id)arg1 didBeginDownloadingMediaInMessage:(id)arg2 currentProgress:(id)arg3;
- (void)endSuspendingDownloads;
- (void)beginSuspendingDownloads;
- (void)didUpdateStreamingProgress:(id)arg1 ofMessage:(id)arg2;
- (void)didUpdateProgressOfMessage:(id)arg1;
- (void)didFailToDownloadMediaInMessage:(id)arg1 autodownload:(BOOL)arg2 error:(id)arg3;
- (void)didFinishDownloadingMediaInMessage:(id)arg1 toRelativePath:(id)arg2;
- (BOOL)isDownloadingMediaInMessage:(id)arg1;
- (float)progressOfMediaDownloadForMessage:(id)arg1;
- (void)cancelMediaDownloadForMessage:(id)arg1 userInitiated:(BOOL)arg2;
- (void)cancelAllDownloads;
- (void)queueMediaDownloadForMessage:(id)arg1 autodownload:(BOOL)arg2;
- (void)queueMediaDownloadForMessage:(id)arg1;
- (void)handleMediaDownloadForExternalMessage:(id)arg1;
- (void)populateFieldStatsForAutoDownloadNetwork:(int)arg1 cellularFieldStat:(char *)arg2 wifiFieldStat:(char *)arg3;
- (void)reportAutoDownloadPolicyFieldstats:(id)arg1;
- (void)mediaDownloadPolicyDidRequestSave:(id)arg1;
- (id)existingOrNewDownloadPolicy;
- (id)initWithChatDataStores:(id)arg1 xmppConnection:(id)arg2 streamingMediaLoaderManager:(id)arg3 mmsTaskSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, WAMessage;

@interface WAStreamingMediaLoaderMessageInfo : NSObject
{
    BOOL _canPrefetch;
    BOOL _canUseCellularToPrefetch;
    BOOL _canUseCellularToAutoDownload;
    WAMessage *_message;
    NSString *_chatJID;
    NSString *_uniqueKey;
    int _messageType;
    int _fileSize;
    NSString *_contentType;
    NSString *_mediaURL;
    NSURL *_assetURL;
    NSData *_mediaKey;
    NSString *_fileHash;
    NSData *_sidecar;
    double _wamMediaType;
}

+ (id)infoForMessage:(id)arg1;
@property(readonly, nonatomic) BOOL canUseCellularToAutoDownload; // @synthesize canUseCellularToAutoDownload=_canUseCellularToAutoDownload;
@property(readonly, nonatomic) BOOL canUseCellularToPrefetch; // @synthesize canUseCellularToPrefetch=_canUseCellularToPrefetch;
@property(readonly, nonatomic) BOOL canPrefetch; // @synthesize canPrefetch=_canPrefetch;
@property(readonly, copy, nonatomic) NSData *sidecar; // @synthesize sidecar=_sidecar;
@property(readonly, copy, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
@property(readonly, copy, nonatomic) NSData *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly, copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) int fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) double wamMediaType; // @synthesize wamMediaType=_wamMediaType;
@property(readonly, nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(readonly, copy, nonatomic) NSString *chatJID; // @synthesize chatJID=_chatJID;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1;

@end


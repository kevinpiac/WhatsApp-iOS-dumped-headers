//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "WAStickerDownloadInfoProviding-Protocol.h"

@class NSData, NSString;

@interface WASticker : NSObject <NSSecureCoding, WAStickerDownloadInfoProviding>
{
    NSString *_stickerPackId;
    NSString *_imageFilePath;
    NSString *_url;
    NSString *_fileHash;
    NSString *_encFileHash;
    NSData *_mediaKey;
    NSString *_mimeType;
    unsigned int _emotion;
    long long _fileLength;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int emotion; // @synthesize emotion=_emotion;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSData *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, nonatomic) long long fileLength; // @synthesize fileLength=_fileLength;
@property(readonly, copy, nonatomic) NSString *encFileHash; // @synthesize encFileHash=_encFileHash;
@property(readonly, copy, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(readonly, copy, nonatomic) NSString *stickerPackId; // @synthesize stickerPackId=_stickerPackId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)emotions;
- (id)initWithMessage:(id)arg1;
- (id)initWithStickerPackId:(id)arg1 imageFilePath:(id)arg2 url:(id)arg3 fileHash:(id)arg4 encFileHash:(id)arg5 fileLength:(long long)arg6 mediaKey:(id)arg7 mimeType:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


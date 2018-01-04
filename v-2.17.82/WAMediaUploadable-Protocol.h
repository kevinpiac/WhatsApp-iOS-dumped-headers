//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSSet, NSString;
@protocol NSObject><NSCopying, WAMediaUploadResult, WAMediaUploadable;

@protocol WAMediaUploadable <NSObject>
@property(readonly, copy, nonatomic) NSSet *recipientsJids;
@property(readonly, copy, nonatomic) NSData *mediaKey;
@property(readonly, nonatomic) int httpRetryCount;
@property(readonly, nonatomic) BOOL isMultiVCardMessage;
@property(readonly, nonatomic) BOOL isPTT;
@property(readonly, copy, nonatomic) NSString *encFileHash;
@property(readonly, copy, nonatomic) NSString *fileHash;
@property(readonly, nonatomic) int mediaOrigin;
@property(readonly, nonatomic) int mediaType;
@property(readonly, copy, nonatomic) NSString *mediaUploadPath;
@property(readonly, copy, nonatomic) NSString *mediaFilePath;
@property(readonly, copy, nonatomic) NSString *toJID;
@property(readonly, copy, nonatomic) NSString *stanzaID;
@property(readonly, nonatomic) id <NSObject><NSCopying> uniqueID;
- (void)setMediaMimeType:(NSString *)arg1 fileSize:(unsigned long long)arg2 linkMediaToMediaInUploadable:(id <WAMediaUploadable>)arg3;
- (void)setMediaMimeType:(NSString *)arg1 fileSize:(unsigned long long)arg2 newMediaPath:(NSString *)arg3;
- (BOOL)failWithUploadResult:(id <WAMediaUploadResult>)arg1 error:(NSError *)arg2 terminal:(BOOL)arg3;
- (void)finishWithUploadResult:(id <WAMediaUploadResult>)arg1;
- (void)updateWithUploadProgress:(float)arg1;
@end


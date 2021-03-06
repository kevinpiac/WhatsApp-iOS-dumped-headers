//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WAMMSMediaUploadResult : NSObject
{
    _Bool _reuploading;
    NSString *_uploadPath;
    NSString *_mediaURL;
    NSString *_directPath;
    NSString *_plaintextHash;
    NSData *_streamingSidecar;
    NSData *_mediaKey;
    NSString *_encFileHash;
}

@property(readonly, nonatomic) _Bool reuploading; // @synthesize reuploading=_reuploading;
@property(readonly, copy, nonatomic) NSString *encFileHash; // @synthesize encFileHash=_encFileHash;
@property(readonly, copy, nonatomic) NSData *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSData *streamingSidecar; // @synthesize streamingSidecar=_streamingSidecar;
@property(readonly, copy, nonatomic) NSString *plaintextHash; // @synthesize plaintextHash=_plaintextHash;
@property(readonly, copy, nonatomic) NSString *directPath; // @synthesize directPath=_directPath;
@property(readonly, copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(readonly, copy, nonatomic) NSString *uploadPath; // @synthesize uploadPath=_uploadPath;
- (void).cxx_destruct;
- (id)initWithMediaURL:(id)arg1 directPath:(id)arg2 mediaKey:(id)arg3 plaintextHash:(id)arg4 encFileHash:(id)arg5 sidecar:(id)arg6 reuploading:(_Bool)arg7;

@end


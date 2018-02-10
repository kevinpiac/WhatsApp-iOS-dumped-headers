//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber, NSString;

@interface WABasicMediaInfoContainer : NSObject
{
    NSString *_mediaUrl;
    NSString *_directPath;
    NSString *_mimetype;
    NSData *_fileHash;
    NSData *_fileEncHash;
    NSNumber *_fileLength;
    NSData *_mediaKey;
    NSArray *_interactiveAnnotations;
}

@property(readonly, nonatomic) NSArray *interactiveAnnotations; // @synthesize interactiveAnnotations=_interactiveAnnotations;
@property(readonly, nonatomic) NSData *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, nonatomic) NSNumber *fileLength; // @synthesize fileLength=_fileLength;
@property(readonly, nonatomic) NSData *fileEncHash; // @synthesize fileEncHash=_fileEncHash;
@property(readonly, nonatomic) NSData *fileHash; // @synthesize fileHash=_fileHash;
@property(readonly, nonatomic) NSString *mimetype; // @synthesize mimetype=_mimetype;
@property(readonly, nonatomic) NSString *directPath; // @synthesize directPath=_directPath;
@property(readonly, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
- (void).cxx_destruct;
- (_Bool)isValidWithError:(out id *)arg1;
- (id)initWithUrl:(id)arg1 directPath:(id)arg2 mimetype:(id)arg3 filehash:(id)arg4 fileEncHash:(id)arg5 fileLength:(id)arg6 mediaKey:(id)arg7 interactiveAnnotations:(id)arg8;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface WAMMSTaskDescription : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _mediaType;
    NSData *_hashIdentifier;
    NSString *_directPath;
    NSString *_uploadJID;
    unsigned long long _taskType;
    NSString *_mms3DownloadURLOverride;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *mms3DownloadURLOverride; // @synthesize mms3DownloadURLOverride=_mms3DownloadURLOverride;
@property(readonly, nonatomic) unsigned long long taskType; // @synthesize taskType=_taskType;
@property(readonly, nonatomic) NSString *uploadJID; // @synthesize uploadJID=_uploadJID;
@property(readonly, nonatomic) NSString *directPath; // @synthesize directPath=_directPath;
@property(readonly, nonatomic) NSData *hashIdentifier; // @synthesize hashIdentifier=_hashIdentifier;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *uploadToken;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaType:(unsigned long long)arg1 hashIdentifier:(id)arg2 directPath:(id)arg3 mms3DownloadURLOverride:(id)arg4 uploadJID:(id)arg5 taskType:(unsigned long long)arg6;
- (id)initForUploadWithMediaType:(unsigned long long)arg1 hashIdentifier:(id)arg2 uploadJID:(id)arg3 taskType:(unsigned long long)arg4;
- (id)initForDownloadWithMediaType:(unsigned long long)arg1 hashIdentifier:(id)arg2 directPath:(id)arg3 mms3DownloadURLOverride:(id)arg4;

@end


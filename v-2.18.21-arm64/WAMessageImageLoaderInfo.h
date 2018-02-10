//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CLLocation, NSString, NSURL, WAStreamingMediaLoaderMessageInfo;

@interface WAMessageImageLoaderInfo : NSObject <NSCopying>
{
    _Bool _liveLocation;
    unsigned long long _type;
    NSString *_jid;
    NSURL *_thumbnailFileURL;
    NSURL *_mediaFileURL;
    NSString *_MIMEType;
    CLLocation *_location;
    double _blurredImageMaximumWidth;
    WAStreamingMediaLoaderMessageInfo *_streamingMessageInfo;
}

@property(retain, nonatomic) WAStreamingMediaLoaderMessageInfo *streamingMessageInfo; // @synthesize streamingMessageInfo=_streamingMessageInfo;
@property(nonatomic) double blurredImageMaximumWidth; // @synthesize blurredImageMaximumWidth=_blurredImageMaximumWidth;
@property(nonatomic, getter=isLiveLocation) _Bool liveLocation; // @synthesize liveLocation=_liveLocation;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(copy, nonatomic) NSURL *mediaFileURL; // @synthesize mediaFileURL=_mediaFileURL;
@property(copy, nonatomic) NSURL *thumbnailFileURL; // @synthesize thumbnailFileURL=_thumbnailFileURL;
@property(readonly, copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)squareThumbnailImageCachedFileURL;
- (id)largeImageCachedFileURL;
- (_Bool)canLoadImageOfQuality:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1 jid:(id)arg2;

@end


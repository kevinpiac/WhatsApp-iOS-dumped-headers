//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageTextWithImageSlice.h"

@class WAMessageReplyContext, WAMessageSenderNameSliceRenderer;

@interface WAMessageReplyContextSlice : WAMessageTextWithImageSlice
{
    _Bool _isObservingMediaDownloads;
    WAMessageSenderNameSliceRenderer *_headerRenderer;
    WAMessageReplyContext *_replyContext;
}

+ (double)leadingEdgeIndentWithMetrics:(CDStruct_8ee84fd7)arg1;
+ (long long)maximumNumberOfLines;
+ (long long)minimumNumberOfLines;
+ (Class)viewClass;
@property(readonly, nonatomic) WAMessageReplyContext *replyContext; // @synthesize replyContext=_replyContext;
- (void).cxx_destruct;
- (id)headerRenderer;
- (id)attributedTextWithMessage:(id)arg1 textAlignment:(out long long *)arg2;
- (_Bool)hasThumbnailForMessage:(id)arg1;
- (void)mediaDownloadDidSucceed:(id)arg1;
- (void)prepareWithMessage:(id)arg1;
- (void)dealloc;
- (struct CGSize)thumbnailSize;

@end


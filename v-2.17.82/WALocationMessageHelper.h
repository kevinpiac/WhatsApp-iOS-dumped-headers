//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageHelper.h"

@interface WALocationMessageHelper : WAMessageHelper
{
}

+ (void)copyContentToPasteboardOfType:(unsigned int)arg1 inMessage:(id)arg2;
+ (BOOL)canCopyContentToPasteboardOfType:(unsigned int)arg1 inMessage:(id)arg2;
+ (id)stringRepresentationForChatForMessage:(id)arg1;
+ (id)stringRepresentationForMessage:(id)arg1;
+ (void)loadMapThumbnailForLocation:(id)arg1 live:(BOOL)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4 retryOnFail:(BOOL)arg5;
+ (void)loadMapThumbnailForLocation:(id)arg1 live:(BOOL)arg2 jid:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5 retryOnFail:(BOOL)arg6;
+ (BOOL)needsImageLoader;
+ (id)attributedTextForMessage:(id)arg1;
+ (id)formattedStringWithVoiceOverSummaryForMessage:(id)arg1;
- (BOOL)shouldCacheLargeTransformedImage:(id)arg1 fromOriginalImage:(id)arg2 info:(id)arg3;
- (id)largeImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)smallImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)newImageLoaderInfo;
- (void)requestImageWithQuality:(int)arg1 options:(unsigned int)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end


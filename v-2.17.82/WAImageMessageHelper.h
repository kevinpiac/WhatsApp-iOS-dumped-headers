//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageHelper.h"

@interface WAImageMessageHelper : WAMessageHelper
{
}

+ (id)attributedTextForMessage:(id)arg1;
+ (id)formattedStringWithVoiceOverSummaryForMessage:(id)arg1;
+ (void)copyContentToPasteboardOfType:(unsigned int)arg1 inMessage:(id)arg2;
+ (BOOL)canCopyContentToPasteboardOfType:(unsigned int)arg1 inMessage:(id)arg2;
+ (id)fullImageFromURL:(id)arg1 ofType:(id)arg2;
+ (id)stringRepresentationForChatForMessage:(id)arg1;
+ (id)stringRepresentationForMessage:(id)arg1;
+ (float)blurredImageMaximumWidth;
+ (void)storeOutgoingMedia:(id)arg1 forJID:(id)arg2 MIMEType:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (BOOL)needsImageLoader;
- (struct CGSize)transformedLargeImageSizeWithOriginalImageSizeInPixels:(struct CGSize)arg1;
- (id)smallImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)activitySubjectForActivityType:(id)arg1;
- (void)messageDidDownloadMedia;

@end

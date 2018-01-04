//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaCopyMessageHelper.h"

@interface WAAbstractVideoMessageHelper : WAMediaCopyMessageHelper
{
}

+ (id)fullImageFromURL:(id)arg1 ofType:(id)arg2;
+ (id)stringRepresentationForMessage:(id)arg1;
+ (float)blurredImageMaximumWidth;
+ (BOOL)needsImageLoader;
- (struct CGSize)transformedLargeImageSizeWithOriginalImageSizeInPixels:(struct CGSize)arg1;
- (id)largeImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)smallImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)newImageLoaderInfo;
- (id)activitySubjectForActivityType:(id)arg1;

@end

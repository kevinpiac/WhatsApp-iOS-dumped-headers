//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACloudMediaDownloadRequest.h"

@interface WACloudImageDownloadRequest : WACloudMediaDownloadRequest
{
}

- (int)internalRequestFullDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)internalRequestResizedImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)newImageRequestOptions;
- (int)reallyRequestAssetFromPhotosLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

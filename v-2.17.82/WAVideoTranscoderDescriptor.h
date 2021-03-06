//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURL, UIImage, WAMediaFileInfo;

@interface WAVideoTranscoderDescriptor : NSObject <NSCopying>
{
    BOOL _videoOnly;
    BOOL _requiresFileSizeReduction;
    BOOL _requiresFullTranscode;
    BOOL _tagAsGIF;
    WAMediaFileInfo *_mediaInfoHint;
    NSURL *_outputURL;
    UIImage *_overlayImage;
    struct CGSize _maximumSize;
    double _bitratePerPixel;
    double _minimumBitratePerPixel;
    unsigned long long _maximumFileSize;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) BOOL tagAsGIF; // @synthesize tagAsGIF=_tagAsGIF;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) unsigned long long maximumFileSize; // @synthesize maximumFileSize=_maximumFileSize;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) double minimumBitratePerPixel; // @synthesize minimumBitratePerPixel=_minimumBitratePerPixel;
@property(nonatomic) double bitratePerPixel; // @synthesize bitratePerPixel=_bitratePerPixel;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) BOOL requiresFullTranscode; // @synthesize requiresFullTranscode=_requiresFullTranscode;
@property(nonatomic) BOOL requiresFileSizeReduction; // @synthesize requiresFileSizeReduction=_requiresFileSizeReduction;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) BOOL videoOnly; // @synthesize videoOnly=_videoOnly;
@property(copy, nonatomic) WAMediaFileInfo *mediaInfoHint; // @synthesize mediaInfoHint=_mediaInfoHint;
- (void).cxx_destruct;
- (id)initWithOutputURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


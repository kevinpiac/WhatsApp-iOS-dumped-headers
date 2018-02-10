//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMultiSendMediaItem.h"

#import "AVVideoCompositionValidationHandling-Protocol.h"

@class AVAssetTrack, AVPlayerItem, AVURLAsset, NSDictionary, NSMutableDictionary, NSString, NSTimer, NSURL, UIImage, WAMediaFileInfo, WAVideoTranscoder;

@interface WAMultiSendEditableVideo : WAMultiSendMediaItem <AVVideoCompositionValidationHandling>
{
    _Bool _doesMediaFormatRequireTranscode;
    WAMediaFileInfo *_fileInfo;
    _Bool _isUsableInVideoComposition;
    NSURL *_mediaCacheURL;
    NSURL *_videoURL;
    long long _videoFileSize;
    AVPlayerItem *_playerItem;
    AVURLAsset *_originalAsset;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_audioTrack;
    long long _videoTrackCount;
    int _slowMotionFactor;
    WAVideoTranscoder *_transcoder;
    NSTimer *_exportProgressTimer;
    CDUnknownBlockType _exportProgressHandler;
    CDStruct_1b6d18a9 _originalImageForPreviewTime;
    _Bool _isSourceVideoInspected;
    UIImage *_transformedPreviewImage;
    _Bool _videoAsGIF;
    double _minBitratePerPixel;
    _Bool _isSomeProblemWithPreview;
    _Bool _isRepaired;
    NSDictionary *_metadata;
    NSMutableDictionary *_thumbnailCache;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _maximumExportDuration;
    CDStruct_e83c9415 _slowMotionTimeRange;
    CDStruct_e83c9415 _trimmedTimeRange;
}

+ (void)mediaServicesWereReset:(id)arg1;
+ (void)mediaServicesWereLost:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSMutableDictionary *thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maximumExportDuration; // @synthesize maximumExportDuration=_maximumExportDuration;
@property(nonatomic) CDStruct_e83c9415 trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property(nonatomic) CDStruct_e83c9415 slowMotionTimeRange; // @synthesize slowMotionTimeRange=_slowMotionTimeRange;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (_Bool)videoComposition:(id)arg1 shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:(id)arg2 layerInstruction:(id)arg3 asset:(id)arg4;
- (_Bool)videoComposition:(id)arg1 shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:(id)arg2;
- (_Bool)videoComposition:(id)arg1 shouldContinueValidatingAfterFindingEmptyTimeRange:(CDStruct_e83c9415)arg2;
- (_Bool)videoComposition:(id)arg1 shouldContinueValidatingAfterFindingInvalidValueForKey:(id)arg2;
- (void)inspectVideoAtURL:(id)arg1;
- (id)accessibilityLabel;
- (void)didReceiveMemoryWarning;
- (long long)imageOrientationForRotationTransform:(struct CGAffineTransform)arg1;
- (void)generateVideoFramesAtTimes:(id)arg1 size:(struct CGSize)arg2 tolerance:(CDStruct_1b6d18a9)arg3 block:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic, getter=isSlowMotionSupported) _Bool slowMotionSupported;
- (_Bool)needsFileSizeReduction;
- (_Bool)needsTranscoding;
- (_Bool)needsVideoComposition;
- (_Bool)hasEdits;
- (void)setNeedsExport;
- (CDStruct_e83c9415)timeRangeToExport;
@property(readonly, nonatomic) CDStruct_1b6d18a9 editedDuration;
- (void)updateExportProgress:(id)arg1;
- (void)reallyExportWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)interactiveAnnotations;
- (void)downgradeToQualityIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelCurrentExport;
- (id)renderedImage;
@property(readonly, nonatomic) AVPlayerItem *renderedContent;
- (struct CGAffineTransform)straightenTransform:(struct CGAffineTransform)arg1;
- (void)renderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)segmentsForCompositionTrack:(id)arg1 byApplyingSlowMotionToTimeRange:(CDStruct_e83c9415)arg2 factor:(int)arg3;
- (struct CGAffineTransform)transformFromVideoTrackTransform:(struct CGAffineTransform)arg1 videoTrackNaturalSize:(struct CGSize)arg2 anchorPoint:(struct CGPoint)arg3 cropSize:(struct CGSize)arg4 rotationAngle:(double)arg5 returningVideoSize:(struct CGSize *)arg6;
- (id)videoCompositionForComposition:(id)arg1 byApplyingFilter:(id)arg2 overlayingImage:(id)arg3 usingFilterRenderer:(id)arg4;
- (void)prepareCompositionWithSlowMotion:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) struct CGSize aspectRatio;
- (void)invalidateOriginalImageForPreview;
- (void)invalidateOriginalImageForPreviewIfNeededOnTimeChange;
- (id)generateOriginalImageForPreview;
- (void)setVideoAsGIF:(_Bool)arg1;
- (_Bool)isVideoAsGIF;
- (_Bool)isGIF;
- (_Bool)isEditable;
- (_Bool)isVideoTrackUsableInVideoComposition:(id)arg1;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)compareDurationOfVideoAtURL:(id)arg1 withURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)copyAttributesFromItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoURL:(id)arg1 assetIdentifier:(id)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 quality:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

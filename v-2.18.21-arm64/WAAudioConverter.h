//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetWriter, AVAssetWriterInput, NSURL;
@protocol OS_dispatch_queue;

@interface WAAudioConverter : NSObject
{
    NSURL *_outputURL;
    NSURL *_inputURL;
    AVAsset *_asset;
    CDStruct_1b6d18a9 _assetDuration;
    float _cachedProgress;
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetReaderTrackOutput *_assetReaderAudioOutput;
    AVAssetWriterInput *_assetWriterAudioInput;
    NSObject<OS_dispatch_queue> *_converterQueue;
    CDUnknownBlockType _completionHandler;
    _Bool _cancelled;
    _Bool _finished;
    float _progress;
}

+ (void)convertAudioTest;
+ (id)convertAudioToAacAtPath:(id)arg1 outputPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)transcodeToAacIfNeededForAudioAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateProgress:(float)arg1;
- (_Bool)startAssetReaderAndAssetWriter;
- (_Bool)setupAssetReaderAndAssetWriter;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithInputPath:(id)arg1 outputPath:(id)arg2;

@end


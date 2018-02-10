//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSDate, NSString, NSTimer, UIView, WAAudioActivity;

@interface WAPttPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_pttAudioPlayer;
    NSTimer *_pttAudioPlayerUpdateTimer;
    unsigned long long _pttAudioPlayerUpdateTimerNumberOfTimersFired;
    double _pttStartTime;
    UIView *_lowVolumeHintView;
    _Bool _lowVolumeHintViewAnimating;
    _Bool _proximityMonitoringRequested;
    WAAudioActivity *_pttAudioActivity;
    NSDate *_allowAutorotateTime;
    struct OpaqueAudioQueue *_audioQueueRef;
    struct AudioQueueBuffer *_audioQueueBufferRefs[3];
    _Bool _playerIsAboutToPlay;
    struct opusInfo _opusInfo;
    struct amrNBInfo _amrNBInfo;
    struct amrWBInfo _amrWBInfo;
    _Bool _idleTimerDisabled;
    _Bool _infoProcessAqCallbacks;
    float _progress;
    double _duration;
    unsigned long long _state;
    NSString *_path;
    double _infoCurrentTime;
}

+ (_Bool)seekAndValidateAMRWBHeaderForFile:(struct __sFILE *)arg1;
+ (_Bool)seekAndValidateAMRNBHeaderForFile:(struct __sFILE *)arg1;
+ (void)showRebootDeviceHint;
@property _Bool infoProcessAqCallbacks; // @synthesize infoProcessAqCallbacks=_infoProcessAqCallbacks;
@property double infoCurrentTime; // @synthesize infoCurrentTime=_infoCurrentTime;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)audioSessionRouteChanged:(id)arg1;
- (void)audioSessionVolumeChanged:(id)arg1;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)handleAudioSessionInterrupted;
- (void)audioSessionInterrupted:(id)arg1;
- (void)proximityStateChanged:(id)arg1;
- (void)setOrUpdateAudioSessionUsePlayAndRecord:(_Bool)arg1;
- (void)routeAudioPlaybackAccordingProximitySensor;
- (double)currentTime;
- (void)delayDeactivateAudioSession;
- (void)checkUpdateProximityMonitoringState;
- (void)showLowVolumeHint;
- (void)positionLowVolumeHint;
- (void)dismissLowVolumeView:(_Bool)arg1;
- (void)applicationDidChangeStatusBarOrientation:(id)arg1;
- (void)seekToPositionAMRWB:(int)arg1;
- (void)seekToPositionAMRNB:(int)arg1;
- (void)aqPlayerHandlePlayerDidFinishPlaying;
- (void)aqPlayerPause;
- (void)updatePushToTalkPlayProgress;
- (void)handlePlayerDidFinishPlaying;
- (void)cleanupState;
- (void)stopPlayback;
- (void)seekToProgress:(float)arg1;
- (void)finish;
- (void)pause;
- (double)durationForOpusFileWithPath:(id)arg1;
- (_Bool)play;
- (_Bool)playPTTAtPath:(id)arg1;
- (_Bool)playPTTAtPath:(id)arg1 progress:(float)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

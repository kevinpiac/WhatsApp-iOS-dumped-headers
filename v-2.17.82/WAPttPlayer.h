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
    unsigned int _pttAudioPlayerUpdateTimerNumberOfTimersFired;
    double _pttStartTime;
    UIView *_lowVolumeHintView;
    BOOL _lowVolumeHintViewAnimating;
    BOOL _proximityMonitoringRequested;
    WAAudioActivity *_pttAudioActivity;
    NSDate *_allowAutorotateTime;
    struct OpaqueAudioQueue *_audioQueueRef;
    struct AudioQueueBuffer *_audioQueueBufferRefs[3];
    BOOL _playerIsAboutToPlay;
    struct opusInfo _opusInfo;
    struct amrNBInfo _amrNBInfo;
    struct amrWBInfo _amrWBInfo;
    BOOL _idleTimerDisabled;
    BOOL _infoProcessAqCallbacks;
    float _progress;
    unsigned int _state;
    NSString *_path;
    double _duration;
    double _infoCurrentTime;
}

+ (BOOL)seekAndValidateAMRWBHeaderForFile:(struct __sFILE *)arg1;
+ (BOOL)seekAndValidateAMRNBHeaderForFile:(struct __sFILE *)arg1;
@property BOOL infoProcessAqCallbacks; // @synthesize infoProcessAqCallbacks=_infoProcessAqCallbacks;
@property double infoCurrentTime; // @synthesize infoCurrentTime=_infoCurrentTime;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)audioSessionRouteChanged:(id)arg1;
- (void)audioSessionVolumeChanged:(id)arg1;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)handleAudioSessionInterrupted;
- (void)audioSessionInterrupted:(id)arg1;
- (void)proximityStateChanged:(id)arg1;
- (void)setOrUpdateAudioSessionUsePlayAndRecord:(BOOL)arg1;
- (void)routeAudioPlaybackAccordingProximitySensor;
- (double)currentTime;
- (void)delayDeactivateAudioSession;
- (void)checkUpdateProximityMonitoringState;
- (void)showLowVolumeHint;
- (void)positionLowVolumeHint;
- (void)dismissLowVolumeView:(BOOL)arg1;
- (void)seekToPositionAMRWB:(int)arg1;
- (void)seekToPositionAMRNB:(int)arg1;
- (void)aqPlayerHandlePlayerDidFinishPlaying;
- (void)aqPlayerPause;
- (void)showRebootDeviceHint;
- (void)updatePushToTalkPlayProgress;
- (void)handlePlayerDidFinishPlaying;
- (void)cleanupState;
- (void)stopPlayback;
- (void)updateLayoutForCurrentOrientation;
- (void)seekToProgress:(float)arg1;
- (void)finish;
- (void)pause;
- (BOOL)play;
- (BOOL)playPTTAtPath:(id)arg1;
- (BOOL)playPTTAtPath:(id)arg1 progress:(float)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


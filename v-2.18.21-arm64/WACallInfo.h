//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WACallInfo : NSObject
{
    _Bool _isCallActive;
    _Bool _startedByMe;
    _Bool _endedByMe;
    _Bool _ending;
    _Bool _videoEnabled;
    _Bool _videoCaptureStarted;
    _Bool _videoPreviewStarted;
    _Bool _isGroupCall;
    int _duration;
    int _audioDuration;
    int _videoDuration;
    NSString *_callID;
    NSString *_peerJID;
    NSArray *_participants;
}

@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) _Bool isGroupCall; // @synthesize isGroupCall=_isGroupCall;
@property(readonly, nonatomic) _Bool videoPreviewStarted; // @synthesize videoPreviewStarted=_videoPreviewStarted;
@property(readonly, nonatomic) _Bool videoCaptureStarted; // @synthesize videoCaptureStarted=_videoCaptureStarted;
@property(readonly, nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(readonly, nonatomic) int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) int audioDuration; // @synthesize audioDuration=_audioDuration;
@property(readonly, nonatomic) int duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool ending; // @synthesize ending=_ending;
@property(readonly, nonatomic) _Bool endedByMe; // @synthesize endedByMe=_endedByMe;
@property(readonly, nonatomic) _Bool startedByMe; // @synthesize startedByMe=_startedByMe;
@property(readonly, nonatomic) _Bool isCallActive; // @synthesize isCallActive=_isCallActive;
@property(readonly, nonatomic) NSString *peerJID; // @synthesize peerJID=_peerJID;
@property(readonly, nonatomic) NSString *callID; // @synthesize callID=_callID;
- (void).cxx_destruct;
- (id)participantWithJID:(id)arg1;
- (id)initWithCallInfo:(CDStruct_2fddbc02)arg1;

@end


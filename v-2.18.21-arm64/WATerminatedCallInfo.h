//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WATerminatedCallInfo : NSObject
{
    _Bool _terminatedByPeer;
    _Bool _isVideo;
    int _duration;
    NSString *_callID;
    NSString *_peerJID;
}

@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool terminatedByPeer; // @synthesize terminatedByPeer=_terminatedByPeer;
@property(copy, nonatomic) NSString *peerJID; // @synthesize peerJID=_peerJID;
@property(copy, nonatomic) NSString *callID; // @synthesize callID=_callID;
- (void).cxx_destruct;
- (id)initWithCallID:(id)arg1 peerJID:(id)arg2 terminatedByPeer:(_Bool)arg3 duration:(int)arg4 isVideo:(_Bool)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAPttRecorder;

@protocol WAPttRecorderDelegate <NSObject>
- (void)pttRecorderErrorShowRebootDeviceHint:(WAPttRecorder *)arg1;
- (void)pttRecorderWasInterrupted:(WAPttRecorder *)arg1;
- (void)pttRecorder:(WAPttRecorder *)arg1 didFinishWithFilePathToRecord:(NSString *)arg2;
- (void)pttRecorderDidFailToRecord:(WAPttRecorder *)arg1;
- (void)pttRecorderDidStartRecording:(WAPttRecorder *)arg1;
- (void)pttRecordedWillStartRecording:(WAPttRecorder *)arg1;
@end


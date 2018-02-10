//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABackupViewControllerDataProvider.h"

@class WACloudStatus, WAWeakTimer;

@interface WABackupViewControllerMediaRestoreDataProvider : WABackupViewControllerDataProvider
{
    WACloudStatus *_cloudStatus;
    id _cloudStatusListener;
    WAWeakTimer *_timer;
}

+ (long long)resultForStatus:(unsigned long long)arg1;
+ (id)errorForMediaRestoreStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)sendButtonTextUpdate;
- (void)stopTimerIfNeeded;
- (void)startTimerIfNeeded;
- (void)sendStatusTextUpdate;
- (void)sendAnimateCloudUpdate;
- (_Bool)hasCloudStatusNetworkError;
- (void)sendErrorUpdate;
- (void)updateCloudStatus;
- (void)cloudStatusDidChange:(id)arg1;
- (void)mediaRestorePhaseDidChange:(id)arg1;
- (void)updateCurrentRestore;
- (void)mediaRestoreStatusDidChange:(id)arg1;
- (void)sendAllUpdates;
- (void)requestAllUpdates;
- (void)dealloc;
- (id)initWithBackupViewController:(id)arg1 delegate:(id)arg2;

@end


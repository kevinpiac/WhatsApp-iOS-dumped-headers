//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WATermsOfService : NSObject
{
}

+ (void)optOutOfAccountInfoSharingWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)optedOutOfAccountInfoSharing;
+ (void)checkIfCanOptOutOfAccountInfoSharingInSettingsWithCompletion:(CDUnknownBlockType)arg1;
+ (void)sendSetTOSStageIQIfNecessary;
+ (void)sendAcceptIQIfNecessary;
+ (void)updateServerIfNecessary;
+ (void)tosAcceptedWithOptoutState:(_Bool)arg1;
+ (void)updateTOSUILastSeenDate;
+ (void)tosUIBecameVisibleForStage:(unsigned long long)arg1;
+ (void)setStartDate:(id)arg1 forTOSStage:(unsigned long long)arg2;
+ (id)startDateForTOSStage:(unsigned long long)arg1;
+ (_Bool)canPresentUIForStage:(unsigned long long)arg1;
+ (id)stageTwoStartDate;
+ (void)turnOff;
+ (void)setStageOneDuration:(long long)arg1 stageTwoDuration:(long long)arg2;
+ (void)reloadServerPropValue;
+ (id)cutoffDate;
+ (unsigned long long)stage;

@end

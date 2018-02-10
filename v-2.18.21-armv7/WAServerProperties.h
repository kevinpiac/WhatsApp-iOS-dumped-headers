//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAServerProperties : NSObject
{
}

+ (unsigned long long)maxAutodownloadSize;
+ (BOOL)isStickersEnabled;
+ (BOOL)allowsMMSIPHints;
+ (BOOL)siriExcludeGroupSenderName;
+ (double)mmsAsyncFastForwardTTL;
+ (BOOL)isAutomaticUserInterfaceUnloadingEnabled;
+ (BOOL)isTLSTicketResumptionDisabled;
+ (BOOL)isGroupsV3Enabled;
+ (BOOL)isLockedGroupsEnabled;
+ (BOOL)isAnnouncementGroupsEnabled;
+ (int)watchdogTimeoutValueEnterBackground;
+ (int)watchdogTimeoutValueBackgroundStart;
+ (int)watchdogTimeoutValueForegroundWarmStart;
+ (int)watchdogTimeoutValueForegroundColdStart;
+ (BOOL)isWatchdogTimeoutEnabled;
+ (BOOL)isGroupDescriptionEnabled;
+ (int)maxGroupDescriptionLength;
+ (BOOL)isYtVideoEnabled;
+ (BOOL)isUsyncSidelistEnabled;
+ (BOOL)isP2PPaymentEnabled;
+ (BOOL)isChangeNumberNotifyEnabled;
+ (int)mms4ConcurrentDownloads;
+ (int)mms4ConcurrentUploads;
+ (BOOL)isChatdResumeCheckEnabled;
+ (BOOL)shouldUseMMS4DirectPath;
+ (int)optimisticUploadDelayDefault;
+ (int)optimisticUploadDelayHighest;
+ (int)optimisticUploadDelayHigh;
+ (int)optimisticUploadDelayMed;
+ (BOOL)isOptimisticPrewarmEnabled;
+ (int)optimisticUploadDelayLow;
+ (BOOL)isOptimisticUploadEnabled;
+ (BOOL)isMMS4PPSEnabled;
+ (BOOL)isMediaStreamingEnabled;
+ (int)statusVideoMaxDuration;
+ (int)statusVideoMaxKiloBitrate;
+ (int)videoMaxKiloBitrate;
+ (int)gifSearchProvider;
+ (unsigned int)maxPrekeysToUpload;
+ (id)tosValue;
+ (BOOL)isEndToEndUsesRegularPush;
+ (int)maxListSize;
+ (int)placeSource;
+ (BOOL)isLocationSharingEnabled;
+ (BOOL)isReadReceiptsEnabledForDate:(id)arg1;
+ (BOOL)isInternalUser;
+ (BOOL)isDocumentDetectionEnabled;
+ (BOOL)isMozjpegEnabled;
+ (float)documentMozImageQuality;
+ (float)statusMozImageQuality;
+ (float)mozImageQuality;
+ (float)documentImageQuality;
+ (float)statusImageQuality;
+ (float)imageQuality;
+ (int)statusImageMaxEdge;
+ (int)documentImageMaxEdge;
+ (int)imageMaxEdge;
+ (int)imageMaxKBytes;
+ (int)maxDocumentSize;
+ (int)maxGroupSubjectLength;
+ (int)maxGroupParticipants;
+ (unsigned long long)maxMediaSize;
+ (int)timeSpentType;
+ (BOOL)chatAPNSPortEnabled;
+ (id)configHash;
+ (id)configKey;
+ (void)onServerErrorWithBackoff:(double)arg1;
+ (BOOL)updateWithProperties:(id)arg1 version:(id)arg2 protocolVersion:(int)arg3 configKey:(id)arg4 configHash:(id)arg5 refreshInterval:(double)arg6;
+ (BOOL)shouldQueryForVersion:(id)arg1;
+ (void)resetConfigHashToEmptyString;
+ (void)reset;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;

@end


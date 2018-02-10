//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAStackTrace : NSObject
{
}

+ (_Bool)uploadCriticalEventWithName:(id)arg1 addresses:(id)arg2 symbols:(id)arg3 forPreviousLaunch:(_Bool)arg4 previousStackTrace:(id)arg5 discretionary:(_Bool)arg6 samplingRate:(id)arg7;
+ (_Bool)uploadCriticalEventWithName:(id)arg1 forPreviousLaunch:(_Bool)arg2 previousStackTrace:(id)arg3 discretionary:(_Bool)arg4 samplingRate:(id)arg5;
+ (void)uploadCriticalBetaEventWithName:(id)arg1;
+ (void)logStackTraceWithName:(id)arg1 callStackAddresses:(id)arg2 symbols:(id)arg3;
+ (void)logStackTraceWithName:(id)arg1;
+ (void)uploadCriticalEventWithName:(id)arg1;
+ (_Bool)uploadCriticalEventWithName:(id)arg1 samplingRate:(float)arg2;
+ (_Bool)uploadCriticalEventForPreviousFileWithName:(id)arg1 stackTrace:(id)arg2 samplingRate:(id)arg3;
+ (void)uploadCriticalRequiredEventWithName:(id)arg1;
+ (void)uploadCriticalBetaEventWithName:(id)arg1 callStackAddresses:(id)arg2 symbols:(id)arg3;
+ (_Bool)uploadCriticalEventWithName:(id)arg1 callStackAddresses:(id)arg2 symbols:(id)arg3 samplingRate:(id)arg4;
+ (id)callStackDetailsForCriticalEventWithName:(id)arg1 addresses:(id)arg2 symbols:(id)arg3;
+ (void)markLogAsCriticalEventAtPath:(id)arg1 shouldForceUpload:(_Bool)arg2;
+ (void)markLogAsCrashAtPath:(id)arg1;
+ (void)markLogAtPath:(id)arg1 as:(id)arg2 shouldForceUpload:(_Bool)arg3;
+ (void)fatalError:(id)arg1;
+ (id)stringFromSignalNumber:(int)arg1;
+ (void)registerHandlersForVersion:(id)arg1 customListeners:(id)arg2;
+ (id)callStackDetailsWithName:(id)arg1 reason:(id)arg2 addresses:(id)arg3 symbols:(id)arg4;
+ (id)parseNameFromLine:(id)arg1;

@end


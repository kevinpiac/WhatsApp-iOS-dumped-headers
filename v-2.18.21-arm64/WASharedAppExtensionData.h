//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WASharedAppExtensionData : NSObject
{
}

+ (_Bool)isTestFlightBuild;
+ (CDUnknownBlockType)blockForLogHeader;
+ (_Bool)isLikelyNonAppStoreDistribution;
+ (id)WADeviceID;
+ (_Bool)isDeviceLocked;
+ (id)currentUserJID;
+ (id)sharedUserDefaults;
+ (id)logPathForCurrentExtension;
+ (id)baseLogPath;
+ (id)sharedDirectoryURL;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPrivacyPolicy : NSObject
{
    unsigned int _privacySetting[3];
    int _pendingRequestId[3];
    BOOL _needRefetch;
}

+ (id)stringForSetting:(unsigned int)arg1;
+ (void)resetPolicy;
+ (id)sharedPolicy;
- (void)setPrivacy:(unsigned int)arg1 forCategory:(unsigned int)arg2;
- (unsigned int)settingForCategory:(unsigned int)arg1;
- (void)loadPrivacySettingsIfNeeded;
- (void)ignoreResultsOfPendingRequests;
- (void)resetValues;
- (id)init;

@end


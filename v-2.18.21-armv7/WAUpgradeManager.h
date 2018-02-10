//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSString;

@interface WAUpgradeManager : NSObject <WAUpgradeCallback>
{
}

+ (void)notifyListenersOfUpgradeFrom:(id)arg1 to:(id)arg2;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (BOOL)checkForUpgrade;
+ (id)previousAppVersion;
+ (id)classesToNotifyDuringUpgrade;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACloudBackupManager.h"

@class NSTimer;

@interface WARandomCloudBackupManager : WACloudBackupManager
{
    BOOL _internalAvailable;
    NSTimer *_randomTimer;
}

@property(retain, nonatomic) NSTimer *randomTimer; // @synthesize randomTimer=_randomTimer;
@property(nonatomic) BOOL internalAvailable; // @synthesize internalAvailable=_internalAvailable;
- (void).cxx_destruct;
- (BOOL)initialized;
- (BOOL)available;
- (void)flipAvailable:(id)arg1;
- (id)initWithAutoBackupSettings:(id)arg1;

@end

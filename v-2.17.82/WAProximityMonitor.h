//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAProximityMonitor : NSObject
{
    int _refCount;
    BOOL _checkedForProximitySensor;
    BOOL _canMonitor;
}

+ (id)sharedMonitor;
@property(readonly, nonatomic) BOOL canMonitor; // @synthesize canMonitor=_canMonitor;
- (void)endMonitoring;
- (void)beginMonitoring;

@end


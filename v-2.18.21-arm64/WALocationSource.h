//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString, WAWeakTimer;
@protocol WALocationSourceDelegate;

@interface WALocationSource : NSObject <CLLocationManagerDelegate>
{
    WAWeakTimer *_timer;
    _Bool _updatingLocation;
    id <WALocationSourceDelegate> _delegate;
    CLLocationManager *_locationManager;
}

+ (_Bool)available;
@property(readonly, nonatomic, getter=isUpdatingLocation) _Bool updatingLocation; // @synthesize updatingLocation=_updatingLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) __weak id <WALocationSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)updateDesiredAccuracy;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


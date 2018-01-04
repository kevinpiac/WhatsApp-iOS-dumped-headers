//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface WALocationManagerAuthRequester : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CDUnknownBlockType _showDialogBlock;
    BOOL _haveShownAlertAskingForPermission;
    BOOL _haveShownAlertAskingToEnableLocationServices;
    unsigned int _backgroundLocationPreference;
    CDUnknownBlockType _completion;
}

+ (id)requestWithBackgroundLocationPreference:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) BOOL haveShownAlertAskingToEnableLocationServices; // @synthesize haveShownAlertAskingToEnableLocationServices=_haveShownAlertAskingToEnableLocationServices;
@property(readonly, nonatomic) BOOL haveShownAlertAskingForPermission; // @synthesize haveShownAlertAskingForPermission=_haveShownAlertAskingForPermission;
@property(nonatomic) unsigned int backgroundLocationPreference; // @synthesize backgroundLocationPreference=_backgroundLocationPreference;
- (void).cxx_destruct;
- (void)tellUserToGiveUpgradePermission:(CDUnknownBlockType)arg1;
- (void)tellUserToGiveUsPermission:(CDUnknownBlockType)arg1;
- (void)tellUserToAskTheirParentsForPermissionWithCompletion:(CDUnknownBlockType)arg1;
- (void)tellUserToEnableLocationServicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)showDialog;
- (void)showAlert:(id)arg1;
- (void)authorizationStatusDidChange:(int)arg1 block:(CDUnknownBlockType)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)requestAuthorization;
- (BOOL)haveRequestedAlwaysAuthorization;
- (void)request;
- (BOOL)requestWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


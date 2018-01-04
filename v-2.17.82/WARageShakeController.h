//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABDisabledControllerDelegate-Protocol.h"

@class CMMotionManager, NSDate, NSString, UIImage;
@protocol WADeviceDate;

@interface WARageShakeController : NSObject <ABDisabledControllerDelegate>
{
    CMMotionManager *_motionManager;
    NSDate<WADeviceDate> *_lastPresentedDate;
    BOOL _isDialogPresented;
    UIImage *_latestScreenshot;
}

- (void).cxx_destruct;
- (void)abDisabledViewControllerDidCancel:(id)arg1;
- (void)contactUsAction;
- (void)takeScreenshot;
- (void)presentInWindowAlertViewPresenter:(id)arg1;
- (void)presentRageShakePopup;
- (void)beginRageShakeDetection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

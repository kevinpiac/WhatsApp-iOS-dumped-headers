//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, NSDate, UIImage;
@protocol WADeviceDate;

@interface WARageShakeController : NSObject
{
    CMMotionManager *_motionManager;
    NSDate<WADeviceDate> *_lastPresentedDate;
    UIImage *_latestScreenshot;
    BOOL _isDialogPresented;
}

@property(readonly, nonatomic) BOOL isDialogPresented; // @synthesize isDialogPresented=_isDialogPresented;
- (void).cxx_destruct;
- (void)presentInWindowAlertViewPresenter:(id)arg1;
- (void)presentRageShakePopup;
- (void)beginRageShakeDetection;
- (id)init;

@end


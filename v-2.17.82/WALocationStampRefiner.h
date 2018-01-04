//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WALiveLocationSender-Protocol.h"
#import "WAShareLocationControllerDelegate-Protocol.h"

@class NSString, UIViewController, WAPlace;

@interface WALocationStampRefiner : NSObject <WAShareLocationControllerDelegate, WALiveLocationSender>
{
    WAPlace *_place;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _completion;
}

+ (void)refineWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)finishWithPlace:(id)arg1 image:(id)arg2;
- (void)shareLocationControllerDidSelectWAPlace:(id)arg1;
- (void)sendMessageContainingPlace:(id)arg1 liveLocationEndDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareLocationControllerDidCancel:(id)arg1;
- (void)internalRefineWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


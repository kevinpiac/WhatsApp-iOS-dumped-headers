//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface WACallWindow : UIWindow <UIGestureRecognizerDelegate>
{
    BOOL _minimized;
}

@property(nonatomic, getter=isMinimized) BOOL minimized; // @synthesize minimized=_minimized;
- (void)maximize;
- (void)minimize;
- (void)statusBarTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


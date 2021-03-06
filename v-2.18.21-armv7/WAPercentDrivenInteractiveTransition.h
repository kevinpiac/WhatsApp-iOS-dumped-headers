//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "WAPercentDrivenInteractiveTransitioning-Protocol.h"

@class NSString;

@interface WAPercentDrivenInteractiveTransition : UIPercentDrivenInteractiveTransition <WAPercentDrivenInteractiveTransitioning>
{
    BOOL _simulatesModalDismissTransition;
    CDUnknownBlockType _updateHandler;
}

@property(nonatomic) BOOL simulatesModalDismissTransition; // @synthesize simulatesModalDismissTransition=_simulatesModalDismissTransition;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)startInteractiveTransition:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) int completionCurve;
@property(readonly, nonatomic) float completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) float duration;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) float percentComplete;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL wantsInteractiveStart;

@end


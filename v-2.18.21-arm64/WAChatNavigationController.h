//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WANavigationController.h"

@interface WAChatNavigationController : WANavigationController
{
}

- (id)pushChatPresenter:(id)arg1 animated:(_Bool)arg2;
- (id)pushChatPresenter:(id)arg1 maximumDepth:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)pushChatPresenter:(id)arg1 chatSession:(id)arg2 maximumDepth:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)applyPresenter:(id)arg1 toChatViewController:(id)arg2;
- (id)chatViewControllerFrom:(id)arg1 forChatSession:(id)arg2 reuseViewController:(id)arg3;
- (id)chatViewControllerForPresenter:(id)arg1;

@end


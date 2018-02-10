//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatSessionsViewController.h"

#import "WANavigationItemCustomBackButtonTitle-Protocol.h"

@class NSString, WAContact;

@interface WAGroupsInCommonViewController : WAChatSessionsViewController <WANavigationItemCustomBackButtonTitle>
{
    WAContact *_contact;
}

+ (unsigned long long)numberOfGroupsInCommonWithContact:(id)arg1;
@property(readonly, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (_Bool)archiveActionRemovesCell:(id)arg1;
- (void)configureCell:(id)arg1 forChatSession:(id)arg2 message:(id)arg3;
- (void)setUpNoContentView:(id)arg1;
- (id)predicateForFetchRequest;
- (void)commonInit;
- (id)initWithContact:(id)arg1;
- (id)backButtonItemTitleForViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


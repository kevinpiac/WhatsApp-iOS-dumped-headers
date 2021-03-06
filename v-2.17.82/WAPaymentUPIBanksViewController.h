//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface WAPaymentUPIBanksViewController : WAViewController <WASearchControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_banks;
    NSArray *_searchResults;
    CDUnknownBlockType _completion;
    BOOL _resetContentOffsetInDidLayoutSubviews;
    BOOL _doNotAdjustSearchBarPosition;
    UITableView *_tableView;
    float _cachedRowHeight;
}

- (void).cxx_destruct;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)searchController:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)searchController:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)searchController:(id)arg1 heightForFooterInSection:(int)arg2;
- (int)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (float)searchController:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)searchController:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInSearchController:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)configureTableViewCell:(id)arg1 withBank:(id)arg2;
- (void)cancelAction:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)fixSearchBarPlacementWithAnimationDuration:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)wa_prefersMinimalBackButton;
- (void)resetUI;
- (id)initWithBanks:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


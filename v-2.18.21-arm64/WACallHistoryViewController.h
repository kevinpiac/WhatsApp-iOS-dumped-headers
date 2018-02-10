//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "ABDisabledControllerDelegate-Protocol.h"
#import "SinglePersonPickerDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"

@class NSArray, NSCharacterSet, NSString, UIBarButtonItem, UILabel, UISegmentedControl, UIView;

@interface WACallHistoryViewController : WATableViewController <ABDisabledControllerDelegate, SinglePersonPickerDelegate, WASearchControllerDelegate>
{
    UISegmentedControl *_callFilterSegmentedControl;
    _Bool _showMissedCallsOnly;
    UIBarButtonItem *_clearAllButton;
    UIBarButtonItem *_startCallButton;
    _Bool _editingSingleRow;
    NSArray *_searchResults;
    NSCharacterSet *_symbolsInPhoneNumberSet;
    NSCharacterSet *_nonNumbersSet;
    UIView *_emptyListView;
    UILabel *_emptyListViewLabel;
}

+ (_Bool)wa_needsCustomTableViewBehaviors;
+ (id)tabBarItem;
- (void).cxx_destruct;
- (void)singlePersonPickerDidCancel:(id)arg1;
- (void)singlePersonPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)singlePersonPicker:(id)arg1 didAskToStartVoiceCallWithContact:(id)arg2;
- (void)singlePersonPicker:(id)arg1 didAskToStartVideoCallWithContact:(id)arg2;
- (void)abDisabledViewControllerDidCancel:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)showContactInfoScreenForAggregateCallEvent:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)handleCallEvent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (void)applicationDidDismissCallScreen:(id)arg1;
- (id)aggregateCallEventAtIndexPath:(id)arg1;
- (void)callFilterDidChange:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)reload;
- (void)callLoggerDidUpdateEvents:(id)arg1;
- (void)startNewCall:(id)arg1;
- (void)clearAll:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)editButtonTapped:(id)arg1;
- (void)reloadEmptyListView;
- (void)reloadLeftBarButtonItem;
- (void)viewDidLayoutSubviews;
- (void)wa_applicationDidEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)wa_hideTableViewHeader;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


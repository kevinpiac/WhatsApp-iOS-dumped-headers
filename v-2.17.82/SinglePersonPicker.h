//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAContactTableViewCellDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIFont, UITableView, WAContactsSection, WASearchController, WASearchResultsController, WATableSection;
@protocol SinglePersonPickerDelegate;

@interface SinglePersonPicker : WAViewController <UITableViewDelegate, UITableViewDataSource, WASearchControllerDelegate, WASearchResultsControllerDelegate, WAContactTableViewCellDelegate>
{
    WATableSection *_sectionTopActions;
    WATableSection *_sectionBottomActions;
    WAContactsSection *_sectionFrequentlyContacted;
    BOOL _needsRefreshOnContactsSync;
    BOOL _doNotAdjustSearchBarPosition;
    BOOL _resetContentOffsetInDidLayoutSubviews;
    NSString *_disabledContactStatusText;
    NSString *_blockedContactStatusText;
    UIFont *_singleLetterSectionTitleFont;
    UIFont *_longSectionTitleFont;
    float _sectionHeaderHeight;
    NSMutableDictionary *_contactsForChatSearchResults;
    id <SinglePersonPickerDelegate> _delegate;
    unsigned int _pickerMode;
    UITableView *_tableView;
    WASearchController *_searchController;
    WASearchResultsController *_searchResultsController;
    NSArray *_contactsSections;
    unsigned int _totalCount;
}

+ (id)contactFromChatSession:(id)arg1;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSArray *contactsSections; // @synthesize contactsSections=_contactsSections;
@property(retain, nonatomic) WASearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(retain, nonatomic) WASearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int pickerMode; // @synthesize pickerMode=_pickerMode;
@property(nonatomic) __weak id <SinglePersonPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (BOOL)searchResultsControllerShouldReloadData:(id)arg1;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (BOOL)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned int)arg2;
- (void)fixSearchBarPlacementWithAnimationDuration:(double)arg1;
- (id)contactForSearchResultAtIndexPath:(id)arg1;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)searchController:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)searchController:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (int)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)searchController:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInSearchController:(id)arg1;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)searchController:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)actionsSectionForTableSection:(int)arg1;
- (BOOL)tableView:(id)arg1 isActionsSection:(int)arg2;
- (float)sectionHeaderHeight;
- (id)longSectionTitleFont;
- (id)singleLetterSectionTitleFont;
- (void)tableView:(id)arg1 didSelectContactCellAtIndexPath:(id)arg2;
- (id)cellForContactAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)initiateCallFromContactTableViewCell:(id)arg1 withVideo:(BOOL)arg2;
- (void)voiceCallButtonTappedInContactTableViewCell:(id)arg1;
- (void)videoCallButtonTappedInContactTableViewCell:(id)arg1;
- (void)wa_viewLayoutMarginsDidChange;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)showUnblockPromptForContact:(id)arg1 atIndexPath:(id)arg2 inTableView:(id)arg3;
- (void)cancelAction:(id)arg1;
- (void)reloadSupplementaryTableRows;
- (void)unblockContact:(id)arg1;
- (void)syncManagerDidFinishSync:(id)arg1;
- (void)reloadContacts;
- (id)contactForTableIndexPath:(id)arg1;
- (id)contactWithJID:(id)arg1;
- (id)contactsSectionForTableSection:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


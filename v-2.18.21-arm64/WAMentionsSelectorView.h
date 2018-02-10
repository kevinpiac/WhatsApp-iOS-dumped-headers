//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAContactsSearchControllerDelegate-Protocol.h"

@class NSArray, NSString, WAContactsSearchController, WAMentionsTableView;
@protocol WAMentionsSelectorViewDelegate;

@interface WAMentionsSelectorView : UIView <UITableViewDelegate, UITableViewDataSource, WAContactsSearchControllerDelegate>
{
    WAContactsSearchController *_contactsSearchController;
    NSString *_searchTerm;
    NSArray *_sections;
    WAMentionsTableView *_tableView;
    struct _NSRange _textRange;
    UIView *_maskView;
    UIView *_bottomView;
    NSArray *_cachedSections;
    _Bool _clearingTable;
    double _currentHeightLimit;
    double _tableSectionHeight;
    NSArray *_priorityJids;
    _Bool _needsToClearTable;
    double _previousContentOffset;
    id <WAMentionsSelectorViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WAMentionsSelectorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contactsSearchControllerDelegateDidInvalidateSearchResults:(id)arg1;
- (id)bottomView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)headerViewWithAlpha:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)totalContactsCountInSections:(id)arg1;
- (unsigned long long)totalContactsCount;
- (id)tableSections;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)priorityJids;
- (void)createSectionsFromContacts:(id)arg1;
- (void)chatSessionReplaced:(id)arg1;
- (void)chatSessionsUpdated:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (double)tableViewHeightNeeded;
- (void)updateFrame:(struct CGRect)arg1 animationCurve:(long long)arg2 animationDuration:(double)arg3;
- (void)updateSearchTerm:(id)arg1 forTextRange:(struct _NSRange)arg2;
- (void)setVisibleHeightLimit:(double)arg1 animationOptions:(unsigned long long)arg2 animationDuration:(double)arg3;
- (void)updateMask;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatSession:(id)arg2 applyMasking:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


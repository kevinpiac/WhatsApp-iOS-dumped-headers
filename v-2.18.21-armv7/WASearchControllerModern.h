//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASearchController.h"

#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class NSString, UISearchController, _WASearchControllerViewController;

@interface WASearchControllerModern : WASearchController <UISearchControllerDelegate, UISearchResultsUpdating>
{
    _WASearchControllerViewController *_searchViewController;
    UISearchController *_searchController;
    BOOL _lastDefinesPresentationContext;
}

- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (id)findBadConstraint;
- (void)fixBadConstraintIfNeeded;
- (void)willPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
- (id)tableView;
- (id)searchBar;
- (id)systemSearchController;
- (id)initWithHostViewController:(id)arg1 searchBar:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


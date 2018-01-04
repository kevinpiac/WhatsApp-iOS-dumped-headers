//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UITableViewCell, UIView, WASearchController;

@protocol WASearchControllerDelegate <NSObject>
- (void)searchController:(WASearchController *)arg1 willDisplayFooterView:(UIView *)arg2 forSection:(int)arg3;
- (void)searchController:(WASearchController *)arg1 willDisplayCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (float)searchController:(WASearchController *)arg1 heightForFooterInSection:(int)arg2;
- (float)searchController:(WASearchController *)arg1 heightForHeaderInSection:(int)arg2;
- (void)searchController:(WASearchController *)arg1 willDisplayHeaderView:(UIView *)arg2 forSection:(int)arg3;
- (void)searchController:(WASearchController *)arg1 didEndEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)searchController:(WASearchController *)arg1 willBeginEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (int)searchController:(WASearchController *)arg1 editingStyleForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)searchController:(WASearchController *)arg1 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg2;
- (void)searchController:(WASearchController *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)searchController:(WASearchController *)arg1 titleForHeaderInSection:(int)arg2;
- (void)searchController:(WASearchController *)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (BOOL)searchController:(WASearchController *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (int)numberOfSectionsInSearchController:(WASearchController *)arg1;
- (UITableViewCell *)searchController:(WASearchController *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
- (int)searchController:(WASearchController *)arg1 numberOfRowsInSection:(int)arg2;
- (void)searchControllerDidEndSearch:(WASearchController *)arg1;
- (void)searchControllerWillEndSearch:(WASearchController *)arg1;
- (void)searchControllerDidBeginSearch:(WASearchController *)arg1;
- (void)searchControllerWillBeginSearch:(WASearchController *)arg1;
- (void)searchController:(WASearchController *)arg1 updateResultsForSearchString:(NSString *)arg2;

@optional
- (float)searchController:(WASearchController *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
@end


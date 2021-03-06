//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACardTableViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WALiveLocationFriendsTableViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;
@protocol WALiveLocationFriendsDataSource, WALiveLocationFriendsDelegate;

@interface WALiveLocationFriendsTableViewController : WACardTableViewController <UITableViewDelegate, WALiveLocationFriendsTableViewCellDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    BOOL _disableAutoGrow;
    NSMutableArray *_rows;
    BOOL _needsRebalance;
    id <WALiveLocationFriendsDataSource> _dataSource;
    id <WALiveLocationFriendsDelegate> _delegate;
}

@property(nonatomic) __weak id <WALiveLocationFriendsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WALiveLocationFriendsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)liveLocationFriendsTableViewCellStopSharing;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)wa_autoExpandOnContentSizeChange;
- (BOOL)wa_cardNavigationControllerShouldHaveDragHandle;
- (float)wa_minimumVisibleCardHeight;
- (void)confirmStopSharing:(CDUnknownBlockType)arg1;
- (struct CGSize)preferredContentSize;
- (void)updateFriendLocation:(id)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)setFriendLocations:(id)arg1;
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) NSString *cellNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


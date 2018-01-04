//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

@class NSArray, NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, UIActivityIndicatorView, UITableViewCell, WADatabaseUsageManager, WADiskUsageCommand;
@protocol OS_dispatch_queue;

@interface WADiskUsageTableViewController : WATableViewController
{
    WADiskUsageCommand *_command;
    WADatabaseUsageManager *_databaseUsage;
    NSManagedObjectContext *_privateContext;
    NSObject<OS_dispatch_queue> *_jidToChatMapQueue;
    NSMutableDictionary *_jidToChatMap;
    BOOL _jidToChatMapDidReceiveFinalUpdate;
    float _preferredHeight;
    BOOL _isLoading;
    BOOL _isEmpty;
    NSArray *_rows;
    NSMutableSet *_rowsLoading;
    NSMutableArray *_pendingResults;
    UITableViewCell *_loadingCell;
    UIActivityIndicatorView *_loadingIndicator;
    UITableViewCell *_emptyCell;
}

+ (BOOL)filterBy:(id)arg1;
@property(retain, nonatomic) UITableViewCell *emptyCell; // @synthesize emptyCell=_emptyCell;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UITableViewCell *loadingCell; // @synthesize loadingCell=_loadingCell;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (unsigned int)resultIndexForIndexPath:(id)arg1;
- (id)indexPathForResultIndex:(unsigned int)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)calculateCellHeights;
- (void)wa_fontSizeDidChange;
- (BOOL)updateRowData:(id)arg1 to:(id)arg2;
- (void)updateRowData:(id)arg1 inController:(id)arg2;
- (id)arrayByMerging:(id)arg1 toBase:(id)arg2 usingCallback:(CDUnknownBlockType)arg3;
- (id)buildRowsForResults:(id)arg1;
- (id)rowDataForResult:(id)arg1 chatSessionDetails:(id)arg2;
- (void)appendRows:(id)arg1 isFinalUpdate:(BOOL)arg2;
- (void)drainPendingResults;
- (void)handleCommandResults:(id)arg1 hasMore:(BOOL)arg2;
- (void)loadMapForJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startCommand;
- (id)commandForJIDs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;

@end

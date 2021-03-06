//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

@class NSMutableArray;

@interface WAFAQBrowserViewController : WATableViewController
{
    NSMutableArray *_entries;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)entriesByReadTime;
@property(readonly, nonatomic) unsigned int numberOfEntriesOpened;
- (void)sendEmail:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)wa_viewLayoutMarginsDidChange;
- (void)wa_tintColorDidChange;
- (void)wa_fontSizeDidChange;
- (id)initWithEntries:(id)arg1;

@end


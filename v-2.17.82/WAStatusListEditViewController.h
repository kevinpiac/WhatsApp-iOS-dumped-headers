//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "StatusEditControllerDelegate-Protocol.h"

@protocol WAStatusListEditViewControllerDelegate;

@interface WAStatusListEditViewController : WATableViewController <StatusEditControllerDelegate>
{
    id <WAStatusListEditViewControllerDelegate> _delegate;
}

+ (id)controllerWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WAStatusListEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)statusEditController:(id)arg1 didSaveStatus:(id)arg2;
- (void)statusEditControllerDidCancel:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewDidLoad;
- (void)doneAction:(id)arg1;
- (void)deleteAllAction:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end


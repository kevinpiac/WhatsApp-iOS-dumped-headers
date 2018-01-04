//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, UITableViewCell, UITextView;
@protocol StatusEditControllerDelegate;

@interface StatusEditController : WATableViewController <UITextViewDelegate>
{
    float _keyboardHeight;
    UITableViewCell *_textViewCell;
    UITextView *_textView;
    BOOL _editingMode;
    id <StatusEditControllerDelegate> _delegate;
    NSString *_preloadedStatusText;
}

@property(nonatomic) BOOL editingMode; // @synthesize editingMode=_editingMode;
@property(copy, nonatomic) NSString *preloadedStatusText; // @synthesize preloadedStatusText=_preloadedStatusText;
@property(nonatomic) __weak id <StatusEditControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)fixContentOffset;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)saveAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateNavigationBar;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

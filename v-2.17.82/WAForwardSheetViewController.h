//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WAContactGridViewControllerDataSource-Protocol.h"
#import "WAContactGridViewControllerDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIBarButtonItem, UILabel, UIScrollView, UISearchBar, UIStackView, UIToolbar, UIView, WAContactGridViewController, WASearchResultsController;
@protocol WAForwardSheetDelegate;

@interface WAForwardSheetViewController : WAViewController <UIViewControllerTransitioningDelegate, UISearchBarDelegate, WASearchResultsControllerDelegate, WAContactGridViewControllerDataSource, WAContactGridViewControllerDelegate>
{
    NSMutableArray *_selectedContacts;
    NSMutableArray *_contacts;
    BOOL _needsResortContacts;
    CDUnknownBlockType _completionHandler;
    id <WAForwardSheetDelegate> _delegate;
    NSArray *_searchResults;
    WASearchResultsController *_searchResultsController;
    WAContactGridViewController *_contactGridController;
    NSArray *_separatorHeights;
    UIView *_tapToDismissView;
    UIStackView *_stackView;
    NSLayoutConstraint *_stackViewBottomMargin;
    UIToolbar *_topToolbar;
    UISearchBar *_searchBar;
    UIView *_contactGridContainer;
    UIBarButtonItem *_forwardBarButtonItem;
    UIView *_titleView;
    UILabel *_labelSelectChats;
    UIScrollView *_recipientsScrollView;
    UILabel *_labelRecipients;
}

+ (id)controller;
@property(retain, nonatomic) UILabel *labelRecipients; // @synthesize labelRecipients=_labelRecipients;
@property(retain, nonatomic) UIScrollView *recipientsScrollView; // @synthesize recipientsScrollView=_recipientsScrollView;
@property(retain, nonatomic) UILabel *labelSelectChats; // @synthesize labelSelectChats=_labelSelectChats;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(retain, nonatomic) UIView *contactGridContainer; // @synthesize contactGridContainer=_contactGridContainer;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIToolbar *topToolbar; // @synthesize topToolbar=_topToolbar;
@property(retain, nonatomic) NSLayoutConstraint *stackViewBottomMargin; // @synthesize stackViewBottomMargin=_stackViewBottomMargin;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIView *tapToDismissView; // @synthesize tapToDismissView=_tapToDismissView;
@property(copy, nonatomic) NSArray *separatorHeights; // @synthesize separatorHeights=_separatorHeights;
@property(retain, nonatomic) WAContactGridViewController *contactGridController; // @synthesize contactGridController=_contactGridController;
@property(retain, nonatomic) WASearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id <WAForwardSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (BOOL)searchResultsControllerShouldReloadData:(id)arg1;
- (BOOL)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned int)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)reloadDataFromSearchResultsController:(id)arg1;
@property(readonly, nonatomic) BOOL searchActive;
- (void)contactGridViewController:(id)arg1 didDeselectContactAtIndex:(unsigned int)arg2;
- (void)contactGridViewController:(id)arg1 didSelectContactAtIndex:(unsigned int)arg2;
- (id)contactGridViewController:(id)arg1 contactAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfContactsInContactGridViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *currentDataSource;
@property(readonly) NSArray *selectedContacts;
- (void)resortContactsIfNeeded;
- (void)setNeedsResortContacts;
- (void)scrollRecipientListAnimated:(BOOL)arg1;
- (void)updateSelection;
- (void)loadRecentChats;
- (id)contactFromChatSession:(id)arg1;
- (void)tapToDismiss:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)switchToListAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)forwardAction:(id)arg1;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


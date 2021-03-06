//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAContactGridViewController.h"

#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WAContactGridViewControllerDataSource-Protocol.h"
#import "WAContactGridViewControllerDelegate-Protocol.h"
#import "WASinglePhotoPickerControllerDelegate-Protocol.h"
#import "WebImagePickerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UILabel, WADoneWithSpinnerBarButtonItem, WANewGroupHeaderView;
@protocol WAGroupComposerDelegate;

@interface WAGroupComposerViewController : WAContactGridViewController <UICollectionViewDelegateFlowLayout, WAContactGridViewControllerDataSource, WAContactGridViewControllerDelegate, WebImagePickerDelegate, WASinglePhotoPickerControllerDelegate>
{
    NSMutableArray *_contacts;
    id <WAGroupComposerDelegate> _composerDelegate;
    WADoneWithSpinnerBarButtonItem *_doneButton;
    WANewGroupHeaderView *_headerView;
    float _headerViewWidth;
    UILabel *_contactsGridSectionTitleLabel;
    NSArray *_contactsGridSectionTitleLabelConstraints;
}

+ (id)contactsGridTitleFont;
@property(copy, nonatomic) NSArray *contactsGridSectionTitleLabelConstraints; // @synthesize contactsGridSectionTitleLabelConstraints=_contactsGridSectionTitleLabelConstraints;
@property(retain, nonatomic) UILabel *contactsGridSectionTitleLabel; // @synthesize contactsGridSectionTitleLabel=_contactsGridSectionTitleLabel;
@property(nonatomic) float headerViewWidth; // @synthesize headerViewWidth=_headerViewWidth;
@property(retain, nonatomic) WANewGroupHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WADoneWithSpinnerBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak id <WAGroupComposerDelegate> composerDelegate; // @synthesize composerDelegate=_composerDelegate;
- (void).cxx_destruct;
- (void)contactGridViewController:(id)arg1 requestedToDeleteContactAtIndex:(unsigned int)arg2;
- (id)contactGridViewController:(id)arg1 contactAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfContactsInContactGridViewController:(id)arg1;
- (id)collectionViewIndexPathForContactIndex:(unsigned int)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (float)currentHeaderViewWidth;
- (void)reloadHeaderViewIfNecessary;
- (void)singlePhotoPickerControllerDidCancel:(id)arg1;
- (void)singlePhotoPickerController:(id)arg1 didFinishWithImage:(id)arg2;
- (void)webImagePicker:(id)arg1 didFinishWithImage:(id)arg2;
- (void)showImageSearchController;
- (void)reallyShowImagePickerForSourceType:(int)arg1;
- (void)showImagePickerForSourceType:(int)arg1;
- (void)editGroupPicture;
- (void)validateGroup;
- (void)subjectTextFieldEditingChanged:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)reloadContactsGridSectionTitleLabelConstraints;
- (void)updateInterfaceOnParticipantListChange;
@property(copy, nonatomic) NSArray *contacts;
- (void)viewSafeAreaInsetsDidChange;
- (void)fontSizeDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithScrollDirection:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


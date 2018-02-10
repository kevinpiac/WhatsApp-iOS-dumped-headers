//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UICollectionView, UILabel, UIStackView, UIView, WAChatSession, WAContactGridCellConfiguration, WAGroupMember;

@interface WAMessageAdminViewController : WAViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate>
{
    WAContactGridCellConfiguration *_gridCellConfiguration;
    unsigned long long _remainingAdminCount;
    CDUnknownBlockType _completionBlock;
    NSLayoutConstraint *_containerViewWidth;
    UIView *_containerView;
    UIView *_backgroundView;
    UIView *_groupInfoSeparator;
    UIStackView *_groupInfoStackView;
    UILabel *_messageAdminLabel;
    UILabel *_messageAdminDetialsLabel;
    UIView *_participantsView;
    UILabel *_labelAdmins;
    UICollectionView *_participantsListView;
    NSLayoutConstraint *_participantsListViewHeightPortrait;
    NSLayoutConstraint *_participantsListViewLeading;
    UIButton *_buttonCancel;
    NSArray *_separatorHeight;
    WAChatSession *_chatSession;
    WAGroupMember *_initialSelection;
    NSArray *_groupAdmins;
}

+ (id)controllerForChatSession:(id)arg1 initialSelection:(id)arg2;
@property(readonly, nonatomic) NSArray *groupAdmins; // @synthesize groupAdmins=_groupAdmins;
@property(retain, nonatomic) WAGroupMember *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(retain, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
@property(copy, nonatomic) NSArray *separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(retain, nonatomic) UIButton *buttonCancel; // @synthesize buttonCancel=_buttonCancel;
@property(retain, nonatomic) NSLayoutConstraint *participantsListViewLeading; // @synthesize participantsListViewLeading=_participantsListViewLeading;
@property(retain, nonatomic) NSLayoutConstraint *participantsListViewHeightPortrait; // @synthesize participantsListViewHeightPortrait=_participantsListViewHeightPortrait;
@property(retain, nonatomic) UICollectionView *participantsListView; // @synthesize participantsListView=_participantsListView;
@property(retain, nonatomic) UILabel *labelAdmins; // @synthesize labelAdmins=_labelAdmins;
@property(retain, nonatomic) UIView *participantsView; // @synthesize participantsView=_participantsView;
@property(nonatomic) __weak UILabel *messageAdminDetialsLabel; // @synthesize messageAdminDetialsLabel=_messageAdminDetialsLabel;
@property(nonatomic) __weak UILabel *messageAdminLabel; // @synthesize messageAdminLabel=_messageAdminLabel;
@property(retain, nonatomic) UIStackView *groupInfoStackView; // @synthesize groupInfoStackView=_groupInfoStackView;
@property(retain, nonatomic) UIView *groupInfoSeparator; // @synthesize groupInfoSeparator=_groupInfoSeparator;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSLayoutConstraint *containerViewWidth; // @synthesize containerViewWidth=_containerViewWidth;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)contactsGridLayout;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateAdminsLable;
@property(readonly, nonatomic) _Bool needsShowMore;
- (void)cancelAction:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


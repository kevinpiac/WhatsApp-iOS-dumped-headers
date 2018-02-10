//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"
#import "WASinglePhotoPickerControllerDelegate-Protocol.h"

@class ACAccountStore, GroupIconViewController, NSString, UIImage, UILabel, UITextField, UIView, WAProfileHeaderView, WAProgressHUD, WATableRow, WATableSection;
@protocol WAProfileViewControllerDelegate;

@interface WAProfileViewController : WAStaticTableViewController <WASinglePhotoPickerControllerDelegate, UITextFieldDelegate, WAImageToImageTransitioning, WANavigationControllerPopToAnimating>
{
    _Bool _useDeviceName;
    _Bool _modal;
    _Bool _profilePictureModified;
    _Bool _showFbImport;
    id <WAProfileViewControllerDelegate> _delegate;
    double _keyboardHeight;
    long long _networkActivities;
    WAProfileHeaderView *_headerView;
    GroupIconViewController *_profilePictureViewController;
    UIImage *_temporaryProfilePicture;
    WATableSection *_sectionPushName;
    UITextField *_textFieldName;
    UILabel *_labelNameLength;
    WATableSection *_sectionPhoneNumber;
    WATableSection *_sectionMyAbout;
    WATableRow *_rowMyAbout;
    WATableSection *_sectionFBImport;
    UIView *_fbImportSectionHeaderView;
    UILabel *_fbImportHelperTextLabel;
    WAProgressHUD *_progressHUD;
    ACAccountStore *_accountStore;
}

@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) WAProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) UILabel *fbImportHelperTextLabel; // @synthesize fbImportHelperTextLabel=_fbImportHelperTextLabel;
@property(retain, nonatomic) UIView *fbImportSectionHeaderView; // @synthesize fbImportSectionHeaderView=_fbImportSectionHeaderView;
@property(retain, nonatomic) WATableSection *sectionFBImport; // @synthesize sectionFBImport=_sectionFBImport;
@property(readonly, nonatomic) _Bool showFbImport; // @synthesize showFbImport=_showFbImport;
@property(retain, nonatomic) WATableRow *rowMyAbout; // @synthesize rowMyAbout=_rowMyAbout;
@property(retain, nonatomic) WATableSection *sectionMyAbout; // @synthesize sectionMyAbout=_sectionMyAbout;
@property(retain, nonatomic) WATableSection *sectionPhoneNumber; // @synthesize sectionPhoneNumber=_sectionPhoneNumber;
@property(retain, nonatomic) UILabel *labelNameLength; // @synthesize labelNameLength=_labelNameLength;
@property(retain, nonatomic) UITextField *textFieldName; // @synthesize textFieldName=_textFieldName;
@property(retain, nonatomic) WATableSection *sectionPushName; // @synthesize sectionPushName=_sectionPushName;
@property(retain, nonatomic) UIImage *temporaryProfilePicture; // @synthesize temporaryProfilePicture=_temporaryProfilePicture;
@property(nonatomic) _Bool profilePictureModified; // @synthesize profilePictureModified=_profilePictureModified;
@property(retain, nonatomic) GroupIconViewController *profilePictureViewController; // @synthesize profilePictureViewController=_profilePictureViewController;
@property(retain, nonatomic) WAProfileHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long networkActivities; // @synthesize networkActivities=_networkActivities;
@property(nonatomic) _Bool modal; // @synthesize modal=_modal;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) __weak id <WAProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useDeviceName; // @synthesize useDeviceName=_useDeviceName;
- (void).cxx_destruct;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardFrameDidChange:(id)arg1;
- (void)adjustBottomContentInsetForCurrentKeyboardHeight;
- (void)chatManagerDidUpdateStatus:(id)arg1;
- (void)updateMyAboutCell;
- (void)presentMyAboutEditingScreen;
- (void)singlePhotoPickerControllerDidCancel:(id)arg1;
- (void)singlePhotoPickerController:(id)arg1 didFinishWithImage:(id)arg2;
- (void)checkProfilePictureActivity:(_Bool)arg1;
- (void)showProfilePhotoActivity:(_Bool)arg1;
- (void)reloadProfilePicture;
- (void)deleteProfilePhoto;
- (void)reallyShowImagePickerForSourceType:(long long)arg1;
- (void)showImagePickerForSourceType:(long long)arg1;
- (void)profilePictureUpdated:(id)arg1;
- (void)presentConnectivityRequiredAlert;
- (void)editPhotoAction:(id)arg1;
- (void)wa_applicationDidBecomeActive;
- (void)requestFBAccess;
- (void)renewCredentialsForAccount:(id)arg1;
- (void)importUsernameFromFBAccount:(id)arg1 accountRenewed:(_Bool)arg2;
- (void)importProfilePhotoFromFBAccount:(id)arg1;
- (void)reportFBErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)processFBPicture:(id)arg1;
- (void)processFBAccountInfo:(id)arg1;
- (void)checkFacebookImportCompletion;
- (void)showOtherFacebookImportErrorAlert:(id)arg1;
- (void)showFacebookAccessNotAllowedErrorAlert;
- (void)showFacebookNotConfiguredErrorAlert;
- (void)showStaleFacebookPasswordErrorAlert;
- (void)removeProgressHUD;
- (void)showProgressHUD:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldValueChanged:(id)arg1;
- (void)updateTextFieldValues;
- (void)validateUserInput;
- (void)updateNavigationBarButtons;
- (void)updateNameLengthIndication;
- (id)invalidCharactersInPushName:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)cancelAction:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupTableView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


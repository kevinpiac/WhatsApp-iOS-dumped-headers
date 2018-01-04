//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WAMultiContactPickerDelegate-Protocol.h"
#import "WAQRCodeScannerViewControllerDelegate-Protocol.h"

@class NSString, NotificationsViewController, WABadgedTableViewCell, WASettingsProfileTableViewCell, WATableRow;

@interface WASettingsViewController : WAStaticTableViewController <UINavigationControllerDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, WAMultiContactPickerDelegate, WAQRCodeScannerViewControllerDelegate>
{
    NotificationsViewController *_notificationsController;
    WABadgedTableViewCell *_chatSettingsCell;
    WASettingsProfileTableViewCell *_profileCell;
    WATableRow *_starredMessagesRow;
}

- (void).cxx_destruct;
- (void)qrCodeScannerViewControllerDidCancel:(id)arg1;
- (void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2;
- (BOOL)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2;
- (void)scanQRCode;
- (void)showWebClientSettings;
- (void)chatManagerDidUpdateStatus:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)multiContactPickerDidCancel:(id)arg1;
- (void)multiContactPicker:(id)arg1 didSelectRecipients:(id)arg2;
- (void)setupTableView;
- (void)wa_fontSizeDidChange;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)showDataUsage;
- (void)showStarredMessagesAnimated:(BOOL)arg1;
- (void)notificationsAction;
- (void)chatSettingsAction;
- (void)viewAccountAction;
- (void)viewProfileAction;
- (void)inviteAction;
- (void)aboutAction;
- (void)inviteUsingOtherMethods;
- (void)inviteViaSinaWeibo;
- (void)inviteViaFacebook;
- (void)inviteViaTwitter;
- (void)inviteViaEmail;
- (void)sendEmailInvitationTo:(id)arg1;
- (void)inviteViaSMS;
- (void)sendSMSInvitationTo:(id)arg1;
- (void)addIcon:(id)arg1 toTableViewCell:(id)arg2;
- (void)reloadProfilePicture;
- (void)updateProfileInfo;
- (void)mediaRestoreStatusUpdated:(id)arg1;
- (void)backupErrorBadgeUpdated:(id)arg1;
- (void)updateChatSettingsBadge;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

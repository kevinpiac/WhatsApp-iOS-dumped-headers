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

@class NSString, NotificationsViewController, WABadgedTableViewCell, WASettingsProfileTableViewCell, WATableRow, WATableSection;

@interface WASettingsViewController : WAStaticTableViewController <UINavigationControllerDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, WAMultiContactPickerDelegate, WAQRCodeScannerViewControllerDelegate>
{
    NotificationsViewController *_notificationsController;
    WABadgedTableViewCell *_chatSettingsCell;
    WASettingsProfileTableViewCell *_profileCell;
    WATableSection *_sectionSettings;
    WATableRow *_notificationsRow;
    WATableRow *_paymentsRow;
    WATableRow *_starredMessagesRow;
    WATableRow *_webClientRow;
}

- (void).cxx_destruct;
- (void)qrCodeScannerViewControllerDidCancel:(id)arg1;
- (void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2;
- (_Bool)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2;
- (void)scanQRCode;
- (void)showWebClientSettings;
- (void)paymentsAvailabilityUpdated:(id)arg1;
- (id)addPaymentsRow;
- (void)chatManagerDidUpdateStatus:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)multiContactPickerDidCancel:(id)arg1;
- (void)multiContactPicker:(id)arg1 didSelectRecipients:(id)arg2;
- (void)setupTableView;
- (void)wa_fontSizeDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadWebClientRow;
- (void)callDidEnd:(id)arg1;
- (void)callDidStart:(id)arg1;
- (void)showDataUsage;
- (void)showStarredMessagesAnimated:(_Bool)arg1;
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
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

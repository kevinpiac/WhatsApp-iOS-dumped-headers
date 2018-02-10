//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "WALinkLabelDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UISwitch, UIView, WALinkLabel, WAParticipantPickerViewController, WATableRow;
@protocol ChangeNumberNotificationControllerDelegate;

@interface ChangeNumberNotificationController : WAStaticTableViewController <WAParticipantPickerViewControllerDelegate, WALinkLabelDelegate>
{
    UILabel *_tableHeaderTitleLabel;
    UILabel *_tableHeaderSubtitleLabel;
    UISwitch *_switchNotification;
    WATableRow *_allContactsRow;
    WATableRow *_contactsChatRow;
    WATableRow *_customRow;
    NSArray *_customSelectedContacts;
    WAParticipantPickerViewController *_participantPickerViewController;
    WALinkLabel *_footerLabel;
    UIView *_footerView;
    BOOL _isTableViewSetup;
    BOOL _contactWasUnblocked;
    id <ChangeNumberNotificationControllerDelegate> _delegate;
    int _notificationRecipients;
    NSArray *_notificationContacts;
    NSString *_formatedOldPhoneNumber;
    NSString *_formatedNewPhoneNumber;
}

+ (id)indexPathForRow:(unsigned int)arg1;
+ (id)footerTextForNumberOfSelectedContacts:(unsigned int)arg1;
@property(copy, nonatomic) NSString *formatedNewPhoneNumber; // @synthesize formatedNewPhoneNumber=_formatedNewPhoneNumber;
@property(copy, nonatomic) NSString *formatedOldPhoneNumber; // @synthesize formatedOldPhoneNumber=_formatedOldPhoneNumber;
@property(copy, nonatomic) NSArray *notificationContacts; // @synthesize notificationContacts=_notificationContacts;
@property(nonatomic) int notificationRecipients; // @synthesize notificationRecipients=_notificationRecipients;
@property(nonatomic) __weak id <ChangeNumberNotificationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createTableRowWithTitle:(id)arg1 recipients:(int)arg2 shouldOpenContactPicker:(BOOL)arg3;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)participantPicker:(id)arg1 didUnblockContact:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateTableViewHeader;
- (void)reloadData;
- (void)setupTableView;
- (void)viewDidLoad;
- (void)notificationSwitchAction:(id)arg1;
- (void)doneAction:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

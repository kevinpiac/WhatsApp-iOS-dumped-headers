//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSString, WAChatSession, WAGroupParticipantsController, WATableRow;

@interface WAGroupSettingsTableViewController : WAStaticTableViewController <NSFetchedResultsControllerDelegate, WAParticipantPickerViewControllerDelegate>
{
    _Bool _isAdmin;
    NSFetchedResultsController *_fetchedResultsController;
    WAGroupParticipantsController *_participantsController;
    WAChatSession *_chatSession;
    WATableRow *_rowGroupAnnouncementOnly;
    WATableRow *_rowGroupEditingPermission;
    WATableRow *_rowManageAdmins;
}

@property(retain, nonatomic) WATableRow *rowManageAdmins; // @synthesize rowManageAdmins=_rowManageAdmins;
@property(retain, nonatomic) WATableRow *rowGroupEditingPermission; // @synthesize rowGroupEditingPermission=_rowGroupEditingPermission;
@property(retain, nonatomic) WATableRow *rowGroupAnnouncementOnly; // @synthesize rowGroupAnnouncementOnly=_rowGroupAnnouncementOnly;
@property(readonly, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
@property(retain, nonatomic) WAGroupParticipantsController *participantsController; // @synthesize participantsController=_participantsController;
- (void).cxx_destruct;
- (void)chatStorageDidUpdateChatSessions:(id)arg1;
- (void)setupTableView;
- (void)addIcon:(id)arg1 toTableViewCell:(id)arg2;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)setupFetchedResultsController;
- (void)setUpdatedGroupAdmins:(id)arg1;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)showAdminManagementScreen;
- (void)promptToChangeGroupEditabilitySetting;
- (void)requestGroupLockedStateChange:(_Bool)arg1;
- (void)updateGroupEditabilityCell;
- (void)promptToChangeGroupAnnouncementOnlySetting;
- (void)requestGroupAnnouncementOnlyStateChange:(_Bool)arg1;
- (void)updateGroupAnnouncementOnlyCell;
- (void)showErrorMessageForAdminSettingsChangeError:(id)arg1;
- (id)groupAdminSettingTitleForAdminOnlyBool:(_Bool)arg1 shortVersion:(_Bool)arg2;
- (void)showAlertMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isAnnouncementOnly) _Bool announcementOnly;
@property(readonly, nonatomic, getter=isLocked) _Bool locked;
@property(readonly, nonatomic) _Bool canChangeSettings;
- (void)updateAdminState;
@property(readonly, nonatomic) NSString *jid;
- (void)dismissIfNeccessary;
- (void)updateCells;
- (id)initWithChatSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


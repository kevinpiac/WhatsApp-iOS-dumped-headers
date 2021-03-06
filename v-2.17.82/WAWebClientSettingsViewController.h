//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "WAQRCodeScannerViewControllerDelegate-Protocol.h"

@class NSString;

@interface WAWebClientSettingsViewController : WAStaticTableViewController <WAQRCodeScannerViewControllerDelegate>
{
    BOOL _ignoreWebClientSessionDataUpdates;
}

- (void)qrCodeScannerViewControllerDidCancel:(id)arg1;
- (void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2;
- (BOOL)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2;
- (void)scanQRCode;
- (void)signOut;
- (void)promptUserToSignOut;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)webClientDidUpdateSessionData:(id)arg1;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "WARestorable-Protocol.h"

@class NSString, WATableRow;

@interface WADataUsageViewController : WAStaticTableViewController <WARestorable>
{
    WATableRow *_imagesRow;
    WATableRow *_audioRow;
    WATableRow *_videosRow;
    WATableRow *_documentsRow;
    WATableRow *_resetRow;
    NSString *_autoDownloadImagesString;
    NSString *_autoDownloadAudioString;
    NSString *_autoDownloadDocumentsString;
    NSString *_autoDownloadVideosString;
    NSString *_autoDownloadNeverString;
    NSString *_autoDownloadWifiString;
    NSString *_autoDownloadCellularString;
}

- (void).cxx_destruct;
- (void)resetAutoDownloadSettings;
- (void)reloadAutoDownloadSettings;
- (void)showAutoDownloadSettingPickerForMediaType:(unsigned int)arg1;
- (void)viewStorageUsageAction;
- (void)viewNetworkUsageAction;
- (void)lowDataUsageSwitchAction:(id)arg1;
- (void)setupTableView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

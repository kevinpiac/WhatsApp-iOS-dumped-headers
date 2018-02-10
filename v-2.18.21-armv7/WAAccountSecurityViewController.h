//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "WALinkLabelDelegate-Protocol.h"

@class NSString, WATableSection, _WAAccountSecurityHeaderView;

@interface WAAccountSecurityViewController : WAStaticTableViewController <WALinkLabelDelegate>
{
    WATableSection *_securityIndicatorsSection;
    _WAAccountSecurityHeaderView *_headerView;
}

- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)switchSecurityIndicatorsChanged:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)wa_fontSizeDidChange;
- (void)adjustHeaderViewInsetsForInterfaceOrientation:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupTableView;
- (id)initWithStyle:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

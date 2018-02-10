//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableViewCell, WAMapTypeSegmentedControl;
@protocol WALiveLocationMenuTableViewControllerDelegate;

@interface WALiveLocationMenuTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    WAMapTypeSegmentedControl *_segmentedControl;
    UITableViewCell *_mapTypeCell;
    UITableViewCell *_shareLiveLocationCell;
    UITableViewCell *_spacer;
    NSArray *_heights;
    NSArray *_cells;
    UITableViewCell *_divider;
    BOOL _optionToShare;
    id <WALiveLocationMenuTableViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WALiveLocationMenuTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mapTypeChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)wa_cardNavigationControllerShouldHaveFlatTop;
- (void)wa_cardNavigationControllerTrailingButtonPressed:(id)arg1;
- (id)wa_cardNavigationControllerTrailingButton;
- (void)setMapType:(unsigned int)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)tableView;
- (id)initWithOptionToShare:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

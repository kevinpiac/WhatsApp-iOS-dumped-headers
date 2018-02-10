//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatMessagesViewController.h"

#import "WANavigationItemCustomBackButtonTitle-Protocol.h"

@class NSArray, NSString, WAChatCellData;

@interface WAStaticMessagesViewController : WAChatMessagesViewController <WANavigationItemCustomBackButtonTitle>
{
    WAChatCellData *_topCellData;
    float _topCellRelativeOffset;
    NSArray *_messages;
}

+ (BOOL)preservesContentAlongBottomEdgeAfterRotation;
+ (BOOL)scrollsToBottomInitially;
+ (Class)messageBubbleTableViewCellClass;
+ (BOOL)needsWallpaperImageView;
@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)willSelectTableViewCellAtIndexPath:(id)arg1;
- (void)setCellData:(id)arg1 forBubbleTableViewCell:(id)arg2 atIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (unsigned int)presentationContextForBubbleTableViewCell:(id)arg1;
- (void)didUpdateMessage:(id)arg1;
- (void)controller:(id)arg1 needsConfigureInsertedChatCellData:(id)arg2;
- (void)reloadMessagesControllerAtMessage:(id)arg1;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (void)viewDidLoad;
- (float)tableViewAdditionalTopContentInset;
- (id)initWithMessages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


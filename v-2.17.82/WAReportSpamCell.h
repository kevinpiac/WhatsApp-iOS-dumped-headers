//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView, WAChatButton;

@interface WAReportSpamCell : UITableViewCell
{
    UIView *_blurredBackgroundTrackingView;
    WAChatButton *_blockButton;
    WAChatButton *_reportButton;
    WAChatButton *_trustButton;
    BOOL _groupChat;
    CDUnknownBlockType _blockAction;
    CDUnknownBlockType _reportAction;
    CDUnknownBlockType _trustAction;
}

+ (float)preferredHeightForWidth:(float)arg1 isGroupChat:(BOOL)arg2;
+ (BOOL)selectable;
+ (id)warningTextFont;
+ (id)warningTextForGroup:(BOOL)arg1;
@property(copy, nonatomic) CDUnknownBlockType trustAction; // @synthesize trustAction=_trustAction;
@property(copy, nonatomic) CDUnknownBlockType reportAction; // @synthesize reportAction=_reportAction;
@property(copy, nonatomic) CDUnknownBlockType blockAction; // @synthesize blockAction=_blockAction;
@property(nonatomic, getter=isGroupChat) BOOL groupChat; // @synthesize groupChat=_groupChat;
- (void).cxx_destruct;
- (void)setBlockButtonTitle:(id)arg1;
- (void)reloadFonts;
- (void)trustButtonAction:(id)arg1;
- (void)reportButtonAction:(id)arg1;
- (void)blockButtonAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end


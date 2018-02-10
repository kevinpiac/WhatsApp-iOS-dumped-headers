//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WALinkLabelDelegate-Protocol.h"

@class NSString, UIView, WAChatButton, WALinkLabel;

@interface WAVCardMatchCell : UITableViewCell <WALinkLabelDelegate>
{
    UIView *_backgroundView;
    WAChatButton *_proceedButton;
    WAChatButton *_declineButton;
    unsigned long long _numberOfContacts;
    WALinkLabel *_label;
    CDUnknownBlockType _openCardAction;
    CDUnknownBlockType _proceedAction;
    CDUnknownBlockType _declineAction;
}

+ (double)preferredHeightForWidth:(double)arg1;
+ (id)buttonTitleFont;
+ (id)warningTextFont;
+ (id)warningTextForNumberOfContacts:(unsigned long long)arg1;
+ (_Bool)selectable;
@property(copy, nonatomic) CDUnknownBlockType declineAction; // @synthesize declineAction=_declineAction;
@property(copy, nonatomic) CDUnknownBlockType proceedAction; // @synthesize proceedAction=_proceedAction;
@property(copy, nonatomic) CDUnknownBlockType openCardAction; // @synthesize openCardAction=_openCardAction;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)setNumberOfContacts:(unsigned long long)arg1;
- (void)reloadFonts;
- (void)declineButtonAction;
- (void)proceedButtonAction;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


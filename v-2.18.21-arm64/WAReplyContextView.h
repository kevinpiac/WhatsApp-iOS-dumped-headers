//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, WALabel, WAMessageReplyContext;
@protocol WAReplyContextViewDelegate;

@interface WAReplyContextView : UIView
{
    UIView *_contentView;
    UIView *_senderColorStripView;
    UIImageView *_imageView;
    UIButton *_dismissButton;
    struct CGSize _dismissButtonImageSize;
    WALabel *_contentLabel;
    _Bool _showsDismissButton;
    WAMessageReplyContext *_context;
    id <WAReplyContextViewDelegate> _delegate;
    unsigned long long _viewMode;
}

+ (unsigned long long)viewModeForMessageType:(int)arg1;
@property(nonatomic) unsigned long long viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) _Bool showsDismissButton; // @synthesize showsDismissButton=_showsDismissButton;
@property(nonatomic) __weak id <WAReplyContextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMessageReplyContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)layoutSubviewsForChatOnlyContent;
- (void)layoutSubviewsForImageOnlyContent;
- (void)layoutSubviewsForNormalContent;
@property(readonly, nonatomic) struct CGRect contentLabelFrame;
@property(readonly, nonatomic) double textLayoutWidth;
@property(readonly, nonatomic) double textLayoutLeadingInset;
- (void)layoutDismissButton;
- (void)layoutSubviewsForViewMode:(unsigned long long)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) double preferredHeight;
- (void)handleDownwardSwipe:(id)arg1;
- (void)dismiss:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

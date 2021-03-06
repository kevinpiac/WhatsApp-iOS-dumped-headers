//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UIImageView, UILabel;
@protocol WACardViewShadow;

@interface WACardViewHeaderView : UIView
{
    _Bool _titleSeparator;
    UIView *_separatorView;
    UIColor *_titleColor;
    _Bool _shadowAllowed;
    _Bool _hasDragHandle;
    _Bool _hasFlatTop;
    _Bool _centerTitle;
    double _shadowHeight;
    double _headerHeight;
    UILabel *_title;
    UIView<WACardViewShadow> *_shadow;
    UIView *_whiteBox;
    UIButton *_leadingButton;
    UIButton *_trailingButton;
    UIImageView *_dragHandle;
    UIView *_accessoryView;
    struct UIEdgeInsets _padding;
}

+ (id)cardHeaderWithTitle:(id)arg1 leadingButton:(id)arg2 trailingButton:(id)arg3 dragHandle:(_Bool)arg4 centerTitle:(_Bool)arg5 flatTop:(_Bool)arg6 padding:(struct UIEdgeInsets)arg7 titleSeparator:(_Bool)arg8 titleColor:(id)arg9 accessoryView:(id)arg10 target:(id)arg11 shadowAllowed:(_Bool)arg12;
+ (id)topImageViewWithDragHandle:(_Bool)arg1;
+ (double)heightWithTitleHeight:(double)arg1 shadowHeight:(double)arg2 accessoryHeight:(double)arg3 padding:(struct UIEdgeInsets)arg4;
+ (long long)numberOfLines;
+ (double)contentOffset;
+ (id)backgroundColor;
+ (id)titleFont;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIImageView *dragHandle; // @synthesize dragHandle=_dragHandle;
@property(retain, nonatomic) UIButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(retain, nonatomic) UIButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(retain, nonatomic) UIView *whiteBox; // @synthesize whiteBox=_whiteBox;
@property(retain, nonatomic) UIView<WACardViewShadow> *shadow; // @synthesize shadow=_shadow;
@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool centerTitle; // @synthesize centerTitle=_centerTitle;
@property(readonly, nonatomic) _Bool hasFlatTop; // @synthesize hasFlatTop=_hasFlatTop;
@property(readonly, nonatomic) _Bool hasDragHandle; // @synthesize hasDragHandle=_hasDragHandle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool shadowAllowed; // @synthesize shadowAllowed=_shadowAllowed;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) double shadowHeight; // @synthesize shadowHeight=_shadowHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)titleSize;
- (struct CGSize)titleSizeForWidth:(double)arg1;
- (double)topCoordinateForButton:(id)arg1;
- (void)updateHeaderHeight;
- (void)setStyleWithDragHandle:(_Bool)arg1 centerTitle:(_Bool)arg2 flatTop:(_Bool)arg3 padding:(struct UIEdgeInsets)arg4 titleSeparator:(_Bool)arg5 titleColor:(id)arg6 shadowAllowed:(_Bool)arg7;
@property(readonly, nonatomic) UIColor *titleColor;

@end


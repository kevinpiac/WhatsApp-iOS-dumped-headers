//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSMutableAttributedString, NSString, UIButton, UIColor, UIFont;

@interface WATooltipView : UIView
{
    NSMutableAttributedString *_textStorage;
    float _leftRightPadding;
    float _topBottomPadding;
    UIButton *_buttonClose;
    BOOL _arrowDown;
    struct CGRect _toolTipRect;
    float _arrowOffset;
    BOOL _fadingIn;
    BOOL _fadingOut;
    BOOL _buttonFired;
    struct UIEdgeInsets _textInsets;
    BOOL _truncated;
    struct CGSize _currentSize;
    struct CGSize _idealSize;
    NSString *_accessibilityText;
    UIFont *_font;
    UIColor *_textColor;
    CDUnknownBlockType _dismissOnCloseButton;
    double _animationDuration;
    double _dismissAfter;
}

@property(copy, nonatomic) CDUnknownBlockType dismissOnCloseButton; // @synthesize dismissOnCloseButton=_dismissOnCloseButton;
@property(nonatomic) double dismissAfter; // @synthesize dismissAfter=_dismissAfter;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)deviceOrientationDidChange:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (void)setTooltipVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)hideWithAnimation:(BOOL)arg1;
- (void)showFromTargetRect:(struct CGRect)arg1 inView:(id)arg2 arrowDirection:(int)arg3 animated:(BOOL)arg4;
- (void)showFromTargetRect:(struct CGRect)arg1 inView:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)transformedContainerViewWithTargetView:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)closeAction:(id)arg1;
- (void)dismissTooltip;
- (void)adjustSizeToContent;
- (void)dealloc;
- (id)initWithVisibleCloseButton:(BOOL)arg1;
- (id)init;

@end


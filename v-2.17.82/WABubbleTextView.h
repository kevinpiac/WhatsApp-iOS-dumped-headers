//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol WABubbleTextViewDelegate;

@interface WABubbleTextView : UIView
{
    UILabel *_textLabel;
    UIButton *_actionButton;
    BOOL _fadingIn;
    BOOL _fadingOut;
    id <WABubbleTextViewDelegate> _delegate;
    unsigned int _action;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(nonatomic) __weak id <WABubbleTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isVisible) BOOL visible;
- (void)dismissTooltip;
- (void)actionButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

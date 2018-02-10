//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface _WAGroupCreationFooterView : UIView
{
    NSLayoutConstraint *_leftMargin;
    NSLayoutConstraint *_rightMargin;
    NSLayoutConstraint *_topMargins;
    NSLayoutConstraint *_bottomMargins;
    UILabel *_label;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setContentInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

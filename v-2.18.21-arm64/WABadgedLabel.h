//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor, UIFont, UIImageView, WALabel;

@interface WABadgedLabel : UIView
{
    WALabel *_label;
    UIImageView *_imageView;
    unsigned long long _badgeType;
    unsigned long long _style;
    UIColor *_color;
    double _preferredMaxLayoutWidth;
}

@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
- (void).cxx_destruct;
@property(nonatomic) long long textAlignment;
@property(nonatomic) long long numberOfLines;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(retain, nonatomic) UIFont *font;
@property(readonly, nonatomic) NSString *textWithoutAttachments;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (void)updateLabelTextColor;
@property(readonly, nonatomic) UIColor *effectiveColor;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) UIImageView *imageView;
- (id)viewForBaselineLayout;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


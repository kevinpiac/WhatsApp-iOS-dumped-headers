//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseReceiptTableViewCell.h"

@class UIFont, UILabel;

@interface WAReceiptTableViewCell : WABaseReceiptTableViewCell
{
    UILabel *_nameLabel;
    UILabel *_iconLabel;
    float _iconLabelHorizontalOffset;
    float _iconLabelVerticalOffset;
    UIFont *_nameLabelFont;
}

+ (void)initialize;
@property(retain, nonatomic) UIFont *nameLabelFont; // @synthesize nameLabelFont=_nameLabelFont;
- (void).cxx_destruct;
- (void)setReceiptDate:(id)arg1;
- (void)layoutSubviews;
- (void)setReceiptType:(int)arg1 isMediaMessage:(BOOL)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end


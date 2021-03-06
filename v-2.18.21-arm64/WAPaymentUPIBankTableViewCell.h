//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UIImageView, UILabel, UIView;

@interface WAPaymentUPIBankTableViewCell : UITableViewCell
{
    NSArray *_customConstraints;
    UIView *_bottomSeparator;
    UIView *_labelContainer;
    NSString *_bankIconURLString;
    NSString *_bankOrAccountID;
    UILabel *_bankNameLabel;
    UILabel *_accountNameLabel;
    UIImageView *_bankLogoImageView;
}

+ (double)preferredHeightWithSubtitle:(_Bool)arg1;
+ (struct UIEdgeInsets)preferredSeparatorInset;
@property(readonly, nonatomic) UIImageView *bankLogoImageView; // @synthesize bankLogoImageView=_bankLogoImageView;
@property(readonly, nonatomic) UILabel *accountNameLabel; // @synthesize accountNameLabel=_accountNameLabel;
@property(readonly, nonatomic) UILabel *bankNameLabel; // @synthesize bankNameLabel=_bankNameLabel;
@property(retain, nonatomic) NSString *bankOrAccountID; // @synthesize bankOrAccountID=_bankOrAccountID;
- (void).cxx_destruct;
- (void)setHighlightedPrimaryTextSubstring:(id)arg1;
- (void)updateCellWithPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2 bankIconURLString:(id)arg3;
@property(nonatomic) _Bool customBottomSeparatorVisible;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)prepareForReuse;
- (void)reloadFonts;
- (void)fontSizeDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


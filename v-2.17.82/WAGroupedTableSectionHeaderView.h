//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface WAGroupedTableSectionHeaderView : UITableViewHeaderFooterView
{
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_backgroundView;
    NSLayoutConstraint *_titleHorizontalConstraint;
    NSLayoutConstraint *_backgroundViewBottomConstraint;
    BOOL _extendsLowerEdge;
    UILabel *_titleLabel;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) BOOL extendsLowerEdge; // @synthesize extendsLowerEdge=_extendsLowerEdge;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
@property(nonatomic) BOOL bottomEdgeHidden;
@property(nonatomic) BOOL topEdgeHidden;
- (void)updateConstraints;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end


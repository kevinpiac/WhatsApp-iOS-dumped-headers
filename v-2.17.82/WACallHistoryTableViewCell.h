//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, WAAggregateCallEvent, WAProfilePictureThumbnailView;

@interface WACallHistoryTableViewCell : UITableViewCell
{
    WAAggregateCallEvent *_aggregateCallEvent;
    NSLayoutConstraint *_dateLabelRightEdgeConstraint;
    unsigned int _lastCellState;
    WAProfilePictureThumbnailView *_profilePicture;
    UILabel *_dateLabel;
    UILabel *_eventCountLabel;
    UILabel *_displayNameLabel;
    UILabel *_detailLabel;
}

+ (struct UIEdgeInsets)preferredSeparatorInset;
+ (float)preferredRowHeight;
+ (void)initialize;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(readonly, nonatomic) UILabel *eventCountLabel; // @synthesize eventCountLabel=_eventCountLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) WAProfilePictureThumbnailView *profilePicture; // @synthesize profilePicture=_profilePicture;
- (void).cxx_destruct;
- (id)infoIconImageView;
- (void)willTransitionToState:(unsigned int)arg1;
- (void)applyFonts;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void)configureWithAggregateCallEvent:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WAMediaAlbumTitleHeaderView : UIView
{
    UILabel *_headingLabel;
    UILabel *_subheadingLabel;
    BOOL _usesCompactLayout;
}

@property(nonatomic) BOOL usesCompactLayout; // @synthesize usesCompactLayout=_usesCompactLayout;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subheading;
@property(copy, nonatomic) NSString *heading;
- (void)fitToText;
- (void)setUsesCompactLayout:(BOOL)arg1 forced:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


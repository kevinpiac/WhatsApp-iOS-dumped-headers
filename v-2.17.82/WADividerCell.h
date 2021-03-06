//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAScrollTracking-Protocol.h"

@class NSString, UIView;
@protocol WABlurredBackgroundProviding;

@interface WADividerCell : UITableViewCell <WAScrollTracking>
{
    UIView *_backgroundView;
    UIView *_blurredBackgroundView;
    BOOL _usesBlurredBackground;
    id <WABlurredBackgroundProviding> _blurredBackgroundProvider;
}

+ (BOOL)selectable;
+ (float)rowHeight;
@property(nonatomic) __weak id <WABlurredBackgroundProviding> blurredBackgroundProvider; // @synthesize blurredBackgroundProvider=_blurredBackgroundProvider;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadFonts;
@property(copy, nonatomic) NSString *title;
- (void)ancestorScrollViewDidScroll:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


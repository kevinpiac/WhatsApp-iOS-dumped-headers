//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WANavigationBarTitleViewCenterAlignLandscape-Protocol.h"
#import "WANavigationBarTitleViewCenterAlignPortrait-Protocol.h"
#import "WANavigationBarTitleViewFillsAvailableSpace-Protocol.h"

@class NSArray, NSString, UILabel;

@interface WAMediaBrowserTitleView : UIView <WANavigationBarTitleViewFillsAvailableSpace, WANavigationBarTitleViewCenterAlignPortrait, WANavigationBarTitleViewCenterAlignLandscape>
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_combinedLabel;
    NSArray *_currentLayoutConstraints;
    NSArray *_portraitLayoutConstraints;
    NSArray *_landscapeLayoutConstraints;
    _Bool _shouldCenterAlignInLandscape;
    _Bool _portraitLayout;
}

@property(nonatomic) _Bool portraitLayout; // @synthesize portraitLayout=_portraitLayout;
@property(nonatomic) _Bool shouldCenterAlignInLandscape; // @synthesize shouldCenterAlignInLandscape=_shouldCenterAlignInLandscape;
- (void).cxx_destruct;
- (_Bool)shouldCenterAlignInPortrait;
- (id)accessibilityValue;
- (void)setPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2 combinedTitle:(id)arg3;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


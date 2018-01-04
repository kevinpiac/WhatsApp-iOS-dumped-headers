//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCache, NSString, UIFont, UIImageView, WALabel;

@interface WAMediaCaptionView : UIView
{
    WALabel *_textLabel;
    WALabel *_secondaryLabel;
    struct CGRect _secondaryImageRect;
    float _blendAmount;
    NSCache *_heightCache;
    UIImageView *_gradientView;
    UIView *_gradientViewContainer;
    UIView *_topBorder;
    UIView *_secondaryTopBorder;
    BOOL _isOcclusionLocked;
    UIFont *_font;
    struct CGRect _imageRect;
}

+ (id)textFormatter;
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)updateObstructedAppearanceBlendingOverlap:(float)arg1 withOverlap:(float)arg2;
- (void)updateOcclusionAppearance;
- (void)lockOcclusionAppearanceWithAnimation:(BOOL)arg1;
- (void)unlockOcclusionAppearanceWithAnimation:(BOOL)arg1;
- (float)overlapBetweenRect:(struct CGRect)arg1 andView:(id)arg2;
- (void)setText:(id)arg1 onLabel:(id)arg2;
- (void)showText:(id)arg1 imageRect:(struct CGRect)arg2 blendedWithText:(id)arg3 imageRect:(struct CGRect)arg4 blendAmount:(float)arg5;
- (void)setText:(id)arg1 imageRect:(struct CGRect)arg2;
@property(readonly, copy, nonatomic) NSString *text;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resizeToFit;
- (struct CGSize)textLayoutSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forLabel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


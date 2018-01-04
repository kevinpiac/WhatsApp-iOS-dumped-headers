//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, WACircularActivityView;

@interface WAStaticPinCalloutView : UIView
{
    UIView *_backgroundView;
    WACircularActivityView *_activityIndicator;
    UIButton *_buttonSendLocation;
    UILabel *_labelTitle;
    UILabel *_labelSubtitle;
    BOOL _stickerMode;
    CDUnknownBlockType _callback;
    NSString *_address;
}

@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)configureWithPlacemark:(id)arg1 showActivityIndicator:(BOOL)arg2 animated:(BOOL)arg3;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)enterStickerMode;
- (void)reloadFonts;
- (void)sendLocationButtonAction:(id)arg1;
- (void)updateHighlight:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

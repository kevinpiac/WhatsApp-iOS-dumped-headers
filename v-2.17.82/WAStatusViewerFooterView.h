//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIImageView, UILabel, WAGrabHandleView, WALabel;
@protocol WAStatusViewerFooterViewDelegate;

@interface WAStatusViewerFooterView : UIView
{
    UIImageView *_gradientImageView;
    UIView *_arrowView;
    WAGrabHandleView *_grabHandleView;
    UILabel *_buttonLabel;
    WALabel *_captionLabel;
    UIView *_separatorView;
    struct CGSize _prevSize;
    float _captionLabelHorizontalOffset;
    BOOL _captionExpanded;
    id <WAStatusViewerFooterViewDelegate> _delegate;
    float _captionAlpha;
    float _additionalBottomInset;
    struct CGAffineTransform _arrowTransform;
}

+ (id)textFormatter;
@property(nonatomic) struct CGAffineTransform arrowTransform; // @synthesize arrowTransform=_arrowTransform;
@property(nonatomic, getter=isCaptionExpanded) BOOL captionExpanded; // @synthesize captionExpanded=_captionExpanded;
@property(nonatomic) float additionalBottomInset; // @synthesize additionalBottomInset=_additionalBottomInset;
@property(nonatomic) float captionAlpha; // @synthesize captionAlpha=_captionAlpha;
@property(nonatomic) __weak id <WAStatusViewerFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) float arrowAlpha;
- (void)updateCaptionAlpha;
@property(readonly, nonatomic) BOOL canExpandCaption;
@property(nonatomic, getter=isGradientHidden) BOOL gradientHidden;
@property(copy, nonatomic) NSString *captionText;
@property(copy, nonatomic) NSAttributedString *buttonText;
- (void)setCaptionLabelFontSize;
- (void)resize;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


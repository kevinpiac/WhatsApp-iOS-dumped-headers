//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, UIImage, UIImageView;

@interface WACameraFlashSelector : UIControl
{
    UIImage *_flashOnImage;
    UIImage *_flashOffImage;
    UIImage *_flashAutoImage;
    UIImageView *_flashIconView;
    NSArray *_supportedFlashModes;
    int _selectedFlashModeIndex;
    int _orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)updateFlashIconView;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)switchToNextFlashMode;
@property(readonly, nonatomic) int flashMode;
- (id)accessibilityValue;
- (void)setFlashMode:(int)arg1 supportedFlashModes:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


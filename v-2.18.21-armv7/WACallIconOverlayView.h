//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WACallIconOverlayView : UIView
{
    UIImageView *_muteIconView;
    UIImageView *_videoIconView;
    BOOL _showMuteIcon;
    BOOL _showVideoIcon;
}

@property(nonatomic) BOOL showVideoIcon; // @synthesize showVideoIcon=_showVideoIcon;
@property(nonatomic) BOOL showMuteIcon; // @synthesize showMuteIcon=_showMuteIcon;
- (void).cxx_destruct;
- (void)rotateViews:(float)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


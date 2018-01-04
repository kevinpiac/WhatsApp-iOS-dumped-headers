//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WAShapeView;

@interface _WAChatSessionCellIndicatorsView : UIView
{
    UIImageView *_muteIndicator;
    UIImageView *_pinIndicator;
    UILabel *_unreadLabel;
    WAShapeView *_unreadLabelBackground;
    UILabel *_archivedLabel;
    WAShapeView *_archivedLabelBackground;
    struct CGSize _archivedLabelSize;
    BOOL _highlighted;
    BOOL _showPinIcon;
    BOOL _showMuteIcon;
    BOOL _showArchivedLabel;
    int _unreadCount;
}

+ (id)pinIndicatorImage;
+ (id)muteIndicatorImage;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) BOOL showArchivedLabel; // @synthesize showArchivedLabel=_showArchivedLabel;
@property(nonatomic) BOOL showMuteIcon; // @synthesize showMuteIcon=_showMuteIcon;
@property(nonatomic) BOOL showPinIcon; // @synthesize showPinIcon=_showPinIcon;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)reloadColorOfUnreadIndicator;
- (void)reloadFonts;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIFont, UILabel;

@interface WACallViewInfoPanelView : UIView
{
    UILabel *_callerNameLabel;
    UILabel *_subtitleLabel;
    UIFont *_largeNameFont;
    UIFont *_smallNameFont;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *callStatusAccesibilityLabel;
@property(copy, nonatomic) NSString *callStatusText;
@property(copy, nonatomic) NSString *callerName;
@property(readonly, nonatomic) float preferredHeight;
- (void)layoutSubviews;
- (id)init;

@end


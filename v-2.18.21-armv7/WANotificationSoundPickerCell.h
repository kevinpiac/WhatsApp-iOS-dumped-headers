//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class _WACustomSeparatorView;

@interface WANotificationSoundPickerCell : UITableViewCell
{
    _WACustomSeparatorView *_separator;
    BOOL _soundSelected;
    BOOL _doubleSeparator;
    float _textMargin;
}

@property(nonatomic) BOOL doubleSeparator; // @synthesize doubleSeparator=_doubleSeparator;
@property(nonatomic) BOOL soundSelected; // @synthesize soundSelected=_soundSelected;
@property(nonatomic) float textMargin; // @synthesize textMargin=_textMargin;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end


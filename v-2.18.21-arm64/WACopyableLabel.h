//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString;

@interface WACopyableLabel : UILabel
{
    NSAttributedString *_originalAttributedText;
    _Bool _copyEnabled;
    NSAttributedString *_highlightedAttributedText;
}

@property(copy, nonatomic) NSAttributedString *highlightedAttributedText; // @synthesize highlightedAttributedText=_highlightedAttributedText;
@property(nonatomic) _Bool copyEnabled; // @synthesize copyEnabled=_copyEnabled;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)menuControllerDidHideMenu:(id)arg1;
- (void)showPopupMenu;
- (void)handleLongPress:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setAttributedText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


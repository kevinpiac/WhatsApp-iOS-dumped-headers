//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WADraggableInputView.h"

@class UIButton, UITextView;

@interface WAExampleInputView : WADraggableInputView
{
    UITextView *_textView;
    UIButton *_redButton;
    UIButton *_greenButton;
    long long _lineCount;
}

- (void).cxx_destruct;
- (id)inputViewResponders;
- (void)removeLine:(id)arg1;
- (void)addLine:(id)arg1;
- (double)preferredHeightForLayoutWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


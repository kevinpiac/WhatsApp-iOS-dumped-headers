//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

#import "WAMessageWordsHighlighting-Protocol.h"

@class WAMessageAttributedTextSlice, WAMessageAttributedTextSliceLink;

@interface WAMessageAttributedTextSliceView : WAMessageContainerSliceView <WAMessageWordsHighlighting>
{
    WAMessageAttributedTextSliceLink *_trackedLink;
    WAMessageAttributedTextSliceLink *_highlightedLink;
}

+ (BOOL)supportsPreviewing;
+ (BOOL)isUserInteractionEnabled;
- (void).cxx_destruct;
- (id)wa_accessibilityElements;
- (void)setHighlightedWords:(id)arg1;
- (id)dataForPreviewingContext:(id)arg1 location:(struct CGPoint)arg2;
- (void)handleLongPressAtPoint:(struct CGPoint)arg1;
- (void)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (void)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)touchesDidEnd;
- (void)touchesWillBegin:(id)arg1;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (void)reloadHighlightedState;
- (BOOL)shouldHighlightContainerViewOnTouchesDidBegin;
- (void)drawRect:(struct CGRect)arg1;
- (void)fillRects:(id)arg1;
- (void)reloadSliceAfterChange:(unsigned int)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageAttributedTextSlice *slice; // @dynamic slice;

@end


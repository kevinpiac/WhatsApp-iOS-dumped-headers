//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface WAMessageAudioSlice : WAMessageContainerSlice
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct CGRect _durationTextRect;
    BOOL _onLeftEdge;
    float _durationTextBaselineAdjustment;
    BOOL _needsRedrawDurationView;
    int _currentDuration;
    float _bottomContentMargin;
    struct CGRect _durationStringFrame;
}

+ (Class)viewClass;
@property(readonly, nonatomic) float bottomContentMargin; // @synthesize bottomContentMargin=_bottomContentMargin;
@property(readonly, nonatomic) BOOL needsRedrawDurationView; // @synthesize needsRedrawDurationView=_needsRedrawDurationView;
@property(nonatomic) int currentDuration; // @synthesize currentDuration=_currentDuration;
@property(readonly, nonatomic) struct CGRect durationStringFrame; // @synthesize durationStringFrame=_durationStringFrame;
- (void).cxx_destruct;
- (void)drawDurationStringInCurrentContext;
- (void)recalculateDurationStringFrame;
- (void)internalFitToWidth:(float)arg1;
- (BOOL)showsMedia;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_c67131ad)arg2;

@end


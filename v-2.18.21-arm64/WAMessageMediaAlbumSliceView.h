//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class NSMutableArray, UIView, WAMessageMediaAlbumSlice;

@interface WAMessageMediaAlbumSliceView : WAMessageContainerSliceView
{
    NSMutableArray *_subSliceViews;
    UIView *_containerView;
}

+ (_Bool)pairsWithQuickForwardButton;
+ (_Bool)isUserInteractionEnabled;
+ (_Bool)needsProgressView;
- (void).cxx_destruct;
- (void)prepareForPreviewWithContext:(id)arg1;
- (id)dataForPreviewingContext:(id)arg1 location:(struct CGPoint)arg2;
- (id)imageViewDisplayingMessage:(id)arg1;
- (id)messageAtPoint:(struct CGPoint)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)configureSlice:(id)arg1 withCellData:(id)arg2;
- (void)relayoutSubSlices;
- (void)reloadHighlightedState;
- (void)configureProgressView:(id)arg1;
- (long long)bytesToDownload;
- (void)layoutProgressView:(id)arg1;
- (void)resetProgressViewState:(id)arg1;
- (void)adjustProgressView:(id)arg1 forHiddenState:(_Bool)arg2;
- (id)newStandardProgressView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageMediaAlbumSlice *slice; // @dynamic slice;

@end


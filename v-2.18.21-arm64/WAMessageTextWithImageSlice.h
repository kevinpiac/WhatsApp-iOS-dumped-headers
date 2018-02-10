//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface WAMessageTextWithImageSlice : WAMessageContainerSlice
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct CGRect _textRect;
    long long _textAlignment;
    _Bool _centersTextVertically;
    struct CGRect _imageRect;
    _Bool _hasThumbnail;
    _Bool _shouldExtendThumbnailToBottomEdge;
    double _leadingEdgeIndent;
}

+ (_Bool)imageAlongTrailingEdge;
+ (_Bool)alwaysExtendsThumbnailToBottomEdge;
+ (double)leadingEdgeIndentWithMetrics:(CDStruct_8ee84fd7)arg1;
+ (long long)maximumNumberOfLines;
+ (long long)minimumNumberOfLines;
@property(readonly, nonatomic) double leadingEdgeIndent; // @synthesize leadingEdgeIndent=_leadingEdgeIndent;
@property(readonly, nonatomic) _Bool shouldExtendThumbnailToBottomEdge; // @synthesize shouldExtendThumbnailToBottomEdge=_shouldExtendThumbnailToBottomEdge;
@property(readonly, nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
- (void).cxx_destruct;
- (id)headerRenderer;
- (id)secondaryAttributedTextWithMessage:(id)arg1;
- (id)attributedTextWithMessage:(id)arg1 textAlignment:(out long long *)arg2;
- (_Bool)hasThumbnailForMessage:(id)arg1;
- (void)prepareWithMessage:(id)arg1;
- (double)textVerticalOffset;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(double)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;

@end

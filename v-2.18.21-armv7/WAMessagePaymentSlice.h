//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage, WAMessagePaymentStatusSliceRenderer;

@interface WAMessagePaymentSlice : WAMessageContainerSlice
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct CGRect _textRect;
    WAMessagePaymentStatusSliceRenderer *_statusRenderer;
    BOOL _fromMe;
}

+ (Class)viewClass;
@property(readonly, nonatomic, getter=isFromMe) BOOL fromMe; // @synthesize fromMe=_fromMe;
- (void).cxx_destruct;
- (id)attributedTextWithMessage:(id)arg1;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(float)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_c67131ad)arg2;

@end


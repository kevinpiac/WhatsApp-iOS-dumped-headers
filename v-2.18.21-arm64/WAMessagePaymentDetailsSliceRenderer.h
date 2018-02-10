//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface WAMessagePaymentDetailsSliceRenderer : NSObject
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct CGRect _textRect;
    double _preferredWidth;
    struct CGSize _fittedSize;
    CDStruct_8ee84fd7 _metrics;
}

@property(readonly, nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property(readonly, nonatomic) CDStruct_8ee84fd7 metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) struct CGSize fittedSize; // @synthesize fittedSize=_fittedSize;
- (void).cxx_destruct;
- (_Bool)isRTL;
- (void)drawInCurrentContextAtPoint:(struct CGPoint)arg1 withWidth:(double)arg2;
- (void)fitToWidth:(double)arg1;
- (double)heightNeeded;
- (id)initWithDetails:(id)arg1 receiverName:(id)arg2 receiverNameColor:(id)arg3 useItalicFont:(_Bool)arg4 metrics:(CDStruct_8ee84fd7)arg5;

@end


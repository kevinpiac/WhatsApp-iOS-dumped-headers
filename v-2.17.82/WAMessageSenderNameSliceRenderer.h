//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface WAMessageSenderNameSliceRenderer : NSObject
{
    NSTextStorage *_senderNameTextStorage;
    NSTextStorage *_pushNameTextStorage;
    NSTextContainer *_senderNameTextContainer;
    NSTextContainer *_pushNameTextContainer;
    NSLayoutManager *_senderNameLayoutManager;
    NSLayoutManager *_pushNameLayoutManager;
    struct CGRect _senderNameTextRect;
    struct CGRect _pushNameTextRect;
    BOOL _hasVerifiedBadge;
    float _heightNeeded;
    float _preferredWidth;
    struct CGSize _fittedSize;
    CDStruct_c67131ad _metrics;
}

@property(readonly, nonatomic) float preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property(readonly, nonatomic) CDStruct_c67131ad metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) float heightNeeded; // @synthesize heightNeeded=_heightNeeded;
@property(readonly, nonatomic) struct CGSize fittedSize; // @synthesize fittedSize=_fittedSize;
- (void).cxx_destruct;
- (BOOL)isRTL;
- (void)drawInCurrentContextAtPoint:(struct CGPoint)arg1 withWidth:(float)arg2;
- (void)internalFitToWidth:(float)arg1;
- (id)initWithSenderName:(id)arg1 senderNameColor:(id)arg2 hasVerifiedBadge:(BOOL)arg3 pushName:(id)arg4 metrics:(CDStruct_c67131ad)arg5 status:(BOOL)arg6;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

#import "WAMessagePaymentDetailsSliceDelegate-Protocol.h"

@class NSString, WAMessagePaymentDetailsSlice;

@interface WAMessagePaymentDetailsSliceView : WAMessageContainerSliceView <WAMessagePaymentDetailsSliceDelegate>
{
}

- (void)paymentDetailsSliceExpirationTextShouldChange:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WAMessagePaymentDetailsSlice *slice; // @dynamic slice;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSString;
@protocol WAMessagePaymentAcceptButtonSliceDelegate;

@interface WAMessagePaymentAcceptButtonSlice : WAMessageContainerSlice
{
    NSString *_messageUniqueID;
    BOOL _divider;
    id <WAMessagePaymentAcceptButtonSliceDelegate> _delegate;
}

+ (Class)viewClass;
@property(readonly, copy, nonatomic) NSString *messageUniqueID; // @synthesize messageUniqueID=_messageUniqueID;
@property(nonatomic) BOOL divider; // @synthesize divider=_divider;
@property(nonatomic) __weak id <WAMessagePaymentAcceptButtonSliceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)internalFitToWidth:(float)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_c67131ad)arg2;

@end


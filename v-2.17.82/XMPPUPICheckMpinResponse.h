//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XMPPUPIHandleResponse;

@interface XMPPUPICheckMpinResponse : NSObject
{
    NSString *_balance;
    NSString *_handle;
    NSString *_mismatchType;
    NSString *_valid;
    XMPPUPIHandleResponse *_receiverHandle;
}

+ (id)responseFromStanza:(id)arg1;
@property(retain, nonatomic) XMPPUPIHandleResponse *receiverHandle; // @synthesize receiverHandle=_receiverHandle;
@property(copy, nonatomic) NSString *valid; // @synthesize valid=_valid;
@property(copy, nonatomic) NSString *mismatchType; // @synthesize mismatchType=_mismatchType;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *balance; // @synthesize balance=_balance;
- (void).cxx_destruct;
- (id)description;

@end


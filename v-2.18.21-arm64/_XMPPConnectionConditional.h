//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _XMPPConnectionConditional : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _conditional;
    NSString *_lastResult;
}

@property(readonly, copy, nonatomic) NSString *lastResult; // @synthesize lastResult=_lastResult;
- (void).cxx_destruct;
- (void)performCheckWithDispatchGroup:(id)arg1;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;

@end


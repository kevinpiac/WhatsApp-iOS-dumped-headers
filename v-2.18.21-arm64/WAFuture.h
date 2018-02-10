//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WAFuture : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    // Error parsing type: Ai, name: _state
    id _result;
}

- (void).cxx_destruct;
- (void)runOnQueue:(id)arg1 whenResolved:(CDUnknownBlockType)arg2;
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isDone) _Bool done;
- (_Bool)cancel;
- (id)resolve;
- (id)initWithExecutionQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithQOSClass:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;

@end


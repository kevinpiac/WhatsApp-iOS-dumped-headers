//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WAMapSnapshotterRequest : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
}

@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


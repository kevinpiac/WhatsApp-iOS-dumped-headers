//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _XMPPStateChangedCallback : NSObject
{
    unsigned long long _hashValue;
    CDUnknownBlockType _block;
    unsigned long long _connectionStates;
}

@property(readonly, nonatomic) unsigned long long connectionStates; // @synthesize connectionStates=_connectionStates;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithConnectionStates:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end


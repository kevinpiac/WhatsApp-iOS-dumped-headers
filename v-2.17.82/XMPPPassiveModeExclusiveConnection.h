//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMPPPassiveModeExclusiveConnection : NSObject
{
    BOOL _connected;
    unsigned int _priority;
}

@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) unsigned int priority; // @synthesize priority=_priority;
- (id)initWithPriority:(unsigned int)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface WADeletionBatch : NSObject
{
    NSMutableArray *_mutableMessages;
    NSArray *_messages;
}

- (void).cxx_destruct;
- (void)evaluate:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)evaluate:(id)arg1;
- (void)removeInvalidMessages;
@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void)addMessage:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end


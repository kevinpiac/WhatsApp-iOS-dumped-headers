//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATask.h"

@class NSString;

@interface _WAOrderedMessageTask : WATask
{
    NSString *_lastStanzaID;
    unsigned int _count;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (id)predicateForBasePredicate:(id)arg1;
- (void)runTaskFromQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDescription:(id)arg1 block:(CDUnknownBlockType)arg2;

@end


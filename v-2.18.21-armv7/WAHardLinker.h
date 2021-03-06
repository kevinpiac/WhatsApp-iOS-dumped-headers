//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WATarFileProcessor-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAHardLinker : NSObject <WATarFileProcessor>
{
    NSMutableArray *_potentialLinks;
    NSMutableDictionary *_hashLookup;
    NSMutableDictionary *_relativePathLookup;
    struct CC_SHA256state_st _hashContext;
    struct CC_SHA256state_st *_hashContextPtr;
    unsigned long long _currentOffset;
    unsigned long long _firstChange;
    unsigned long long _totalSaved;
}

- (void).cxx_destruct;
- (void)print;
- (void)addPotentialLink:(id)arg1 to:(id)arg2;
- (void)tarFile:(id)arg1 didFinishHeader:(id)arg2 withResult:(unsigned int)arg3;
- (void)tarFile:(id)arg1 didReadBytes:(const void *)arg2 ofLength:(unsigned long)arg3;
- (void)tarFile:(id)arg1 didStartHeader:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


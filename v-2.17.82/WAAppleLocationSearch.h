//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WALocationSearchEngine-Protocol.h"

@class MKLocalSearch, NSString;

@interface WAAppleLocationSearch : NSObject <WALocationSearchEngine>
{
    MKLocalSearch *_appleMapsSearch;
}

- (void).cxx_destruct;
- (id)placeForMapItem:(id)arg1 location:(id)arg2;
- (void)fetchNextPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)searchWithQuery:(id)arg1 location:(id)arg2 radius:(double)arg3 region:(CDStruct_26e8d939)arg4 fieldStats:(id)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


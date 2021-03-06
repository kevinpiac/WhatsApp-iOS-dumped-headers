//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAnnotation-Protocol.h"

@class NSMutableArray, NSString;

@interface WALocationDataGroup : NSObject <MKAnnotation>
{
    NSMutableArray *_locations;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)locations;
- (id)baseLocation;
- (id)locationAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLocations;
- (id)initWithLocations:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


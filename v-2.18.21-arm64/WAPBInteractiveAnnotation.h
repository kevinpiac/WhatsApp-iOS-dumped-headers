//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, WAPBLocation;

@interface WAPBInteractiveAnnotation : GPBMessage
{
}

+ (id)descriptor;
- (void)didSelectAnnotationFromViewController:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(retain, nonatomic) WAPBLocation *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *polygonVerticesArray; // @dynamic polygonVerticesArray;
@property(readonly, nonatomic) unsigned long long polygonVerticesArray_Count; // @dynamic polygonVerticesArray_Count;

@end


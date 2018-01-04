//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class NSArray, NSMutableArray;

@interface WAContactMultiValueProperty : NSObject <NSCopying, NSFastEnumeration>
{
    NSMutableArray *_deletedProperties;
    int _type;
    NSArray *_properties;
}

+ (id)propertyWithType:(int)arg1 properties:(id)arg2;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqualToProperty:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)enumeratePropertiesAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePropertiesWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (id)propertiesPassingTest:(CDUnknownBlockType)arg1;
- (unsigned int)indexOfPropertyIdenticalTo:(id)arg1;
- (void)removePropertyAtIndex:(unsigned int)arg1;
- (void)addPropertiesFromArray:(id)arg1;
- (void)addProperty:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)propertyAtIndex:(unsigned int)arg1;
- (id)lastProperty;
- (id)firstProperty;
@property(readonly, nonatomic) unsigned int count;
- (void)mergePropertiesFrom:(id)arg1;
@property(readonly, nonatomic) NSArray *deletedProperties;
- (id)initWithType:(int)arg1 properties:(id)arg2;

@end


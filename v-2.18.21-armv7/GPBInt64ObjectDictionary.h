//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBInt64ObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

+ (id)dictionaryWithCapacity:(unsigned int)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithObjects:(const id *)arg1 forKeys:(const long long *)arg2 count:(unsigned int)arg3;
+ (id)dictionaryWithObject:(id)arg1 forKey:(long long)arg2;
+ (id)dictionary;
- (void)removeAll;
- (void)removeObjectForKey:(long long)arg1;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)objectForKey:(long long)arg1;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_319e3a73 *)arg1 forGPBGenericValueKey:(CDUnion_319e3a73 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long)computeSerializedSizeAsField:(id)arg1;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)isInitialized;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int count;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const long long *)arg2 count:(unsigned int)arg3;
- (id)init;

@end


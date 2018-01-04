//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt64UInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

+ (id)dictionaryWithCapacity:(unsigned int)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithUInt32s:(const unsigned int *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned int)arg3;
+ (id)dictionaryWithUInt32:(unsigned int)arg1 forKey:(unsigned long long)arg2;
+ (id)dictionary;
- (void)removeAll;
- (void)removeUInt32ForKey:(unsigned long long)arg1;
- (void)setUInt32:(unsigned int)arg1 forKey:(unsigned long long)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (BOOL)getUInt32:(unsigned int *)arg1 forKey:(unsigned long long)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_319e3a73 *)arg1 forGPBGenericValueKey:(CDUnion_319e3a73 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndUInt32sUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int count;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUInt32s:(const unsigned int *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned int)arg3;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage;

@interface GPBBoolEnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    CDUnknownFunctionPointerType _validationFunc;
    int _values[2];
    char _valueSet[2];
}

+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned int)arg2;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const char *)arg3 count:(unsigned int)arg4;
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValue:(int)arg2 forKey:(BOOL)arg3;
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
+ (id)dictionary;
@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)removeAll;
- (void)removeEnumForKey:(BOOL)arg1;
- (void)setRawValue:(int)arg1 forKey:(BOOL)arg2;
- (void)setEnum:(int)arg1 forKey:(BOOL)arg2;
- (void)addRawEntriesFromDictionary:(id)arg1;
- (void)setGPBGenericValue:(CDUnion_319e3a73 *)arg1 forGPBGenericValueKey:(CDUnion_319e3a73 *)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long)computeSerializedSizeAsField:(id)arg1;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_319e3a73 *)arg2 keyDataType:(unsigned char)arg3;
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)getRawValue:(int *)arg1 forKey:(BOOL)arg2;
- (BOOL)getEnum:(int *)arg1 forKey:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int count;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned int)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const char *)arg3 count:(unsigned int)arg4;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)init;

@end


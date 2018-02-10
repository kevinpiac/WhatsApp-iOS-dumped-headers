//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDateComponents, NSDictionary, NSString;

@interface WAContactProperty : NSObject <NSCopying>
{
    _Bool _readonly;
    _Bool _newProperty;
    _Bool _suppressAutomaticPropertyUpdates;
    int _abPersonID;
    NSString *_identifier;
    NSDictionary *_userInfo;
    long long _type;
    NSString *_label;
    NSString *_systemLabel;
    NSString *_stringValue;
    NSDateComponents *_dateValue;
    NSDictionary *_dictionaryValue;
}

+ (id)cnContactKeyForPropertyType:(long long)arg1;
+ (id)socialProfileFromDictionary:(id)arg1;
+ (id)dictionaryFromSocialProfile:(id)arg1;
+ (id)hiddenSocialProfilePropertyNames;
+ (id)instantMessageAddressFromDictionary:(id)arg1;
+ (id)dictionaryFromInstantMessageAddress:(id)arg1;
+ (id)postalAddressFromDictionary:(id)arg1;
+ (id)dictionaryFromPostalAddress:(id)arg1;
+ (int)abPropertyIDFromPropertyType:(long long)arg1;
+ (id)abPersonAddressDictionaryFromDictionary:(id)arg1;
+ (id)dictionaryFromABPersonAddressDictionary:(id)arg1;
+ (id)localizedNameForPropertyType:(long long)arg1;
+ (id)propertyWithType:(long long)arg1;
@property(nonatomic) _Bool suppressAutomaticPropertyUpdates; // @synthesize suppressAutomaticPropertyUpdates=_suppressAutomaticPropertyUpdates;
@property(copy, nonatomic) NSDictionary *dictionaryValue; // @synthesize dictionaryValue=_dictionaryValue;
@property(copy, nonatomic) NSDateComponents *dateValue; // @synthesize dateValue=_dateValue;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy, nonatomic) NSString *systemLabel; // @synthesize systemLabel=_systemLabel;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, getter=isNewProperty) _Bool newProperty; // @synthesize newProperty=_newProperty;
@property(nonatomic, getter=isReadonly) _Bool readonly; // @synthesize readonly=_readonly;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int abPersonID; // @synthesize abPersonID=_abPersonID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToProperty:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)valueForCNLabeledValue;
- (void)copyDataFromCNLabeledValue:(id)arg1;
- (void)addValueAndLabelToABMutableMultiValue:(void *)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)setDictionaryValue:(id)arg1 forKey:(id)arg2;
- (id)initWithType:(long long)arg1;

@end

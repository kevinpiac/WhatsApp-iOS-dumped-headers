//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface WAPBMessage_HighlyStructuredMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *elementName; // @dynamic elementName;
@property(copy, nonatomic) NSString *fallbackLc; // @dynamic fallbackLc;
@property(copy, nonatomic) NSString *fallbackLg; // @dynamic fallbackLg;
@property(nonatomic) _Bool hasElementName; // @dynamic hasElementName;
@property(nonatomic) _Bool hasFallbackLc; // @dynamic hasFallbackLc;
@property(nonatomic) _Bool hasFallbackLg; // @dynamic hasFallbackLg;
@property(nonatomic) _Bool hasNamespace_p; // @dynamic hasNamespace_p;
@property(retain, nonatomic) NSMutableArray *localizableParamsArray; // @dynamic localizableParamsArray;
@property(readonly, nonatomic) unsigned long long localizableParamsArray_Count; // @dynamic localizableParamsArray_Count;
@property(copy, nonatomic) NSString *namespace_p; // @dynamic namespace_p;
@property(retain, nonatomic) NSMutableArray *paramsArray; // @dynamic paramsArray;
@property(readonly, nonatomic) unsigned long long paramsArray_Count; // @dynamic paramsArray_Count;

@end


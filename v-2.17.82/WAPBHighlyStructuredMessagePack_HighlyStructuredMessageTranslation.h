//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, WAPBHighlyStructuredMessagePack_HighlyStructuredMessageTranslation_HighlyStructuredMessageElement;

@interface WAPBHighlyStructuredMessagePack_HighlyStructuredMessageTranslation : GPBMessage
{
}

+ (id)descriptor;
@property(copy, nonatomic) NSString *translatedTextWithSanitization;

// Remaining properties
@property(retain, nonatomic) WAPBHighlyStructuredMessagePack_HighlyStructuredMessageTranslation_HighlyStructuredMessageElement *element; // @dynamic element;
@property(nonatomic) BOOL hasElement; // @dynamic hasElement;
@property(nonatomic) BOOL hasPluralParamNo; // @dynamic hasPluralParamNo;
@property(nonatomic) BOOL hasTranslatedText; // @dynamic hasTranslatedText;
@property(retain, nonatomic) NSMutableArray *pluralExceptionsArray; // @dynamic pluralExceptionsArray;
@property(readonly, nonatomic) unsigned int pluralExceptionsArray_Count; // @dynamic pluralExceptionsArray_Count;
@property(nonatomic) unsigned int pluralParamNo; // @dynamic pluralParamNo;
@property(copy, nonatomic) NSString *translatedText; // @dynamic translatedText;

@end


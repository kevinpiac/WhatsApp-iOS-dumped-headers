//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, WAPBContextInfo;

@interface WAPBMessage_ContactsArrayMessage : GPBMessage
{
}

+ (id)descriptor;
@property(copy, nonatomic) NSString *displayNameWithSanitization;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contactsArray; // @dynamic contactsArray;
@property(readonly, nonatomic) unsigned int contactsArray_Count; // @dynamic contactsArray_Count;
@property(retain, nonatomic) WAPBContextInfo *contextInfo; // @dynamic contextInfo;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) BOOL hasContextInfo; // @dynamic hasContextInfo;
@property(nonatomic) BOOL hasDisplayName; // @dynamic hasDisplayName;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, WAPBHighlyStructuredMessagePack;

@interface WAHSMPack : NSManagedObject
{
}

@property(readonly, nonatomic) NSString *shortDescription;

// Remaining properties
@property(retain, nonatomic) WAPBHighlyStructuredMessagePack *data; // @dynamic data;
@property(retain, nonatomic) NSDate *downloadDate; // @dynamic downloadDate;
@property(copy, nonatomic) NSString *ns; // @dynamic ns;
@property(copy, nonatomic) NSString *packHash; // @dynamic packHash;
@property(copy, nonatomic) NSString *packLanguage; // @dynamic packLanguage;
@property(copy, nonatomic) NSString *packLocale; // @dynamic packLocale;
@property(copy, nonatomic) NSString *userLanguage; // @dynamic userLanguage;
@property(copy, nonatomic) NSString *userLocale; // @dynamic userLocale;

@end


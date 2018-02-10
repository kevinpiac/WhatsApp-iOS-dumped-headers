//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSSet, NSString, WAContactSection;

@interface WA_Contact : NSManagedObject
{
}

+ (id)allLinkedNonWhatsAppPhonesWithParent:(id)arg1 includeChildren:(_Bool)arg2;
+ (id)allLinkedWhatsAppPhonesWithParent:(id)arg1 includeChildren:(_Bool)arg2;
- (id)allLinkedAddressBookIDs;
- (id)allLinkedNonWhatsAppPhones;
- (id)allLinkedWhatsAppPhones;
- (void)setFullName:(id)arg1 allowExternalSideEffects:(_Bool)arg2;

// Remaining properties
@property(nonatomic) int abUserID; // @dynamic abUserID;
@property(copy, nonatomic) NSSet *children; // @dynamic children;
@property(copy, nonatomic) NSString *firstName; // @dynamic firstName;
@property(copy, nonatomic) NSString *fullName; // @dynamic fullName;
@property(copy, nonatomic) NSString *highlightedName; // @dynamic highlightedName;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *indexName; // @dynamic indexName;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) WA_Contact *parent; // @dynamic parent;
@property(copy, nonatomic) NSSet *phones; // @dynamic phones;
@property(retain, nonatomic) WAContactSection *section; // @dynamic section;
@property(nonatomic) int sort; // @dynamic sort;
@property(copy, nonatomic) NSArray *tokens; // @dynamic tokens;

@end


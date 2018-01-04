//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface _WAAddressBookContactProxy : NSObject
{
    id _identifier;
    NSString *_fullName;
    NSString *_givenName;
    NSString *_highlightedName;
    NSString *_sectionTitle;
    int _sectionSort;
    NSString *_searchTokenList;
    NSArray *_phones;
    NSDate *_modificationDate;
}

@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSString *searchTokenList; // @synthesize searchTokenList=_searchTokenList;
@property(nonatomic) int sectionSort; // @synthesize sectionSort=_sectionSort;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(copy, nonatomic) NSString *highlightedName; // @synthesize highlightedName=_highlightedName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) id identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithABRecord:(void *)arg1;
- (id)initWithCNContact:(id)arg1;

@end

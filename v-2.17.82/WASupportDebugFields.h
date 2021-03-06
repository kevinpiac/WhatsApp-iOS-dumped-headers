//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WAServerStatus;

@interface WASupportDebugFields : NSObject
{
    NSMutableArray *_fieldNames;
    NSMutableArray *_fieldValues;
    BOOL _registration;
    BOOL _connectionFAQDisplayed;
    WAServerStatus *_serverStatus;
    NSString *_context;
    NSString *_countryCode;
    int _numberOfFAQSearchResultsReturned;
    int _numberOfFAQSearchResultsOpened;
    double _connectionFAQTimeRead;
}

@property(nonatomic) double connectionFAQTimeRead; // @synthesize connectionFAQTimeRead=_connectionFAQTimeRead;
@property(nonatomic) BOOL connectionFAQDisplayed; // @synthesize connectionFAQDisplayed=_connectionFAQDisplayed;
@property(nonatomic) int numberOfFAQSearchResultsOpened; // @synthesize numberOfFAQSearchResultsOpened=_numberOfFAQSearchResultsOpened;
@property(nonatomic) int numberOfFAQSearchResultsReturned; // @synthesize numberOfFAQSearchResultsReturned=_numberOfFAQSearchResultsReturned;
@property(nonatomic) BOOL registration; // @synthesize registration=_registration;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) WAServerStatus *serverStatus; // @synthesize serverStatus=_serverStatus;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)textRepresentation;
- (void)populateAllFields;
- (void)addField:(id)arg1 withValue:(id)arg2;
- (id)init;

@end


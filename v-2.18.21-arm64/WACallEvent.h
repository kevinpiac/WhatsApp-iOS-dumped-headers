//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString;
@protocol WAServerDate;

@interface WACallEvent : NSObject <NSSecureCoding>
{
    _Bool _incoming;
    int _outcome;
    int _medium;
    int _configuration;
    int _year;
    int _month;
    int _day;
    NSDate<WAServerDate> *_date;
    unsigned long long _txBytes;
    unsigned long long _rxBytes;
    double _duration;
    NSString *_peerJID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *peerJID; // @synthesize peerJID=_peerJID;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int day; // @synthesize day=_day;
@property(readonly, nonatomic) int month; // @synthesize month=_month;
@property(readonly, nonatomic) int year; // @synthesize year=_year;
@property(nonatomic) unsigned long long rxBytes; // @synthesize rxBytes=_rxBytes;
@property(nonatomic) unsigned long long txBytes; // @synthesize txBytes=_txBytes;
@property(copy, nonatomic) NSDate<WAServerDate> *date; // @synthesize date=_date;
@property(nonatomic) int configuration; // @synthesize configuration=_configuration;
@property(nonatomic) int medium; // @synthesize medium=_medium;
@property(nonatomic) int outcome; // @synthesize outcome=_outcome;
@property(nonatomic) _Bool incoming; // @synthesize incoming=_incoming;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *callDescriptionForVoiceOver;
@property(readonly, copy, nonatomic) NSString *callDescription;
@property(readonly, copy, nonatomic) NSString *callDataUsageForDisplay;
@property(readonly, copy, nonatomic) NSString *callDurationForDisplay;
@property(readonly, copy, nonatomic) NSString *callTimeForDisplay;
@property(readonly, copy, nonatomic) NSString *callDateForDisplay;
@property(readonly, copy, nonatomic) NSString *callDateForHeader;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


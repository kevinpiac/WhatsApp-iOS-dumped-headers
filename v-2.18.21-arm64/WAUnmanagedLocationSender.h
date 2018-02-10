//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WALocationSender-Protocol.h"

@class NSData, NSDate, NSNumber, NSString;
@protocol WAServerDate;

@interface WAUnmanagedLocationSender : NSObject <WALocationSender>
{
    NSDate<WAServerDate> *endDate;
    NSString *participant;
    NSString *chat;
    NSDate<WAServerDate> *timestamp;
    NSData *locationMessage;
    NSString *messageUniqueKey;
    NSNumber *sequenceNumber;
}

@property(copy, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber;
@property(copy, nonatomic) NSString *messageUniqueKey; // @synthesize messageUniqueKey;
@property(copy, nonatomic) NSData *locationMessage; // @synthesize locationMessage;
@property(copy, nonatomic) NSDate<WAServerDate> *timestamp; // @synthesize timestamp;
@property(copy, nonatomic) NSString *chat; // @synthesize chat;
@property(copy, nonatomic) NSString *participant; // @synthesize participant;
@property(copy, nonatomic) NSDate<WAServerDate> *endDate; // @synthesize endDate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


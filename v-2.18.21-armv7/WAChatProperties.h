//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatStorageManagedObject.h"

@class NSDate, NSString, WAChatSession;

@interface WAChatProperties : WAChatStorageManagedObject
{
}

@property(retain, nonatomic) NSDate *muteDate; // @dynamic muteDate;

// Remaining properties
@property(nonatomic) BOOL alerts; // @dynamic alerts;
@property(retain, nonatomic) WAChatSession *chatSession; // @dynamic chatSession;
@property(nonatomic) BOOL enabled; // @dynamic enabled;
@property(copy, nonatomic) NSString *soundName; // @dynamic soundName;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (TimeShift)
+ (id)wa_lastServerTimeReceived;
+ (double)wa_serverTimeShift;
+ (id)wa_serverDate;
+ (id)wa_deviceDate;
+ (void)wa_setServerTimeShift:(double)arg1 serverTime:(id)arg2;
- (double)wa_timeIntervalSinceServerNow;
@end


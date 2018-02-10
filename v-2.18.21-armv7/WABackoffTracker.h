//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface WABackoffTracker : NSObject
{
    double _n0;
    double _n1;
    double _maxBackoff;
    BOOL _useFib;
    NSDate *_backoffUntilDate;
    NSMutableDictionary *_userInfo;
}

+ (id)fibonacciBackoffTracker:(double)arg1;
+ (id)exponentialBackoffTracker:(double)arg1;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSDate *backoffUntilDate; // @synthesize backoffUntilDate=_backoffUntilDate;
- (void).cxx_destruct;
- (void)reset;
- (double)backoff;
- (id)initUsingFib:(BOOL)arg1 maxBackoff:(double)arg2;

@end


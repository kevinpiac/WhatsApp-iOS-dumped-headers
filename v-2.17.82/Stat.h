//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface Stat : NSObject
{
    BOOL _callsDurationSynced;
    int _messagesSent;
    int _messagesReceived;
    int _callsSent;
    int _callsReceived;
    NSDate *_lastReset;
    long long _chatMediaBytesSent;
    long long _chatMediaBytesReceived;
    long long _statusMediaBytesSent;
    long long _statusMediaBytesReceived;
    long long _systemBytesSent;
    long long _systemBytesReceived;
    long long _callBytesSent;
    long long _callBytesReceived;
    double _callsDuration;
}

+ (void)optionallyLoadDouble:(double *)arg1 fromObject:(id)arg2;
+ (void)optionallyLoadBool:(char *)arg1 fromObject:(id)arg2;
+ (void)optionallyLoadInteger:(int *)arg1 fromObject:(id)arg2;
+ (void)optionallyLoadLongLong:(long long *)arg1 fromObject:(id)arg2;
+ (id)keysForBackup;
+ (id)sharedManager;
+ (void)didLoadUserDefaults:(id)arg1;
+ (void)willSaveUserDefaults:(id)arg1;
+ (void)registerForBackup;
@property(nonatomic) BOOL callsDurationSynced; // @synthesize callsDurationSynced=_callsDurationSynced;
@property(nonatomic) double callsDuration; // @synthesize callsDuration=_callsDuration;
@property(readonly, nonatomic) NSDate *lastReset; // @synthesize lastReset=_lastReset;
@property(nonatomic) long long callBytesReceived; // @synthesize callBytesReceived=_callBytesReceived;
@property(nonatomic) long long callBytesSent; // @synthesize callBytesSent=_callBytesSent;
@property(nonatomic) int callsReceived; // @synthesize callsReceived=_callsReceived;
@property(nonatomic) int callsSent; // @synthesize callsSent=_callsSent;
@property(nonatomic) int messagesReceived; // @synthesize messagesReceived=_messagesReceived;
@property(nonatomic) int messagesSent; // @synthesize messagesSent=_messagesSent;
@property(nonatomic) long long systemBytesReceived; // @synthesize systemBytesReceived=_systemBytesReceived;
@property(nonatomic) long long systemBytesSent; // @synthesize systemBytesSent=_systemBytesSent;
@property(nonatomic) long long statusMediaBytesReceived; // @synthesize statusMediaBytesReceived=_statusMediaBytesReceived;
@property(nonatomic) long long statusMediaBytesSent; // @synthesize statusMediaBytesSent=_statusMediaBytesSent;
@property(nonatomic) long long chatMediaBytesReceived; // @synthesize chatMediaBytesReceived=_chatMediaBytesReceived;
@property(nonatomic) long long chatMediaBytesSent; // @synthesize chatMediaBytesSent=_chatMediaBytesSent;
- (void).cxx_destruct;
- (void)restoreFromDictionaryRepresentation:(id)arg1;
- (void)checkForUpgrade;
- (void)reset:(BOOL)arg1;
- (void)save;
- (void)load;
- (id)init;

@end

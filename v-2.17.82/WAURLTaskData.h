//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, WAURLRequestConfig, WAURLTaskStats;

@interface WAURLTaskData : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _cancelled;
    BOOL _suppressNotifications;
    BOOL _needsBackgroundTaskAssertion;
    NSString *_identifier;
    int _retryCount;
    WAURLRequestConfig *_requestConfig;
    WAURLTaskStats *_stats;
    unsigned int _backgroundTaskID;
}

+ (Class)taskClass;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(nonatomic) BOOL needsBackgroundTaskAssertion; // @synthesize needsBackgroundTaskAssertion=_needsBackgroundTaskAssertion;
@property(nonatomic) BOOL suppressNotifications; // @synthesize suppressNotifications=_suppressNotifications;
@property(retain, nonatomic) WAURLTaskStats *stats; // @synthesize stats=_stats;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) WAURLRequestConfig *requestConfig; // @synthesize requestConfig=_requestConfig;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *shortIdentifier;
- (id)request;
- (id)modifyRequestConfigForRetry:(id)arg1 bytesReceived:(long long)arg2 error:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

@end


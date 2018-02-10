//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString, NSURL, NSURLSessionTaskMetrics, WAMMSRoutingInfo;

@interface WAMMSTaskMetrics : NSObject <NSURLSessionTaskDelegate, NSCopying>
{
    double _startTime;
    WAMMSRoutingInfo *_routingInfo;
    NSURL *_taskURL;
    NSURLSessionTaskMetrics *_urlSessionTaskMetrics;
}

@property(retain, nonatomic) NSURLSessionTaskMetrics *urlSessionTaskMetrics; // @synthesize urlSessionTaskMetrics=_urlSessionTaskMetrics;
@property(retain, nonatomic) NSURL *taskURL; // @synthesize taskURL=_taskURL;
@property(retain, nonatomic) WAMMSRoutingInfo *routingInfo; // @synthesize routingInfo=_routingInfo;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


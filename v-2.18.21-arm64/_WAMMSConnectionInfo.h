//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _WAMMSConnectionInfo : NSObject
{
    NSString *_authToken;
    NSString *_identifier;
    double _startTime;
    double _ttl;
    NSArray *_endpoints;
    NSString *_preferredHostname;
    NSString *_preferredDomain;
    unsigned long long _preferredIPIndex;
}

@property(readonly, nonatomic) unsigned long long preferredIPIndex; // @synthesize preferredIPIndex=_preferredIPIndex;
@property(copy, nonatomic) NSString *preferredDomain; // @synthesize preferredDomain=_preferredDomain;
@property(copy, nonatomic) NSString *preferredHostname; // @synthesize preferredHostname=_preferredHostname;
@property(readonly, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)rotateIPAddressesForEndpoints;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) _Bool dueForRefresh;
@property(readonly, nonatomic) _Bool expired;
- (id)initWithAuthToken:(id)arg1 endpoints:(id)arg2 ttl:(double)arg3;

@end


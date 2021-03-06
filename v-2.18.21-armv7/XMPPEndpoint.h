//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, WAInetAddress;

@interface XMPPEndpoint : NSObject
{
    BOOL _tls;
    BOOL _resolvedWithCFHost;
    WAInetAddress *_address;
    NSNumber *_port;
    NSString *_hostname;
}

+ (id)endpointWithInetAddress:(id)arg1 hostname:(id)arg2 resolvedWithCFHost:(BOOL)arg3 tls:(BOOL)arg4;
+ (id)endpointWithFallbackAddress:(id)arg1;
+ (id)endpointForHintAddress:(id)arg1;
@property(nonatomic) BOOL resolvedWithCFHost; // @synthesize resolvedWithCFHost=_resolvedWithCFHost;
@property(readonly, nonatomic) BOOL tls; // @synthesize tls=_tls;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) WAInetAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (BOOL)connectOnSocket:(id)arg1 interface:(id)arg2 timeout:(double)arg3 error:(id *)arg4;
- (BOOL)shouldTryToConnectWithCFHostOnInterface:(id)arg1;
- (id)description;
- (id)initWithAddress:(id)arg1 tls:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isFallback;
@property(readonly, nonatomic) BOOL isHint;
@property(readonly, nonatomic) BOOL isHTTP;

@end


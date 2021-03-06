//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WADNSResolver : NSObject
{
    NSMutableDictionary *_addressCache;
    unsigned long _networkStatusForCache;
    BOOL _useDefaultIPv4GoogleNameServer;
}

+ (id)sharedResolver;
- (void).cxx_destruct;
- (id)cachedIPv4AddressesForHost:(id)arg1;
- (void)setCacheAddresses:(id)arg1 host:(id)arg2;
- (struct __CFSocket *)newDNSSocketWithNameServerAddress:(id)arg1;
- (void)freeQueryBuffer:(void *)arg1 replyBuffer:(void *)arg2 dnsSocket:(id)arg3 dnsReply:(CDStruct_5d34f741 *)arg4;
- (id)resolveAddressForHost:(id)arg1 usingNameServerAddress:(id)arg2 queryIPv6:(BOOL)arg3;
- (void)addressesWithSecondaryResolverForHost:(id)arg1 ipv4Addresses:(id *)arg2 ipv6Addresses:(id *)arg3;
- (void)cleanUpCFHost:(struct __CFHost *)arg1 mode:(struct __CFString *)arg2 runloop:(struct __CFRunLoop *)arg3;
- (void)addressesWithPrimaryResolverForHost:(id)arg1 ipv4Addresses:(id *)arg2 ipv6Addresses:(id *)arg3;
- (void)updateNetworkStatus:(unsigned long)arg1;
- (void)addressesForHost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long)dnsGlobalQueueIdentifier;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAHTTPFetcher;

@interface WAServerStatus : NSObject
{
    WAHTTPFetcher *_fetcher;
    BOOL _email;
    BOOL _last;
    BOOL _sync;
    BOOL _chat;
    BOOL _group;
    BOOL _multimedia;
    BOOL _online;
    BOOL _profile;
    BOOL _push;
    BOOL _registration;
    BOOL _status;
    BOOL _broadcast;
    BOOL _version;
    BOOL _requestError;
    BOOL _requestInProgress;
    int _numberOfServicesDown;
}

@property(readonly, nonatomic) int numberOfServicesDown; // @synthesize numberOfServicesDown=_numberOfServicesDown;
@property(readonly, nonatomic) BOOL requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(readonly, nonatomic) BOOL requestError; // @synthesize requestError=_requestError;
@property(nonatomic) BOOL version; // @synthesize version=_version;
@property(nonatomic) BOOL broadcast; // @synthesize broadcast=_broadcast;
@property(nonatomic) BOOL status; // @synthesize status=_status;
@property(nonatomic) BOOL registration; // @synthesize registration=_registration;
@property(nonatomic) BOOL push; // @synthesize push=_push;
@property(nonatomic) BOOL profile; // @synthesize profile=_profile;
@property(nonatomic) BOOL online; // @synthesize online=_online;
@property(nonatomic) BOOL multimedia; // @synthesize multimedia=_multimedia;
@property(nonatomic) BOOL group; // @synthesize group=_group;
@property(nonatomic) BOOL chat; // @synthesize chat=_chat;
@property(nonatomic) BOOL sync; // @synthesize sync=_sync;
@property(nonatomic) BOOL last; // @synthesize last=_last;
@property(nonatomic) BOOL email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)servicesStatusString;
- (id)registrationStatusString;
- (void)cancelRequest;
- (void)parseStatusResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end


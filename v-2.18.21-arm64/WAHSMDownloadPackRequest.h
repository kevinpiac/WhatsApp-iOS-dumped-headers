//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPersistentRequest.h"

@class NSArray, NSString;

@interface WAHSMDownloadPackRequest : WAPersistentRequest
{
    NSString *_ns;
    NSString *_userLanguage;
    NSString *_userLocale;
    NSArray *_packInfos;
    NSString *_reason;
}

+ (id)identifierForNamespace:(id)arg1 userLanguage:(id)arg2 userLocale:(id)arg3;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSArray *packInfos; // @synthesize packInfos=_packInfos;
@property(readonly, copy, nonatomic) NSString *userLocale; // @synthesize userLocale=_userLocale;
@property(readonly, copy, nonatomic) NSString *userLanguage; // @synthesize userLanguage=_userLanguage;
@property(readonly, copy, nonatomic) NSString *ns; // @synthesize ns=_ns;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)delayBeforeRetry;
- (_Bool)canBegin;
- (id)initWithNamespace:(id)arg1 reason:(id)arg2 userLanguage:(id)arg3 userLocale:(id)arg4 packInfos:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


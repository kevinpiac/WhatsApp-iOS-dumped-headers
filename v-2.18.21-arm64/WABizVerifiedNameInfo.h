//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WABizVerifiedNameInfo : NSObject
{
    NSString *_localizedName;
    long long _verificationLevel;
    NSString *_certificateSerial;
}

@property(readonly, copy, nonatomic) NSString *certificateSerial; // @synthesize certificateSerial=_certificateSerial;
@property(readonly, nonatomic) long long verificationLevel; // @synthesize verificationLevel=_verificationLevel;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (id)initWithEntry:(id)arg1 language:(id)arg2 locale:(id)arg3;
- (id)initWithLocalizedName:(id)arg1 certificateSerial:(id)arg2 verificationLevel:(long long)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, WAPBClientPayload_UserAgent_AppVersion;

@interface WAPBClientPayload_UserAgent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) WAPBClientPayload_UserAgent_AppVersion *appVersion; // @dynamic appVersion;
@property(copy, nonatomic) NSString *device; // @dynamic device;
@property(nonatomic) BOOL hasAppVersion; // @dynamic hasAppVersion;
@property(nonatomic) BOOL hasDevice; // @dynamic hasDevice;
@property(nonatomic) BOOL hasLocaleCountryIso31661Alpha2; // @dynamic hasLocaleCountryIso31661Alpha2;
@property(nonatomic) BOOL hasLocaleLanguageIso6391; // @dynamic hasLocaleLanguageIso6391;
@property(nonatomic) BOOL hasManufacturer; // @dynamic hasManufacturer;
@property(nonatomic) BOOL hasMcc; // @dynamic hasMcc;
@property(nonatomic) BOOL hasMnc; // @dynamic hasMnc;
@property(nonatomic) BOOL hasOsBuildNumber; // @dynamic hasOsBuildNumber;
@property(nonatomic) BOOL hasOsVersion; // @dynamic hasOsVersion;
@property(nonatomic) BOOL hasPhoneId; // @dynamic hasPhoneId;
@property(nonatomic) BOOL hasPlatform; // @dynamic hasPlatform;
@property(nonatomic) BOOL hasReleaseChannel; // @dynamic hasReleaseChannel;
@property(copy, nonatomic) NSString *localeCountryIso31661Alpha2; // @dynamic localeCountryIso31661Alpha2;
@property(copy, nonatomic) NSString *localeLanguageIso6391; // @dynamic localeLanguageIso6391;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(copy, nonatomic) NSString *mcc; // @dynamic mcc;
@property(copy, nonatomic) NSString *mnc; // @dynamic mnc;
@property(copy, nonatomic) NSString *osBuildNumber; // @dynamic osBuildNumber;
@property(copy, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(copy, nonatomic) NSString *phoneId; // @dynamic phoneId;
@property(nonatomic) int platform; // @dynamic platform;
@property(nonatomic) int releaseChannel; // @dynamic releaseChannel;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WABizHours, WABizVertical;

@interface WABizProfile : NSObject
{
    int _tag;
    NSString *_address;
    NSString *_businessDescription;
    WABizHours *_hours;
    WABizVertical *_vertical;
    NSString *_email;
    NSArray *_websites;
    NSArray *_websitesExcludingSocial;
    NSArray *_socialProfiles;
    double _latitude;
    double _longitude;
}

@property(readonly, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(readonly, nonatomic) NSArray *websitesExcludingSocial; // @synthesize websitesExcludingSocial=_websitesExcludingSocial;
@property(readonly, nonatomic) NSArray *websites; // @synthesize websites=_websites;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) WABizVertical *vertical; // @synthesize vertical=_vertical;
@property(copy, nonatomic) WABizHours *hours; // @synthesize hours=_hours;
@property(copy, nonatomic) NSString *businessDescription; // @synthesize businessDescription=_businessDescription;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) int tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)infoString;
- (BOOL)hasValidCoordinates;
- (id)initWithProfileData:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKAnnotation-Protocol.h"

@class CLLocation, NSString, UIImage, WARichText;
@protocol OS_dispatch_group;

@interface WAPlace : NSObject <MKAnnotation>
{
    NSObject<OS_dispatch_group> *_infoLoadingGroup;
    NSString *_uniqueIdentifier;
    NSString *_placeId;
    NSString *_name;
    NSString *_shortAddress;
    NSString *_fullAddress;
    NSString *_urlString;
    NSString *_iconURLString;
    CLLocation *_location;
    double _distance;
    UIImage *_mapThumbnail;
    unsigned long long _source;
    WARichText *_richTextComment;
}

+ (void)fetchAppleMapsThumbnailForLocation:(id)arg1 live:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 retryOnFail:(_Bool)arg4;
+ (void)fetchGoogleMapsThumbnailForCoordinate:(struct CLLocationCoordinate2D)arg1 fullResolution:(_Bool)arg2 includePin:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)URLForGoogleMapsThumbnailAt:(struct CLLocationCoordinate2D)arg1 fullResolution:(_Bool)arg2 includePin:(_Bool)arg3 size:(struct CGSize)arg4;
+ (id)mapPreviewWithPinOverlay:(id)arg1 pinRect:(struct CGRect)arg2 live:(_Bool)arg3 jid:(id)arg4;
+ (id)mapPreviewWithPinOverlay:(id)arg1 live:(_Bool)arg2 jid:(id)arg3;
+ (id)mapPreviewWithPinOverlay:(id)arg1 pinRect:(struct CGRect)arg2;
+ (struct CGRect)rectOfPinOverlayOnMapPreview:(id)arg1 live:(_Bool)arg2;
+ (struct CGImage *)livePinImageForJID:(id)arg1;
+ (id)placeWithVCardData:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) WARichText *richTextComment; // @synthesize richTextComment=_richTextComment;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) UIImage *mapThumbnail; // @synthesize mapThumbnail=_mapThumbnail;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(copy, nonatomic) NSString *shortAddress; // @synthesize shortAddress=_shortAddress;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (void)fetchMapThumbnailForLiveLocation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)mapThumbnailFetchNeeded;
- (void)fetchFacebookPlaceDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPlaceDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)placeDetailsFetchNeeded;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (id)initWithSource:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

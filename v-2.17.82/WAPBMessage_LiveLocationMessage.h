//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, WAPBContextInfo;

@interface WAPBMessage_LiveLocationMessage : GPBMessage
{
}

+ (id)descriptor;
- (id)liveLocationWithTimestamp:(id)arg1;
@property(copy, nonatomic) NSString *captionWithSanitization;

// Remaining properties
@property(nonatomic) unsigned int accuracyInMeters; // @dynamic accuracyInMeters;
@property(copy, nonatomic) NSString *caption; // @dynamic caption;
@property(retain, nonatomic) WAPBContextInfo *contextInfo; // @dynamic contextInfo;
@property(nonatomic) unsigned int degreesClockwiseFromMagneticNorth; // @dynamic degreesClockwiseFromMagneticNorth;
@property(nonatomic) double degreesLatitude; // @dynamic degreesLatitude;
@property(nonatomic) double degreesLongitude; // @dynamic degreesLongitude;
@property(nonatomic) BOOL hasAccuracyInMeters; // @dynamic hasAccuracyInMeters;
@property(nonatomic) BOOL hasCaption; // @dynamic hasCaption;
@property(nonatomic) BOOL hasContextInfo; // @dynamic hasContextInfo;
@property(nonatomic) BOOL hasDegreesClockwiseFromMagneticNorth; // @dynamic hasDegreesClockwiseFromMagneticNorth;
@property(nonatomic) BOOL hasDegreesLatitude; // @dynamic hasDegreesLatitude;
@property(nonatomic) BOOL hasDegreesLongitude; // @dynamic hasDegreesLongitude;
@property(nonatomic) BOOL hasJpegThumbnail; // @dynamic hasJpegThumbnail;
@property(nonatomic) BOOL hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) BOOL hasSpeedInMps; // @dynamic hasSpeedInMps;
@property(copy, nonatomic) NSData *jpegThumbnail; // @dynamic jpegThumbnail;
@property(nonatomic) long long sequenceNumber; // @dynamic sequenceNumber;
@property(nonatomic) float speedInMps; // @dynamic speedInMps;

@end


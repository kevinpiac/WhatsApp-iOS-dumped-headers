//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, WAPBContextInfo;

@interface WAPBMessage_ImageMessage : GPBMessage
{
}

+ (id)descriptor;
@property(copy, nonatomic) NSString *captionWithSanitization;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *caption; // @dynamic caption;
@property(retain, nonatomic) WAPBContextInfo *contextInfo; // @dynamic contextInfo;
@property(copy, nonatomic) NSData *fileEncSha256; // @dynamic fileEncSha256;
@property(nonatomic) unsigned long long fileLength; // @dynamic fileLength;
@property(copy, nonatomic) NSData *fileSha256; // @dynamic fileSha256;
@property(nonatomic) unsigned int firstScanLength; // @dynamic firstScanLength;
@property(copy, nonatomic) NSData *firstScanSidecar; // @dynamic firstScanSidecar;
@property(nonatomic) BOOL hasCaption; // @dynamic hasCaption;
@property(nonatomic) BOOL hasContextInfo; // @dynamic hasContextInfo;
@property(nonatomic) BOOL hasFileEncSha256; // @dynamic hasFileEncSha256;
@property(nonatomic) BOOL hasFileLength; // @dynamic hasFileLength;
@property(nonatomic) BOOL hasFileSha256; // @dynamic hasFileSha256;
@property(nonatomic) BOOL hasFirstScanLength; // @dynamic hasFirstScanLength;
@property(nonatomic) BOOL hasFirstScanSidecar; // @dynamic hasFirstScanSidecar;
@property(nonatomic) BOOL hasHeight; // @dynamic hasHeight;
@property(nonatomic) BOOL hasJpegThumbnail; // @dynamic hasJpegThumbnail;
@property(nonatomic) BOOL hasMediaKey; // @dynamic hasMediaKey;
@property(nonatomic) BOOL hasMimetype; // @dynamic hasMimetype;
@property(nonatomic) BOOL hasURL; // @dynamic hasURL;
@property(nonatomic) BOOL hasWidth; // @dynamic hasWidth;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(retain, nonatomic) NSMutableArray *interactiveAnnotationsArray; // @dynamic interactiveAnnotationsArray;
@property(readonly, nonatomic) unsigned int interactiveAnnotationsArray_Count; // @dynamic interactiveAnnotationsArray_Count;
@property(copy, nonatomic) NSData *jpegThumbnail; // @dynamic jpegThumbnail;
@property(copy, nonatomic) NSData *mediaKey; // @dynamic mediaKey;
@property(copy, nonatomic) NSString *mimetype; // @dynamic mimetype;
@property(nonatomic) unsigned int width; // @dynamic width;

@end


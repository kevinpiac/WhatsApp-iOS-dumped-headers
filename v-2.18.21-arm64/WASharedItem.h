//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "WAMediaUploadable-Protocol.h"

@class NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSURL, WAMessageMetadata, WASharedItemOutbox;
@protocol NSObject><NSCopying, WAServerDate;

@interface WASharedItem : NSObject <WAMediaUploadable, NSSecureCoding, NSCopying>
{
    int _mediaType;
    _Bool _isFileURLPermanent;
    NSString *_uniqueID;
    NSString *_stanzaID;
    NSString *_directPath;
    NSData *_encFileHash;
    _Bool _multicast;
    float _uploadProgress;
    NSData *_mediaKey;
    WASharedItemOutbox *_outbox;
    NSDate<WAServerDate> *_creationDate;
    NSString *_toJID;
    NSString *_phash;
    NSString *_text;
    NSURL *_fileURL;
    NSString *_vCardName;
    NSString *_vCardString;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_locationName;
    NSString *_locationUrl;
    WAMessageMetadata *_metadata;
    NSData *_imageRepresentationData;
    NSNumber *_mediaWidth;
    NSNumber *_mediaHeight;
    long long _pageCount;
    NSString *_MIMEType;
    NSString *_originalFilename;
    NSString *_fileHash;
    NSNumber *_gifProvider;
    NSArray *_interactiveAnnotations;
    NSSet *_recipients;
    NSArray *_statusRecipients;
    unsigned long long _fileSize;
    long long _mediaDuration;
    NSData *_thumbnailData;
    unsigned long long _status;
    NSString *_serverMediaURL;
    NSString *_serverHash;
    long long _filteredRecipientCount;
}

+ (id)errorMessageForCount:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *stanzaID; // @synthesize stanzaID=_stanzaID;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) float uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) long long filteredRecipientCount; // @synthesize filteredRecipientCount=_filteredRecipientCount;
@property(copy, nonatomic) NSString *serverHash; // @synthesize serverHash=_serverHash;
@property(copy, nonatomic) NSString *serverMediaURL; // @synthesize serverMediaURL=_serverMediaURL;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(nonatomic) long long mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSArray *statusRecipients; // @synthesize statusRecipients=_statusRecipients;
@property(copy, nonatomic) NSSet *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSArray *interactiveAnnotations; // @synthesize interactiveAnnotations=_interactiveAnnotations;
@property(retain, nonatomic) NSNumber *gifProvider; // @synthesize gifProvider=_gifProvider;
@property(copy, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
@property(copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) NSNumber *mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(retain, nonatomic) NSNumber *mediaWidth; // @synthesize mediaWidth=_mediaWidth;
@property(copy, nonatomic) NSData *imageRepresentationData; // @synthesize imageRepresentationData=_imageRepresentationData;
@property(retain, nonatomic) WAMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *locationUrl; // @synthesize locationUrl=_locationUrl;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *vCardString; // @synthesize vCardString=_vCardString;
@property(copy, nonatomic) NSString *vCardName; // @synthesize vCardName=_vCardName;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool multicast; // @synthesize multicast=_multicast;
@property(copy, nonatomic) NSString *phash; // @synthesize phash=_phash;
@property(copy, nonatomic) NSString *toJID; // @synthesize toJID=_toJID;
@property(readonly, nonatomic) NSDate<WAServerDate> *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) __weak WASharedItemOutbox *outbox; // @synthesize outbox=_outbox;
@property(copy, nonatomic) NSData *mediaKey; // @synthesize mediaKey=_mediaKey;
- (void).cxx_destruct;
- (void)didChangeOutboxToURL:(id)arg1;
- (_Bool)failWithUploadResult:(id)arg1 error:(id)arg2 terminal:(_Bool)arg3;
- (void)finishWithUploadResult:(id)arg1;
- (void)updateWithUploadProgress:(float)arg1;
- (void)setMediaMimeType:(id)arg1 fileSize:(unsigned long long)arg2 filePath:(id)arg3;
@property(copy, nonatomic) NSString *directPath;
@property(copy, nonatomic) NSString *encFileHash;
@property(readonly, copy, nonatomic) NSSet *recipientsJids;
@property(readonly, nonatomic) long long httpRetryCount;
@property(readonly, nonatomic) _Bool isMultiVCardMessage;
@property(readonly, nonatomic) _Bool isPTT;
@property(readonly, nonatomic) int mediaOrigin;
@property(readonly, copy, nonatomic) NSString *mediaUploadPath;
@property(readonly, copy, nonatomic) NSString *mediaFilePath;
@property(readonly, nonatomic) id <NSObject><NSCopying> uniqueID;
@property(readonly, nonatomic) unsigned long long vCardCount;
@property(readonly, nonatomic, getter=isMultiVCard) _Bool multiVCard;
- (void)prepareAVMediaForUploadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareImageForUploadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareDocumentForUploadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareForUploadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareMediaFileForSavingWithOutboxURL:(id)arg1;
@property(readonly, nonatomic) _Bool autoResendInMainAppEligible;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAttachment:(id)arg1;
- (id)initWithAudioFileURL:(id)arg1 mimeType:(id)arg2;
- (id)initWithPlace:(id)arg1;
- (id)initWithVCard:(id)arg1;
- (id)initWithText:(id)arg1 metadata:(id)arg2;
- (id)initWithGIFFileURL:(id)arg1 caption:(id)arg2 gifProvider:(id)arg3;
- (id)initWithVideoFileURL:(id)arg1 caption:(id)arg2;
- (id)initWithImageFileURL:(id)arg1 caption:(id)arg2;
- (id)init;
- (id)outgoingMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL, WAMessage;

@interface WAGIFAsset : NSObject
{
    NSURL *_previewURL;
    NSURL *_fullURL;
    NSURL *_gifURL;
    NSURL *_thumbnailImageURL;
    WAMessage *_originalMessage;
    NSNumber *_provider;
    struct CGSize _size;
}

+ (id)localCacheURLFor:(id)arg1 hintExtension:(id)arg2;
+ (struct CGSize)sizeFromGIPHYDictionary:(id)arg1;
+ (id)thumbnailPreviewURLFromGIPHYDictionary:(id)arg1 size:(struct CGSize)arg2;
+ (id)smallPreviewURLFromGIPHYDictionary:(id)arg1 size:(struct CGSize)arg2;
+ (id)previewURLFromGIPHYDictionary:(id)arg1 size:(struct CGSize)arg2;
+ (id)stillPathForPath:(id)arg1;
+ (id)smallPathForPath:(id)arg1;
+ (id)notPreferredPreviewStringForSize:(struct CGSize)arg1;
+ (id)preferredPreviewStringForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSNumber *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) WAMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(readonly, copy, nonatomic) NSURL *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(readonly, copy, nonatomic) NSURL *gifURL; // @synthesize gifURL=_gifURL;
@property(readonly, copy, nonatomic) NSURL *fullURL; // @synthesize fullURL=_fullURL;
@property(readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1 previewURL:(id)arg2 fullURL:(id)arg3 thumbnailImageURL:(id)arg4 gifURL:(id)arg5 provider:(id)arg6;
- (void)calculateSize;
- (id)initWithMessage:(id)arg1;
- (void)generateSendMediaItemFromURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateSendMediaItemFromMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)generatePreparedSendMediaItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateSendMediaItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithGIPHYJSON:(id)arg1;
- (id)initWithTenorJSON:(id)arg1;

@end


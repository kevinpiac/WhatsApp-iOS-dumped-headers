//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL, UIImage;

@interface WAWebPageMetadata : NSObject <NSCopying>
{
    BOOL _active;
    BOOL _doneDownloadingPreviewImage;
    BOOL _containsHTMLData;
    BOOL _isNonHTMLImageWithoutCacheImage;
    UIImage *_image;
    NSString *_snippet;
    NSURL *_originalURL;
    NSURL *_canonicalURL;
    NSURL *_imageURL;
    NSURL *_gifURL;
    NSURL *_videoURL;
    NSString *_pageTitle;
    NSString *_metaTitle;
    struct CGSize _preferredImageSize;
}

+ (id)placeholderImage;
+ (void)initialize;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(copy, nonatomic) NSString *metaTitle; // @synthesize metaTitle=_metaTitle;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSURL *gifURL; // @synthesize gifURL=_gifURL;
@property(nonatomic) BOOL isNonHTMLImageWithoutCacheImage; // @synthesize isNonHTMLImageWithoutCacheImage=_isNonHTMLImageWithoutCacheImage;
@property(nonatomic) BOOL containsHTMLData; // @synthesize containsHTMLData=_containsHTMLData;
@property(nonatomic) BOOL doneDownloadingPreviewImage; // @synthesize doneDownloadingPreviewImage=_doneDownloadingPreviewImage;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSURL *canonicalURL; // @synthesize canonicalURL=_canonicalURL;
@property(copy, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSendable) BOOL sendable;
@property(readonly, copy, nonatomic) NSString *title;
- (id)description;
@property(readonly, copy, nonatomic) NSURL *downloadableMediaURL;
- (BOOL)containsSameDataAsMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

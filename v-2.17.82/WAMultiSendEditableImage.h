//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMultiSendMediaItem.h"

@class WAFuture, WamEventDocumentDetection, WamEventIphoneImageExport;

@interface WAMultiSendEditableImage : WAMultiSendMediaItem
{
    WAFuture *_renderedContentFuture;
    WAFuture *_originalImageForPreviewFuture;
    WAFuture *_highResolutionImageFuture;
    WAFuture *_isLikeDocumentFuture;
    WAFuture *_doesContainRichTextFuture;
    BOOL _doesOriginalImageForPreviewConformToQuality;
    struct CGSize _exportedImageSize;
    WamEventDocumentDetection *_documentDetectionEvent;
    WamEventIphoneImageExport *_imageExportEvent;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)submitExportEventIfNecessary;
- (void)setupImageExportEvent;
- (void)submitDocumentDetectionEventIfNecessary;
- (void)setupDocumentDetectionEvent;
- (void)reallyExportHighResolutionImage:(id)arg1 outputURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reallyRenderAndExportHighResolutionImageWithOutputURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeHighResolutionImage:(id)arg1;
- (id)highResolutionImage;
- (void)setHighResolutionImage:(id)arg1;
- (void)makeupDoesContainRichTextFutureWithImage:(id)arg1;
- (void)makeupIsLikeDocumentFutureWithImage:(id)arg1;
- (BOOL)isLikeDocument;
- (id)accessibilityLabel;
- (void)renderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didChangeFilter;
- (void)didChangeTransform;
- (id)renderedImage;
- (id)renderedContent;
- (id)generateOriginalImageForPreview;
- (void)overlayPaintCanvasContentOnImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downgradeToQualityIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reallyExportWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)storeOriginalImageForPreview:(id)arg1;
- (void)storeRenderedContent:(id)arg1;
- (id)interactiveAnnotations;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageURL:(id)arg1 renderedImage:(id)arg2 assetIdentifier:(id)arg3 quality:(id)arg4;

@end


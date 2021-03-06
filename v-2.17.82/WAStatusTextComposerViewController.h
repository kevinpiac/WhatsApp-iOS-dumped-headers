//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WAStatusComposerNUXDelegate-Protocol.h"
#import "WAStatusTextComposerViewDelegate-Protocol.h"
#import "WAWebPageFromTextLoaderDelegate-Protocol.h"

@class NSArray, NSString, WAStatusComposerNUX, WAStatusTextComposerView, WAWebPageFromTextLoader, WAWebPageMediaDownloader;
@protocol WAStatusTextComposerViewControllerDelegate;

@interface WAStatusTextComposerViewController : WAViewController <WAStatusTextComposerViewDelegate, WAWebPageFromTextLoaderDelegate, WAStatusComposerNUXDelegate>
{
    WAStatusTextComposerView *_textComposerView;
    WAStatusComposerNUX *_statusHelperDialogView;
    int _fontType;
    NSArray *_backgroundColors;
    unsigned int _selectedBackgroundColorIndex;
    WAWebPageFromTextLoader *_textLoader;
    WAWebPageMediaDownloader *_mediaDownloader;
    WAWebPageMediaDownloader *_mediaAutoDownloader;
    BOOL _statusBarShouldReallyBeHidden;
    id <WAStatusTextComposerViewControllerDelegate> _delegate;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <WAStatusTextComposerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)statusComposerNUXDidTapSend:(id)arg1;
- (void)statusComposerNUXDidTapPrivacy:(id)arg1;
- (void)statusComposerNUXDidTapDismiss:(id)arg1;
- (void)dismissPrivacySettings:(id)arg1;
- (void)showStatusPrivacySettings;
- (void)dismissStatusHelperDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showStatusHelperDialog;
- (void)statusTextComposerDidCancelMediaDownload:(id)arg1;
- (void)statusTextComposerDidRequestMediaDownload:(id)arg1;
- (void)statusTextComposerDidTapRemovePreview:(id)arg1;
- (void)statusTextComposerDidRequestDetectWebURL:(id)arg1;
- (void)statusTextComposerDidTapChangeFontBack:(id)arg1;
- (void)statusTextComposerDidTapChangeFont:(id)arg1;
- (void)statusTextComposerDidTapChangeBackgroundColorBack:(id)arg1;
- (void)statusTextComposerDidTapChangeBackgroundColor:(id)arg1;
- (void)statusTextComposerDidTapSend:(id)arg1;
- (void)statusTextComposer:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)updateMetadataWithImage:(id)arg1;
- (void)handleDownloadedMediaFileURL:(id)arg1;
- (void)updatePreviewImageIfPossibleUsingDownloadedMediaFileURL:(id)arg1 mimeType:(id)arg2;
- (BOOL)isAllowAutodownloadMediaWithMetadata:(id)arg1 mediaSize:(unsigned int)arg2;
- (void)autodownloadMediaIfPossibleWithMetadata:(id)arg1 mediaSize:(unsigned int)arg2;
- (void)webPageFromTextLoaderDidUpdateMetadata:(id)arg1;
- (void)webPageFromTextLoaderDidUpdateMatchedText:(id)arg1;
- (void)sendStatus;
- (void)detectedWebURL:(id)arg1;
- (void)detectWebURLInText:(id)arg1;
- (void)previousFontType;
- (void)nextFontType;
- (void)previousBackgroundColor;
- (void)nextBackgroundColor;
- (id)currentBackgroundColor;
- (int)preferredStatusBarUpdateAnimation;
- (int)preferredStatusBarStyle;
- (BOOL)wa_prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


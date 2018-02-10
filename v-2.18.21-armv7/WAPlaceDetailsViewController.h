//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView, WAPlace;
@protocol ShareLocationControllerDelegate;

@interface WAPlaceDetailsViewController : WAViewController <UIWebViewDelegate>
{
    BOOL _pageLoaded;
    WAPlace *_waPlace;
    id <ShareLocationControllerDelegate> _delegate;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <ShareLocationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAPlace *waPlace; // @synthesize waPlace=_waPlace;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)loadPlacePageWithURLString:(id)arg1;
- (void)sendPlaceAction:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithWAPlace:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


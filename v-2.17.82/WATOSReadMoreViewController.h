//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UISwitch, UITapGestureRecognizer, UIView, WAGradientView, WALinkLabel, WATooltipView;
@protocol WATOSReadMoreViewControllerDelegate;

@interface WATOSReadMoreViewController : WAViewController <WKNavigationDelegate, UIWebViewDelegate, UIScrollViewDelegate>
{
    BOOL _accountInfoSharingOptOut;
    id <WATOSReadMoreViewControllerDelegate> _delegate;
    NSLayoutConstraint *_topPanelTop;
    UIView *_topPanel;
    UIButton *_buttonDismiss;
    UIButton *_buttonShare;
    UILabel *_titleLabel;
    UIView *_webViewContainer;
    UIView *_noConnectionView;
    UILabel *_noConnectionLabel;
    UIButton *_buttonReload;
    UIActivityIndicatorView *_webViewActivityIndicator;
    UIView *_webView;
    UIView *_bottomPanel;
    UIView *_switchContainer;
    WAGradientView *_bottomPanelShadow;
    WALinkLabel *_shareAccountInfoLabel;
    NSLayoutConstraint *_shareAccountInfoLabelTrailing;
    UISwitch *_switchOptOut;
    UIButton *_buttonAgree;
    UITapGestureRecognizer *_switchContainerTap;
    WATooltipView *_switchTooltip;
}

+ (id)controller;
@property(nonatomic) __weak WATooltipView *switchTooltip; // @synthesize switchTooltip=_switchTooltip;
@property(retain, nonatomic) UITapGestureRecognizer *switchContainerTap; // @synthesize switchContainerTap=_switchContainerTap;
@property(nonatomic) __weak UIButton *buttonAgree; // @synthesize buttonAgree=_buttonAgree;
@property(nonatomic) __weak UISwitch *switchOptOut; // @synthesize switchOptOut=_switchOptOut;
@property(nonatomic) __weak NSLayoutConstraint *shareAccountInfoLabelTrailing; // @synthesize shareAccountInfoLabelTrailing=_shareAccountInfoLabelTrailing;
@property(nonatomic) __weak WALinkLabel *shareAccountInfoLabel; // @synthesize shareAccountInfoLabel=_shareAccountInfoLabel;
@property(nonatomic) __weak WAGradientView *bottomPanelShadow; // @synthesize bottomPanelShadow=_bottomPanelShadow;
@property(nonatomic) __weak UIView *switchContainer; // @synthesize switchContainer=_switchContainer;
@property(nonatomic) __weak UIView *bottomPanel; // @synthesize bottomPanel=_bottomPanel;
@property(retain, nonatomic) UIView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIActivityIndicatorView *webViewActivityIndicator; // @synthesize webViewActivityIndicator=_webViewActivityIndicator;
@property(nonatomic) __weak UIButton *buttonReload; // @synthesize buttonReload=_buttonReload;
@property(nonatomic) __weak UILabel *noConnectionLabel; // @synthesize noConnectionLabel=_noConnectionLabel;
@property(nonatomic) __weak UIView *noConnectionView; // @synthesize noConnectionView=_noConnectionView;
@property(nonatomic) __weak UIView *webViewContainer; // @synthesize webViewContainer=_webViewContainer;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *buttonShare; // @synthesize buttonShare=_buttonShare;
@property(nonatomic) __weak UIButton *buttonDismiss; // @synthesize buttonDismiss=_buttonDismiss;
@property(nonatomic) __weak UIView *topPanel; // @synthesize topPanel=_topPanel;
@property(nonatomic) __weak NSLayoutConstraint *topPanelTop; // @synthesize topPanelTop=_topPanelTop;
@property(nonatomic) BOOL accountInfoSharingOptOut; // @synthesize accountInfoSharingOptOut=_accountInfoSharingOptOut;
@property(nonatomic) __weak id <WATOSReadMoreViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareAction:(id)arg1;
- (void)dismissAction:(id)arg1;
- (void)agreeAction:(id)arg1;
- (void)reloadAction:(id)arg1;
- (void)optOutSwitchAction:(id)arg1;
- (void)switchContainerTap:(id)arg1;
- (void)accessibilityVoiceOverStatusChanged:(id)arg1;
- (void)reloadSwitchAccessibilityValue;
- (void)reloadButtonTitleColors;
- (void)reloadFonts;
- (void)prepareToBeDismissed;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)updateVisibilityOfBottomPanelShadowWithScrollView:(id)arg1;
- (void)reloadWebContent;
- (id)webPageURL;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)wa_tintColorDidChange;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


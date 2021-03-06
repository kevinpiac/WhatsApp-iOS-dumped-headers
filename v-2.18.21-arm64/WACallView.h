//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WACallActionView, WACallSpamReportView, WACallVideoView, WACallViewInfoPanelView, WACallViewTopPanelView, WAVoiceCallRatingOptionsView, WAVoiceCallRatingView;
@protocol WACallSpamReportViewDelegate, WACallViewDelegate, WAVoiceCallRatingOptionsViewDelegate, WAVoiceCallRatingViewDelegate;

@interface WACallView : UIView
{
    UIView *_contentView;
    WACallViewInfoPanelView *_callInfoPanel;
    UIView *_profileImageContainerView;
    UIView *_gradient;
    UIImageView *_backgroundImageView;
    WAVoiceCallRatingView *_ratingView;
    WAVoiceCallRatingOptionsView *_ratingOptionsView;
    WACallSpamReportView *_spamReportView;
    UIImageView *_profileImageView;
    UIView *_profileImageShadowView;
    double _baseProfileImageDimension;
    double _profileImageTopMargin;
    double _profileImageBottomMargin;
    double _extraProfileImageBottomHeight;
    double _topPadding;
    _Bool _isCallActionPanelOffScreen;
    _Bool _isTopPanelOffScreen;
    _Bool _videoCall;
    _Bool _enableAudioVideoSwitch;
    unsigned long long _callActionPanelsToRemove;
    unsigned long long _topPanelsToRemove;
    // Error parsing type: AB, name: _isDebugLabelHidden
    // Error parsing type: AB, name: _isInfoLabelHidden
    id <WACallViewDelegate> _delegate;
    id <WAVoiceCallRatingViewDelegate> _callRatingViewDelegate;
    id <WAVoiceCallRatingOptionsViewDelegate> _callRatingOptionsViewDelegate;
    id <WACallSpamReportViewDelegate> _spamReportViewDelegate;
    WACallVideoView *_videoView;
    WACallActionView *_callActionPanel;
    WACallViewTopPanelView *_topPanel;
    UIView *_debugView;
    UILabel *_debugStatsLabel;
    UILabel *_infoStatsLabel;
}

@property(nonatomic) __weak UILabel *infoStatsLabel; // @synthesize infoStatsLabel=_infoStatsLabel;
@property(nonatomic) __weak UILabel *debugStatsLabel; // @synthesize debugStatsLabel=_debugStatsLabel;
@property(retain, nonatomic) UIView *debugView; // @synthesize debugView=_debugView;
@property(readonly, nonatomic) WACallViewTopPanelView *topPanel; // @synthesize topPanel=_topPanel;
@property(readonly, nonatomic) WACallActionView *callActionPanel; // @synthesize callActionPanel=_callActionPanel;
@property(readonly, nonatomic) WACallVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak id <WACallSpamReportViewDelegate> spamReportViewDelegate; // @synthesize spamReportViewDelegate=_spamReportViewDelegate;
@property(nonatomic) __weak id <WAVoiceCallRatingOptionsViewDelegate> callRatingOptionsViewDelegate; // @synthesize callRatingOptionsViewDelegate=_callRatingOptionsViewDelegate;
@property(nonatomic) __weak id <WAVoiceCallRatingViewDelegate> callRatingViewDelegate; // @synthesize callRatingViewDelegate=_callRatingViewDelegate;
@property(nonatomic) __weak id <WACallViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toggleInfoStats;
- (void)toggleDebugStats;
- (void)toggleDebugStats:(id)arg1;
- (void)updateInfoViewWithStats:(id)arg1;
- (void)updateDebugViewWithStats:(id)arg1;
- (void)setProfileImage:(id)arg1 withTransition:(_Bool)arg2;
- (void)relayoutProfileImageView;
- (void)updateBackgroundImage:(id)arg1;
- (void)setVoiceOverName:(id)arg1;
@property(copy, nonatomic) NSString *callerName;
- (void)setCallStatusTextFromCallDuration:(int)arg1;
- (void)setCallStatusText:(id)arg1 withAccessibilityLabel:(id)arg2;
@property(copy, nonatomic) NSString *callStatusText;
- (void)setHidden:(_Bool)arg1 usingHideBlock:(CDUnknownBlockType)arg2 addViewBlock:(CDUnknownBlockType)arg3 removeViewBlock:(CDUnknownBlockType)arg4 animated:(_Bool)arg5;
@property(nonatomic, getter=isTopPanelOffScreen) _Bool topPanelOffScreen;
- (void)setTopPanelOffScreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isCallActionPanelOffScreen) _Bool callActionPanelOffScreen;
- (void)positionCallActionPanelToOffScreen:(_Bool)arg1;
- (void)setCallActionPanelOffScreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isProfilePictureHidden) _Bool profilePictureHidden;
- (void)setProfilePictureHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isHeaderHidden) _Bool headerHidden;
- (void)setHeaderHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isCallInfoPanelHidden) _Bool callInfoPanelHidden;
- (void)setCallInfoPanelHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isCallRatingOptionsViewVisible) _Bool callRatingOptionViewVisible;
@property(readonly, nonatomic, getter=isCallRatingViewVisible) _Bool callRatingViewVisible;
@property(readonly, nonatomic, getter=isSpamReportViewVisible) _Bool spamReportViewVisible;
@property(readonly, nonatomic, getter=isDebugLabelHidden) _Bool debugLabelHidden;
@property(readonly, nonatomic, getter=isInfoLabelHidden) _Bool infoLabelHidden;
- (void)showSpamReportView;
- (void)showRatingOptionsView;
- (void)dismissRatingViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)showRatingView;
- (void)showFinalOverlayView:(id)arg1;
- (void)setContentViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSnapshotBackground:(id)arg1;
- (double)extraProfileImageBottomMarginForState:(int)arg1;
- (void)updateLayoutForState:(int)arg1 withCalleeJID:(id)arg2 peerFirstName:(id)arg3;
- (void)layoutSubviews;
- (void)configure;
- (id)initWithFrame:(struct CGRect)arg1 videoCall:(_Bool)arg2 enableAudioVideoSwitch:(_Bool)arg3;

@end


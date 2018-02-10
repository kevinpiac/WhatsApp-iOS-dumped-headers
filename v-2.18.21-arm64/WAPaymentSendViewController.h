//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WACaptionBarDelegate-Protocol.h"
#import "WAMentionsSelectorViewDelegate-Protocol.h"
#import "WAPaymentSelectAccountViewControllerDelegate-Protocol.h"

@class NSCharacterSet, NSLayoutConstraint, NSString, UIButton, UILabel, UIView, WACaptionBar, WAChatSession, WAMentionsSelectorView, WAPaymentAccount, WAPaymentAmountPrecisionValidator, WAPaymentAmountTextView, WAPaymentMoneyTextFormatter, WARichText;
@protocol WAPaymentSendViewControllerDelegate;

@interface WAPaymentSendViewController : WAViewController <WAPaymentSelectAccountViewControllerDelegate, UITextFieldDelegate, WACaptionBarDelegate, WAMentionsSelectorViewDelegate, UITextViewDelegate>
{
    long long _amount_1000;
    NSString *_amountString;
    WAPaymentMoneyTextFormatter *_amountFormatter;
    WAPaymentAmountPrecisionValidator *_amountPrecisionValidator;
    NSString *_chatJID;
    NSString *_currency;
    NSCharacterSet *_digitsSet;
    WAPaymentAccount *_paymentAccount;
    NSString *_receiverJID;
    _Bool _waitingForCredentials;
    _Bool _updatedTokenOnce;
    WACaptionBar *_captionBar;
    WARichText *_initialPaymentNote;
    WAMentionsSelectorView *_mentionsSelectorView;
    WAChatSession *_chatSession;
    id <WAPaymentSendViewControllerDelegate> _delegate;
    UIView *_infoBackgroundView;
    UILabel *_toLabel;
    UIButton *_receiverName;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorHeightConstraint;
    NSLayoutConstraint *_bottomSeparatorHeightConstraint;
    UILabel *_usingLabel;
    UIButton *_paymentMethodName;
    WAPaymentAmountTextView *_amountTextView;
    UIButton *_amountTextOverlayButton;
    NSLayoutConstraint *_toLabelHeightConstraint;
    NSLayoutConstraint *_amountBackgroundViewBottomConstraint;
    NSLayoutConstraint *_amountTextViewHeightConstraint;
    NSLayoutConstraint *_infoBackgroundViewTopConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *infoBackgroundViewTopConstraint; // @synthesize infoBackgroundViewTopConstraint=_infoBackgroundViewTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *amountTextViewHeightConstraint; // @synthesize amountTextViewHeightConstraint=_amountTextViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *amountBackgroundViewBottomConstraint; // @synthesize amountBackgroundViewBottomConstraint=_amountBackgroundViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *toLabelHeightConstraint; // @synthesize toLabelHeightConstraint=_toLabelHeightConstraint;
@property(nonatomic) __weak UIButton *amountTextOverlayButton; // @synthesize amountTextOverlayButton=_amountTextOverlayButton;
@property(nonatomic) __weak WAPaymentAmountTextView *amountTextView; // @synthesize amountTextView=_amountTextView;
@property(nonatomic) __weak UIButton *paymentMethodName; // @synthesize paymentMethodName=_paymentMethodName;
@property(nonatomic) __weak UILabel *usingLabel; // @synthesize usingLabel=_usingLabel;
@property(nonatomic) __weak NSLayoutConstraint *bottomSeparatorHeightConstraint; // @synthesize bottomSeparatorHeightConstraint=_bottomSeparatorHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *separatorHeightConstraint; // @synthesize separatorHeightConstraint=_separatorHeightConstraint;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UIButton *receiverName; // @synthesize receiverName=_receiverName;
@property(nonatomic) __weak UILabel *toLabel; // @synthesize toLabel=_toLabel;
@property(nonatomic) __weak UIView *infoBackgroundView; // @synthesize infoBackgroundView=_infoBackgroundView;
@property(nonatomic) __weak id <WAPaymentSendViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectAccountViewController:(id)arg1 didSelectAccount:(id)arg2;
- (void)mentionsSelectorView:(id)arg1 didSelectContactWithName:(id)arg2 jid:(id)arg3 forTextRange:(struct _NSRange)arg4;
- (void)updateMentionsSelectorViewLayoutWithAnimationCurve:(long long)arg1 animationDuration:(double)arg2;
- (void)configureMentionsSelectorView;
- (void)captionBarDidChangeHeight:(id)arg1;
- (void)captionBarDidStopEditingMention:(id)arg1;
- (void)captionBar:(id)arg1 didEditMention:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)captionBar:(id)arg1 canMentionUser:(id)arg2;
- (_Bool)captionBarShouldTrackMentions:(id)arg1;
- (_Bool)canCaptionBarAddMedia:(id)arg1;
- (void)captionBarDidRequestSendMessage:(id)arg1;
- (void)captionBarDidFinishEditing:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)editAmount:(id)arg1;
- (void)confirmAction;
- (void)cancelAction;
- (void)presentPaymentMethods;
- (void)presentReceiverList;
- (_Bool)isEnteredAmountValid;
- (void)needsAmountViewConstraintUpdates:(double)arg1 animationCurve:(long long)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setUpPaymentMethodUI;
- (void)setUpReceiverUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateReceiverJID:(id)arg1;
- (id)initWithReceiverJID:(id)arg1 chatJID:(id)arg2 amount_1000:(long long)arg3 currency:(id)arg4 paymentAccount:(id)arg5 paymentNote:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

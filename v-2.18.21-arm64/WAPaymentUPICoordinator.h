//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"
#import "WAPaymentSendViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, UIViewController, WAChatSession, WAMessage, WAModalNavigationController, WAPaymentAccount, WAProgressAlertController, WARichText, XMPPUPIBankResponse;
@protocol WAPaymentUPICoordinatorDelegate, WAViewControllerExtensions;

@interface WAPaymentUPICoordinator : NSObject <MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, WAParticipantPickerViewControllerDelegate, WAPaymentSendViewControllerDelegate>
{
    unsigned long long _flow;
    unsigned long long _state;
    UIViewController *_currentViewController;
    WAModalNavigationController *_navigationController;
    UIViewController<WAViewControllerExtensions> *_rootViewController;
    WAProgressAlertController *_progressController;
    unsigned long long _connectionStatus;
    _Bool _resetNavigationStack;
    NSString *_token;
    NSString *_listKeys;
    NSString *_challenge;
    NSString *_verificationCode;
    NSString *_debitCardNumber;
    NSString *_expiryMonth;
    NSString *_expiryYear;
    XMPPUPIBankResponse *_bankToRequestAccountsFor;
    double _smsSentTime;
    NSError *_deviceBindingError;
    NSArray *_banks;
    double _banksCachedDate;
    WAChatSession *_chatSession;
    WAMessage *_quotedMessage;
    WARichText *_note;
    long long _amount_1000;
    NSString *_currency;
    NSString *_receiverJid;
    NSString *_receiverHandle;
    NSString *_receiverName;
    NSDictionary *_clResult;
    WAPaymentAccount *_accountToProcess;
    long long _keyTokenNotReceivedCounter;
    long long _clFailedCounter;
    id <WAPaymentUPICoordinatorDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <WAPaymentUPICoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long flow; // @synthesize flow=_flow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)logCurrentState;
- (_Bool)hasUIShown;
- (void)unsetState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (_Bool)hasState:(unsigned long long)arg1;
- (void)resetStateBeforeRestarting;
- (void)resetState;
- (void)dismissProgressViewIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)exitFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)exitFlowAndReportCompletionWithResult:(id)arg1;
- (void)exitFlowAndReportError:(id)arg1;
- (void)exitFlowAndReportUserCancel;
- (void)showViewController:(id)arg1;
- (_Bool)processIQError:(id)arg1;
- (_Bool)processCLError:(id)arg1;
- (_Bool)processCoordinatorError:(id)arg1;
- (_Bool)processError:(id)arg1;
- (void)updateProgressControllerTitle;
- (void)actualConnectionStatusDidChange;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)xmppConnectionNetworkStatusDidChange:(id)arg1;
- (void)subscribeToNetworkStatusChangeNotifications;
- (void)popNavigationControllerToViewController:(id)arg1;
- (id)findViewControllerOnNavigationStackOfClass:(Class)arg1 identifier:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)updateStateToMatchCurrentViewController;
- (void)continueCurrentFlowWithAccount:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)requestMissingForCLDataAndShowWaitingForIQUI;
- (_Bool)isDataForCLMissing;
- (void)loadDataForCL;
- (void)resetDataForCL;
- (void)processGetCredentialsRequest:(id)arg1;
- (void)getCredentialsWithAccount:(id)arg1 amount_1000:(id)arg2 payer:(id)arg3 payee:(id)arg4 checkMpin:(_Bool)arg5 changeMpin:(_Bool)arg6 setMpin:(_Bool)arg7;
- (void)getCredentialsToPayFromAccount:(id)arg1 amount_1000:(id)arg2 payer:(id)arg3 payee:(id)arg4;
- (void)getCredentialsToSetMpinForAccount:(id)arg1;
- (void)getCredentialsToChangeMpinForAccount:(id)arg1;
- (void)getCredentialsToCheckMpinForAccount:(id)arg1;
- (void)processChallengeRequest:(id)arg1;
- (void)requestChallenge;
- (void)processGetMethodsRequest:(id)arg1;
- (void)sendGetMethodsIQ;
- (void)processListKeysRequest:(id)arg1;
- (void)sendListKeysIQ;
- (void)processGetTokenRequest:(id)arg1;
- (void)sendGetTokenIQWithChallenge:(id)arg1;
- (void)sendGetTokenIQ;
- (void)processCreateAccountRequest:(id)arg1;
- (void)sendCreateAccountIQ;
- (void)processBatchRequest:(id)arg1;
- (void)sendBatchIQWithChallenge:(id)arg1;
- (void)sendBatchIQ;
- (void)sendPaymentMessageToChatSession:(id)arg1 receiverJID:(id)arg2 receiverHandle:(id)arg3 withQuotedMessage:(id)arg4 usingAccount:(id)arg5 amount_1000:(long long)arg6 currency:(id)arg7 clTransactionId:(id)arg8 encryptedMpin:(id)arg9 note:(id)arg10 mentions:(id)arg11;
- (void)showCLPayUIWithAccount:(id)arg1;
- (void)processGetHandleRequest:(id)arg1;
- (void)sendGetHandleIQWithJid:(id)arg1;
- (void)paymentSendViewControllerDidCancel:(id)arg1;
- (void)paymentSendViewControllerDidChooseAccount:(id)arg1;
- (void)paymentSendViewControllerDidRequestToChoosePayee:(id)arg1 amount_1000:(long long)arg2 currency:(id)arg3 note:(id)arg4;
- (void)paymentSendViewController:(id)arg1 didConfirmAmount_1000:(long long)arg2 currency:(id)arg3 note:(id)arg4;
- (void)showSendPaymentUI;
- (void)participantPicker:(id)arg1 didSelectPayee:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContactsWithoutDismiss:(id)arg2;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)showChoosePayeeController;
- (void)continuePaymentFlow;
- (void)showWaitingForIQUI;
- (void)showFlowFailedUIWithError:(id)arg1;
- (void)showRegistrationCompletedUI;
- (void)showUIToResetAccountMpin:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)processChangeMpinRequest:(id)arg1;
- (void)sendChangeMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showCLChangeMpinUIWithAccount:(id)arg1;
- (void)showUIToChangeAccountMpin:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)processCheckMpinRequest:(id)arg1;
- (void)sendCheckMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showCLCheckMpinUIWithAccount:(id)arg1;
- (void)showUIToCheckAccountMpin:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)processSetMpinRequest:(id)arg1;
- (void)sendSetMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showCLSetMpinUIWithAccount:(id)arg1;
- (void)processGenerateOTPRequest:(id)arg1;
- (void)sendGenerateOTPIQWithAccount:(id)arg1;
- (void)showMPINSetupPromptWithAccount:(id)arg1;
- (void)showDebitCardVerificationUIWithAccount:(id)arg1;
- (void)showDebitCardPromptScreenWithAccount:(id)arg1;
- (void)showUIToContinueAccountRegistration:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)showAccountLinkedUIWithAccount:(id)arg1;
- (void)processRegisterHandleRequest:(id)arg1;
- (void)sendRegisterHandleIQWithAccount:(id)arg1;
- (void)showAccountsUIWithAccounts:(id)arg1;
- (void)showNoAccountsUI;
- (void)processGetAccountsRequest:(id)arg1;
- (void)sendGetAccountsIQWithBank:(id)arg1;
- (void)showBanksUIWithBanks:(id)arg1;
- (void)processGetBanksRequest:(id)arg1;
- (void)sendBanksIQ;
- (void)showBanksUIOrSendBanksIQAndSendBindDeviceIQIfNeeded;
- (void)processBindDeviceRequest:(id)arg1;
- (void)sendDeviceBindingIQWithVerificationData:(id)arg1;
- (void)sendDeviceBindingIQIfEnoughTimeElapsedAfterSmsSent;
- (void)processSMSSentWaitingForIQ:(_Bool)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)showIOSSMSUI;
- (void)showSMSUI;
- (void)processTOSAcceptRequest:(id)arg1;
- (void)sendTOSIQ;
- (void)showTOSUI;
- (void)startOrContinueRegistrationFlow;
- (void)restartFlow;
- (void)continueFlow;
@property(readonly, nonatomic) WAMessage *quotedMessage;
- (void)startPaymentFlowForAccount:(id)arg1 chatSession:(id)arg2 quotedMessage:(id)arg3 receiverJid:(id)arg4 amount_1000:(long long)arg5 currency:(id)arg6 note:(id)arg7 fromViewController:(id)arg8;
- (void)startResetMpinFlowForAccount:(id)arg1 fromViewController:(id)arg2;
- (void)startChangeMpinFlowForAccount:(id)arg1 fromViewController:(id)arg2;
- (void)startCheckMpinFlowForAccount:(id)arg1 fromViewController:(id)arg2;
- (void)startShortRegistrationFlowFromViewController:(id)arg1;
- (void)startRegistrationFlowFromViewController:(id)arg1;
- (void)saveBanks:(id)arg1;
- (id)banks;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


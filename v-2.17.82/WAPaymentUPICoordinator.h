//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, UIViewController, WAModalNavigationController, WAPaymentAccount, WAProgressAlertController, XMPPUPIBankResponse;
@protocol WAPaymentUPICoordinatorDelegate, WAViewControllerExtensions;

@interface WAPaymentUPICoordinator : NSObject <MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate>
{
    unsigned int _flow;
    unsigned long long _state;
    UIViewController *_currentViewController;
    WAModalNavigationController *_navigationController;
    UIViewController<WAViewControllerExtensions> *_rootViewController;
    WAProgressAlertController *_progressController;
    unsigned int _connectionStatus;
    BOOL _resetNavigationStack;
    NSString *_token;
    NSString *_listKeys;
    NSString *_challenge;
    NSString *_verificationCode;
    NSString *_debitCardNumber;
    NSString *_expiryMonth;
    NSString *_expiryYear;
    XMPPUPIBankResponse *_bankToRequestAccountsFor;
    double _smsSentTime;
    NSArray *_banks;
    double _banksCachedDate;
    NSNumber *_amount_1000;
    NSString *_receiverJid;
    NSString *_receiverHandle;
    NSDictionary *_clResult;
    WAPaymentAccount *_accountToProcess;
    int _keyTokenNotReceivedCounter;
    int _clFailedCounter;
    id <WAPaymentUPICoordinatorDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <WAPaymentUPICoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int flow; // @synthesize flow=_flow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)logCurrentState;
- (BOOL)hasUIShown;
- (void)unsetState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (BOOL)hasState:(unsigned long long)arg1;
- (void)resetStateBeforeRestarting;
- (void)resetState;
- (void)dismissProgressViewIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)exitFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)exitFlowAndReportCompletionWithResult:(id)arg1;
- (void)exitFlowAndReportError:(id)arg1;
- (void)exitFlowAndReportUserCancel;
- (void)showViewController:(id)arg1;
- (BOOL)processError:(id)arg1;
- (void)updateProgressControllerTitle;
- (void)actualConnectionStatusDidChange;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)xmppConnectionNetworkStatusDidChange:(id)arg1;
- (void)subscribeToNetworkStatusChangeNotifications;
- (void)popNavigationControllerToViewController:(id)arg1;
- (id)findViewControllerOnNavigationStackOfClass:(Class)arg1 identifier:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)updateStateToMatchCurrentViewController;
- (void)continueCurrentFlowWithAccount:(id)arg1 terminateIfDataIsMissing:(BOOL)arg2;
- (void)requestMissingForCLDataAndShowWaitingForIQUI;
- (BOOL)isDataForCLMissing;
- (void)loadDataForCL;
- (void)processGetCredentialsRequest:(id)arg1;
- (void)getCredentialsWithAccount:(id)arg1 amount_1000:(id)arg2 payer:(id)arg3 payee:(id)arg4 checkMpin:(BOOL)arg5 changeMpin:(BOOL)arg6 setMpin:(BOOL)arg7;
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
- (void)showWaitingForIQUI;
- (void)showFlowFailedUIWithError:(id)arg1;
- (void)showRegistrationCompletedUI;
- (void)showCLPayUIWithAccount:(id)arg1;
- (void)showUIToPayFromAccount:(id)arg1;
- (void)processGetHandleRequest:(id)arg1;
- (void)sendGetHandleIQWithJid:(id)arg1;
- (void)showPayUIOrRequestReceiverHandle;
- (void)showUIToResetAccountMpin:(id)arg1 terminateIfDataIsMissing:(BOOL)arg2;
- (void)processChangeMpinRequest:(id)arg1;
- (void)sendChangeMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showCLChangeMpinUIWithAccount:(id)arg1;
- (void)showUIToChangeAccountMpin:(id)arg1 terminateIfDataIsMissing:(BOOL)arg2;
- (void)processCheckMpinRequest:(id)arg1;
- (void)sendCheckMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showCLCheckMpinUIWithAccount:(id)arg1;
- (void)showUIToCheckAccountMpin:(id)arg1 terminateIfDataIsMissing:(BOOL)arg2;
- (void)processSetMpinRequest:(id)arg1;
- (void)sendSetMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showCLSetMpinUIWithAccount:(id)arg1;
- (void)processGenerateOTPRequest:(id)arg1;
- (void)sendGenerateOTPIQWithAccount:(id)arg1;
- (void)showMPINSetupPromptWithAccount:(id)arg1;
- (void)showDebitCardVerificationUIWithAccount:(id)arg1;
- (void)showDebitCardPromptScreenWithAccount:(id)arg1;
- (void)showUIToContinueAccountRegistration:(id)arg1 terminateIfDataIsMissing:(BOOL)arg2;
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
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)showIOSSMSUI;
- (void)showSMSUI;
- (void)processTOSAcceptRequest:(id)arg1;
- (void)sendTOSIQ;
- (void)showTOSUI;
- (void)startOrContinueRegistrationFlow;
- (void)restartFlow;
- (void)continueFlow;
- (void)startPaymentFlowForAccount:(id)arg1 amount_1000:(id)arg2 receiverJid:(id)arg3 fromViewController:(id)arg4;
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
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

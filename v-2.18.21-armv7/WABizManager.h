//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAutoMigratingStorage.h"

#import "WABizLookupProvider-Protocol.h"
#import "WAPersistentRequestManagerRegistering-Protocol.h"

@class NSDate, NSDateFormatter, NSMutableDictionary, NSObject, NSString, WAContactsStorage, WAPersistentRequestManager, WASignalManager, WASyncManager, XMPPConnection;
@protocol OS_dispatch_queue;

@interface WABizManager : WAAutoMigratingStorage <WAPersistentRequestManagerRegistering, WABizLookupProvider>
{
    NSMutableDictionary *_allVerifiedNameInfoObjects;
    NSDateFormatter *_componentTimeFormatter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    WAContactsStorage *_contactsStorage;
    WASignalManager *_signalManager;
    WAPersistentRequestManager *_persistentRequestManager;
    XMPPConnection *_xmppConnection;
    WASyncManager *_syncManager;
}

+ (id)userPreferredLanguages;
+ (id)userLocale;
+ (id)userLocaleObject;
+ (id)sharedDirectoryName;
+ (id)storeURL;
+ (void)validateCertificate:(id)arg1 forJID:(id)arg2 usingSignalManager:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (int)parseVerificationLevel:(id)arg1;
+ (id)parseVerifiedNameCertificate:(id)arg1;
@property(readonly, nonatomic) WASyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(readonly, nonatomic) XMPPConnection *xmppConnection; // @synthesize xmppConnection=_xmppConnection;
@property(readonly, nonatomic) WAPersistentRequestManager *persistentRequestManager; // @synthesize persistentRequestManager=_persistentRequestManager;
@property(readonly, nonatomic) WASignalManager *signalManager; // @synthesize signalManager=_signalManager;
@property(readonly, nonatomic) WAContactsStorage *contactsStorage; // @synthesize contactsStorage=_contactsStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)profileForJID:(id)arg1;
- (id)fetchRequestForProfileDataForJID:(id)arg1;
- (id)verifiedNameInfosMatchingText:(id)arg1;
- (id)countOfVerifiedNameCertificates;
- (id)certificateDetailsForJID:(id)arg1;
- (id)verifiedNameInfoForJID:(id)arg1;
- (BOOL)isVerifiableJID:(id)arg1;
- (void)internalPerformBlockWithVerifiedNamesForJID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performBlockWithAllVerifiedNames:(CDUnknownBlockType)arg1;
- (void)performBlockWithVerifiedNamesForJID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (double)elapsedTimeSinceDate:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *currentDate;
- (void)dealloc;
- (id)initWithContactsStorage:(id)arg1 signalManager:(id)arg2 persistentRequestManager:(id)arg3 xmppConnection:(id)arg4 syncManager:(id)arg5;
- (void)handleDatabaseContext:(id)arg1 saveError:(id)arg2;
- (void)handleDatabaseContext:(id)arg1 queryError:(id)arg2;
- (void)processIncomingVerifiedNameCheckNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processIncomingBusinessNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleVerifiedNameLostNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleBusinessProfileNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleVerifiedNameChangeNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refetchBusinessProfileForJID:(id)arg1;
- (void)saveBusinessProfile:(id)arg1 forJID:(id)arg2;
- (void)syncFinishedWithResults:(id)arg1;
- (id)allBusinessItemsForSync;
- (id)allUnknownBusinessJIDsForSync;
- (void)deleteStaleConversionInfo;
- (id)fetchConversionInfoDictionaryForJID:(id)arg1;
- (void)saveConversionInfoSource:(id)arg1 data:(id)arg2 forJID:(id)arg3;
- (id)fetchRequestForConversionInfoForJID:(id)arg1;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;
- (void)signalIdentityChanged:(id)arg1;
- (void)refetchVerifiedNameCertificateForJID:(id)arg1;
- (void)deleteAllExistingCertificatesForJID:(id)arg1;
- (void)validateCertificateSerial:(id)arg1 andLevel:(int)arg2 forJID:(id)arg3 newCertificate:(id)arg4;
- (id)submittedBizVerifyJIDRequestForJID:(id)arg1 initialDelay:(double)arg2;
- (void)updateVerificationLevel:(int)arg1 forJID:(id)arg2;
- (void)saveVerifiedNameCertificateDetails:(id)arg1 andLevel:(int)arg2 forJID:(id)arg3 reason:(int)arg4;
- (struct WAPBHighlyStructuredMessagePack_HighlyStructuredMessageTranslation *)translationInPack:(struct WAPBHighlyStructuredMessagePack *)arg1 forMessageData:(id)arg2;
- (BOOL)isPack:(struct WAPBHighlyStructuredMessagePack *)arg1 compatibleWithMessageData:(id)arg2;
- (id)internalNumberFormatterForCurrencyCode:(id)arg1;
- (id)numberFormatterForCurrencyCode:(id)arg1;
- (id)internalDateFormatterForUnixEpoch;
- (id)dateFormatterForUnixEpoch;
- (id)localizedStringForUnixEpoch:(id)arg1;
- (id)localizedStringForComponentTime:(id)arg1;
- (id)localizedStringForDateTime:(id)arg1;
- (id)localizedStringForCurrency:(id)arg1;
- (id)localizedStringForParameter:(id)arg1;
- (id)messageTextInMessageData:(id)arg1 usingPack:(struct WAPBHighlyStructuredMessagePack *)arg2;
- (void)saveMessagePackData:(id)arg1 namespace:(id)arg2 packHash:(id)arg3 packLanguage:(id)arg4 packLocale:(id)arg5 userLanguage:(id)arg6 userLocale:(id)arg7;
- (id)existingMessagePackInfosForNamespace:(id)arg1 userLanguage:(id)arg2 userLocale:(id)arg3;
- (id)dictionaryKeyForPackInfoWithLanguage:(id)arg1 locale:(id)arg2;
- (id)messagePackDataForMessageContainer:(id)arg1 namespace:(id)arg2 userPreferredLanguages:(id)arg3 userLocale:(id)arg4 reason:(id *)arg5;
- (void)fetchMessagePacksWithNamespace:(id)arg1 userLanguage:(id)arg2 userLocale:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)submittedDownloadPackRequestForNamespace:(id)arg1 reason:(id)arg2 userPreferredLanguages:(id)arg3 userLocale:(id)arg4 fallbackLanguage:(id)arg5 fallbackLocale:(id)arg6 existingPackInfos:(id)arg7;
- (id)submittedHydrateRequestForMessageContainer:(id)arg1;
- (void)performAfterInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


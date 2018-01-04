//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WASignalKeyStore;
@protocol WASignalCoordinatorDelegate;

@interface WASignalCoordinator : NSObject
{
    struct signal_context *_signal_global_context;
    struct signal_protocol_store_context *_signal_store_context;
    WASignalKeyStore *_keyStore;
    id <WASignalCoordinatorDelegate> _delegate;
}

+ (struct signal_context *)createGlobalContext;
+ (id)rawKeyDataFromSerializedSignalKeyData:(id)arg1;
+ (id)rawKeyDataFromSerializedSignalKeyBuffer:(struct signal_buffer *)arg1;
+ (BOOL)validateSignatureForKeyBundle:(id)arg1;
+ (int)signalPublicKey:(out struct ec_public_key **)arg1 fromKeyData:(id)arg2 withKeyType:(unsigned char)arg3 context:(struct signal_context *)arg4;
@property(nonatomic) __weak id <WASignalCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct signal_protocol_store_context *)createAndSetupStoreContextFromGlobalContext:(struct signal_context *)arg1 withKeyStore:(id)arg2;
- (int)fetchSignedPrekeyId:(out unsigned int *)arg1 keyData:(out id *)arg2 signatureData:(out id *)arg3;
- (id)fetchIdentityPublicKey;
- (id)fetchLocalKeyBundle;
- (void)dealloc;
- (id)keyStore;
- (struct signal_protocol_store_context *)signal_store_context;
- (struct signal_context *)signal_global_context;
@property(readonly, nonatomic) BOOL localKeysAvailable;
- (id)initWithKeyStore:(id)arg1;
- (BOOL)processPreKeyBundle:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (BOOL)processSenderKeyDistributionMessageData:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (int)decryptSenderKeyCiphertextData:(id)arg1 senderKeyName:(struct signal_protocol_sender_key_name *)arg2 plaintextData:(out id *)arg3;
- (int)decryptRegularCiphertextData:(id)arg1 signalAddress:(struct signal_protocol_address *)arg2 plaintextData:(out id *)arg3;
- (int)decryptPreKeyCiphertextData:(id)arg1 signalAddress:(struct signal_protocol_address *)arg2 plaintextData:(out id *)arg3;
- (BOOL)decryptCiphertextData:(id)arg1 withCiphertextType:(unsigned int)arg2 forSignalAddress:(id)arg3 unpadPkcs7:(BOOL)arg4 plaintextData:(out id *)arg5 error:(out id *)arg6;
- (int)encryptForIndividualAddress:(struct signal_protocol_address *)arg1 plaintextData:(id)arg2 ciphertextData:(out id *)arg3 ciphertextType:(out unsigned int *)arg4;
- (int)encryptForGroupAddress:(struct signal_protocol_sender_key_name *)arg1 plaintextData:(id)arg2 ciphertextData:(out id *)arg3 ciphertextType:(out unsigned int *)arg4;
- (BOOL)encryptPlaintextData:(id)arg1 forSignalAddress:(id)arg2 fastRatchet:(BOOL)arg3 maxPkcs7PaddingLength:(unsigned char)arg4 ciphertextData:(out id *)arg5 ciphertextType:(out unsigned int *)arg6 error:(out id *)arg7;
- (BOOL)senderKeyDistributionMessageData:(out id *)arg1 forSignalAddress:(id)arg2 didCreateNewSenderKey:(char *)arg3 error:(out id *)arg4;
- (BOOL)hasOutgoingSenderKeyStateForSignalAddress:(id)arg1;
- (BOOL)generateFingerprintForSignalAddress:(id)arg1 localStableIdentifier:(id)arg2 remoteStableIdentifier:(id)arg3 signalFingerprint:(out id *)arg4 error:(out id *)arg5;
- (id)prekeyForSerializedRecord:(id)arg1;
- (BOOL)createAndSaveIdentity;
- (struct _NSRange)createAndStorePreKeysWithIdRange:(struct _NSRange)arg1;
- (BOOL)trickleGeneratePrekeysIfNecessaryWithDesiredCount:(unsigned int)arg1;
- (id)fetchUnsentPrekeys:(unsigned int)arg1;
- (BOOL)digestCheckForPrekeyIds:(id)arg1 againstHash:(id)arg2 withLocalKeyBundleForHashInit:(id)arg3;
- (BOOL)regenerateKeyStore;
- (BOOL)saveSerializedSignedPrekey:(id)arg1 error:(out id *)arg2;
- (BOOL)createNewSignedPrekey:(out id *)arg1 signature:(out id *)arg2 serializedSignedPrekey:(out id *)arg3 error:(out id *)arg4;
- (BOOL)fetchRegistrationId:(out id *)arg1 forUserJid:(id)arg2 error:(out id *)arg3;
- (BOOL)fetchSessionBaseKeyData:(out id *)arg1 forUserJid:(id)arg2 error:(out id *)arg3;
- (void)removeSessionForUserJid:(id)arg1 shouldClearIdentity:(BOOL)arg2;
- (BOOL)hasOutgoingFastRatchetSenderKeyStateForSignalAddress:(id)arg1;
- (BOOL)fastRatchetProcessSenderKeyDistributionMessageData:(id)arg1 forSignalAddress:(id)arg2 error:(out id *)arg3;
- (BOOL)fastRatchetSenderKeyDistributionMessageData:(out id *)arg1 forSignalAddress:(id)arg2 didCreateNewSenderKey:(char *)arg3 error:(out id *)arg4;
- (int)fastRatchetEncryptForGroupAddress:(struct signal_protocol_sender_key_name *)arg1 plaintextData:(id)arg2 ciphertextData:(out id *)arg3 ciphertextType:(out unsigned int *)arg4;
- (BOOL)fastRatchetDecryptMessageWithRequest:(id)arg1 forSignalAddress:(id)arg2 plaintextMessage:(out id *)arg3 error:(out id *)arg4;
- (int)fastRatchetDecryptSenderKeyCiphertextData:(id)arg1 senderKeyName:(struct signal_protocol_sender_key_name *)arg2 plaintextData:(out id *)arg3;
- (void)fastRatchetDecryptRequest:(id)arg1 participantJid:(id)arg2 groupJid:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end


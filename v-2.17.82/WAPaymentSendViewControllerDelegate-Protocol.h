//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString, WAPaymentAccount, WAPaymentSendViewController;

@protocol WAPaymentSendViewControllerDelegate <NSObject>
- (void)paymentSendViewControllerDidCancel:(WAPaymentSendViewController *)arg1;
- (void)paymentSendViewController:(WAPaymentSendViewController *)arg1 confirmedPaymentToJID:(NSString *)arg2 receiverHandle:(NSString *)arg3 usingAccount:(WAPaymentAccount *)arg4 amount_1000:(long long)arg5 currency:(NSString *)arg6 clTransactionId:(NSString *)arg7 encryptedMpin:(NSString *)arg8 note:(NSString *)arg9 mentions:(NSSet *)arg10;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ChangeNumberInputController, NSArray, NSDictionary, NSString;

@protocol ChangeNumberInputControllerDelegate <NSObject>
- (void)changeNumberInputControllerDidCancel:(ChangeNumberInputController *)arg1;
- (void)changeNumberInputControllerDidEnterPhone:(ChangeNumberInputController *)arg1;
- (void)changeNumberInputControllerDidFail2FA:(ChangeNumberInputController *)arg1 normalizedNumber:(NSString *)arg2 countryCode:(NSString *)arg3 response:(NSDictionary *)arg4;
- (void)changeNumberInputControllerDidFinish:(ChangeNumberInputController *)arg1 normalizedNumber:(NSString *)arg2 countryCode:(NSString *)arg3 notificationContacts:(NSArray *)arg4;
@end


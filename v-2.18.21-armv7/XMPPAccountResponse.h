//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMPPAccountResponse : NSObject
{
    NSString *_credentialId;
    NSString *_defaultDebit;
    NSString *_defaultCredit;
}

+ (id)responseFromStanza:(id)arg1;
@property(copy, nonatomic) NSString *defaultCredit; // @synthesize defaultCredit=_defaultCredit;
@property(copy, nonatomic) NSString *defaultDebit; // @synthesize defaultDebit=_defaultDebit;
@property(copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
- (void).cxx_destruct;
- (id)initWithStanza:(id)arg1;

@end

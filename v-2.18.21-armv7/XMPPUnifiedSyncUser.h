//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XMPPBusiness, XMPPContact, XMPPStatus;

@interface XMPPUnifiedSyncUser : NSObject
{
    NSString *_jid;
    XMPPBusiness *_xmppBusiness;
    XMPPContact *_xmppContact;
    XMPPStatus *_xmppStatus;
}

@property(retain, nonatomic) XMPPStatus *xmppStatus; // @synthesize xmppStatus=_xmppStatus;
@property(retain, nonatomic) XMPPContact *xmppContact; // @synthesize xmppContact=_xmppContact;
@property(retain, nonatomic) XMPPBusiness *xmppBusiness; // @synthesize xmppBusiness=_xmppBusiness;
@property(readonly, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (id)initWithJid:(id)arg1;

@end

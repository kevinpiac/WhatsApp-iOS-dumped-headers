//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAWebClientJIDEntity : NSObject
{
    BOOL _statusMute;
    NSString *_jid;
    NSString *_fullName;
    NSString *_shortName;
    NSString *_pushName;
    NSString *_verifiedName;
    int _verificationLevel;
}

@property(nonatomic) BOOL statusMute; // @synthesize statusMute=_statusMute;
@property(nonatomic) int verificationLevel; // @synthesize verificationLevel=_verificationLevel;
@property(copy, nonatomic) NSString *verifiedName; // @synthesize verifiedName=_verifiedName;
@property(copy, nonatomic) NSString *pushName; // @synthesize pushName=_pushName;
@property(copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (id)initWithJID:(id)arg1;

@end


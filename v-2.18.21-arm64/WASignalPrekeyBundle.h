//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASignalKeyBundle.h"

@class WASignalPrekey;

@interface WASignalPrekeyBundle : WASignalKeyBundle
{
    WASignalPrekey *_ephemeralPrekey;
}

@property(readonly, nonatomic) WASignalPrekey *ephemeralPrekey; // @synthesize ephemeralPrekey=_ephemeralPrekey;
- (void).cxx_destruct;
- (_Bool)isEqualToWASignalPreKeyBundle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)valid;
- (id)initWithRegistrationId:(unsigned int)arg1 keyType:(unsigned char)arg2 identityPublicKeyData:(id)arg3 signedPrekey:(id)arg4 signedPrekeySignatureData:(id)arg5 ephemeralPrekey:(id)arg6;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (WACrypto)
- (id)aesDecodeWithKey:(id)arg1;
- (id)aesEncodeWithKey:(id)arg1;
- (id)aesDecodeWithPassphrase:(id)arg1;
- (id)aesEncodeWithPassphrase:(id)arg1;
- (id)aesCryptoWithPassphrase:(id)arg1 encode:(BOOL)arg2;
- (id)aesCryptoWithKey:(id)arg1 encode:(BOOL)arg2 options:(unsigned int)arg3;
@end

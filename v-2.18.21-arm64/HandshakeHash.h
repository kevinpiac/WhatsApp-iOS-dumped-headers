//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface HandshakeHash : NSObject
{
    NSData *_chainHash;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *chainHash;
- (void)update:(id)arg1;
- (id)initWithIV:(id)arg1;

@end


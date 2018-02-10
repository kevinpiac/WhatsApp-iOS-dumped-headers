//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface WAHSMPackInfo : NSObject <NSSecureCoding>
{
    NSString *_language;
    NSString *_locale;
    NSString *_packHash;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *packHash; // @synthesize packHash=_packHash;
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)arg1 locale:(id)arg2 packHash:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPStanza.h"

@class NSString;

@interface XMPPNotificationStanza : XMPPStanza
{
}

+ (unsigned int)typeForString:(id)arg1;
+ (id)stringForType:(unsigned int)arg1;
+ (id)stringsForTypes;
- (id)log;
@property(readonly, nonatomic) NSString *nickname;
@property(readonly, nonatomic) NSString *text;
@property(nonatomic) unsigned int type;
@property(readonly, nonatomic) NSString *rawType;
- (id)initWithType:(unsigned int)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface GPBAny : GPBMessage
{
}

+ (id)descriptor;
+ (id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
+ (id)anyWithMessage:(id)arg1 error:(id *)arg2;
- (id)unpackMessageClass:(Class)arg1 error:(id *)arg2;
- (BOOL)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
- (BOOL)packWithMessage:(id)arg1 error:(id *)arg2;
- (id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
- (id)initWithMessage:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *typeURL; // @dynamic typeURL;
@property(copy, nonatomic) NSData *value; // @dynamic value;

@end

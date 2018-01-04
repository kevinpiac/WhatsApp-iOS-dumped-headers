//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface POPAnimatableProperty : NSObject <NSCopying, NSMutableCopying>
{
}

+ (id)propertyWithName:(id)arg1 initializer:(CDUnknownBlockType)arg2;
+ (id)propertyWithName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, copy, nonatomic) CDUnknownBlockType readBlock; // @dynamic readBlock;
@property(readonly, nonatomic) float threshold; // @dynamic threshold;
@property(readonly, copy, nonatomic) CDUnknownBlockType writeBlock; // @dynamic writeBlock;

@end


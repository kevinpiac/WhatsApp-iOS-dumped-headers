//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAPaymentTextFormatters <NSObject>
- (NSString *)stringValueForFormattedString:(NSString *)arg1;
- (NSString *)stringForStringValue:(NSString *)arg1 trimSystemCharacters:(BOOL)arg2;
- (BOOL)isValidStringForFormatting:(NSString *)arg1;
@end


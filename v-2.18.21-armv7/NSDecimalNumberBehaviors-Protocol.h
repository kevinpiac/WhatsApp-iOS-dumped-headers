//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDecimalNumber;

@protocol NSDecimalNumberBehaviors
- (NSDecimalNumber *)exceptionDuringOperation:(SEL)arg1 error:(unsigned int)arg2 leftOperand:(NSDecimalNumber *)arg3 rightOperand:(NSDecimalNumber *)arg4;
- (short)scale;
- (unsigned int)roundingMode;
@end

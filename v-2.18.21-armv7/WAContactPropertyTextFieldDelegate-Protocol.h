//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAContactPropertyTextField;

@protocol WAContactPropertyTextFieldDelegate <NSObject>

@optional
- (void)contactPropertyTextFieldValueChanged:(WAContactPropertyTextField *)arg1;
- (BOOL)contactPropertyTextFieldShouldReturn:(WAContactPropertyTextField *)arg1;
- (void)contactPropertyTextFieldDidEndEditing:(WAContactPropertyTextField *)arg1;
- (BOOL)contactPropertyTextFieldShouldEndEditing:(WAContactPropertyTextField *)arg1;
- (void)contactPropertyTextFieldDidBeginEditing:(WAContactPropertyTextField *)arg1;
- (BOOL)contactPropertyTextFieldShouldBeginEditing:(WAContactPropertyTextField *)arg1;
@end


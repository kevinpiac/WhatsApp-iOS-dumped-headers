//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAContactPropertyTextField.h"

@interface WAContactPhoneNumberTextField : WAContactPropertyTextField
{
}

+ (BOOL)isStringADecimalNumber:(id)arg1;
+ (id)stringByKeepingOnlyDecimalDigits:(id)arg1;
+ (void)initialize;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (struct _NSRange)expandRange:(struct _NSRange)arg1 inTextFieldToIncludeNumber:(id)arg2;
- (unsigned int)endPositionOfPrefix:(id)arg1 inFormattedString:(id)arg2;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


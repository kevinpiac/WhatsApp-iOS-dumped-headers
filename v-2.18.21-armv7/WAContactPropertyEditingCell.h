//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAContactPropertyCell.h"

#import "WAContactPropertyTextFieldDelegate-Protocol.h"

@class NSString, WAContactPropertyTextField;
@protocol WAContactPropertyEditingCellDelegate;

@interface WAContactPropertyEditingCell : WAContactPropertyCell <WAContactPropertyTextFieldDelegate>
{
    WAContactPropertyTextField *_textField;
}

@property(retain, nonatomic) WAContactPropertyTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)contactPropertyTextFieldValueChanged:(id)arg1;
- (BOOL)contactPropertyTextFieldShouldReturn:(id)arg1;
- (void)contactPropertyTextFieldDidEndEditing:(id)arg1;
- (BOOL)contactPropertyTextFieldShouldEndEditing:(id)arg1;
- (void)contactPropertyTextFieldDidBeginEditing:(id)arg1;
- (BOOL)contactPropertyTextFieldShouldBeginEditing:(id)arg1;
- (void)reconfigure;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAContactPropertyEditingCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


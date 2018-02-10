//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSString, UIView, WAContactPropertyTextFieldHelper, WAGradientView;
@protocol WAContactPropertyTextFieldDelegate;

@interface WAContactPropertyTextField : UITextField
{
    WAGradientView *_verticalSeparator;
    UIView *_bottomBorder;
    WAContactPropertyTextFieldHelper *_helper;
    BOOL _showLeftBorder;
    BOOL _showBottomBorder;
    NSString *_key;
    NSString *_value;
    id <WAContactPropertyTextFieldDelegate> _textFieldDelegate;
    struct UIEdgeInsets _textInset;
    struct UIEdgeInsets _bottomSeparatorInset;
}

+ (Class)helperClass;
@property(nonatomic) __weak id <WAContactPropertyTextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(nonatomic) struct UIEdgeInsets bottomSeparatorInset; // @synthesize bottomSeparatorInset=_bottomSeparatorInset;
@property(nonatomic) BOOL showBottomBorder; // @synthesize showBottomBorder=_showBottomBorder;
@property(nonatomic) BOOL showLeftBorder; // @synthesize showLeftBorder=_showLeftBorder;
@property(nonatomic) struct UIEdgeInsets textInset; // @synthesize textInset=_textInset;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)textFieldValueChanged:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


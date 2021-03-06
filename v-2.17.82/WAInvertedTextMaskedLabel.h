//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont;

@interface WAInvertedTextMaskedLabel : UIView
{
    UIColor *_fillColor;
    NSString *_text;
    UIFont *_font;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)maskToImage:(struct CGImage *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawTextIntoContext:(struct CGContext *)arg1;
- (struct CGImage *)newImageOfText;
- (struct CGContext *)newBitmapContext;
- (id)attributedString;
- (struct __CTParagraphStyle *)newCoreTextParagraphStyleWithTextAlignment:(unsigned char)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end


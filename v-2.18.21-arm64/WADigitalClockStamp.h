//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAContentStamp.h"

@class UIColor, WAVectorGraphic;

@interface WADigitalClockStamp : WAContentStamp
{
    UIColor *_digitColor;
    struct CGSize _aspectRatio;
    UIColor *_clockColor;
    UIColor *_lineColor;
    double _fontSize;
    double _periodFractionOfTimeFontSize;
    double _clockCornerRadiusFractionOfHeight;
    double _lineWidthFractionOfHeight;
    double _lineCornerRadiusFractionOfHeight;
    double _lineInsetFractionOfHeight;
    WAVectorGraphic *_backgroundImage;
}

@property(readonly, nonatomic) WAVectorGraphic *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) double lineInsetFractionOfHeight; // @synthesize lineInsetFractionOfHeight=_lineInsetFractionOfHeight;
@property(readonly, nonatomic) double lineCornerRadiusFractionOfHeight; // @synthesize lineCornerRadiusFractionOfHeight=_lineCornerRadiusFractionOfHeight;
@property(readonly, nonatomic) double lineWidthFractionOfHeight; // @synthesize lineWidthFractionOfHeight=_lineWidthFractionOfHeight;
@property(readonly, nonatomic) double clockCornerRadiusFractionOfHeight; // @synthesize clockCornerRadiusFractionOfHeight=_clockCornerRadiusFractionOfHeight;
@property(readonly, nonatomic) double periodFractionOfTimeFontSize; // @synthesize periodFractionOfTimeFontSize=_periodFractionOfTimeFontSize;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(readonly, nonatomic) UIColor *clockColor; // @synthesize clockColor=_clockColor;
@property(readonly, nonatomic) UIColor *digitColor; // @synthesize digitColor=_digitColor;
- (void).cxx_destruct;
- (double)minimumInitialHeight;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize)aspectRatio;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)uniqueIdentifier;
- (id)initWithDigitColor:(id)arg1 aspectRatio:(struct CGSize)arg2 fontSize:(double)arg3 periodFractionOfTimeFontSize:(double)arg4 backgroundImage:(id)arg5;
- (id)initWithDigitColor:(id)arg1 aspectRatio:(struct CGSize)arg2 clockColor:(id)arg3 lineColor:(id)arg4 fontSize:(double)arg5 periodFractionOfTimeFontSize:(double)arg6 clockCornerRadiusFractionOfHeight:(double)arg7 lineWidthFractionOfHeight:(double)arg8 lineCornerRadiusFractionOfHeight:(double)arg9 lineInsetFractionOfHeight:(double)arg10;

@end


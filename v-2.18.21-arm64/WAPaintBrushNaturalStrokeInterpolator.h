//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaintBrushStrokeInterpolator.h"

@class NSMutableArray;

@interface WAPaintBrushNaturalStrokeInterpolator : WAPaintBrushStrokeInterpolator
{
    float _smoothedSpeed;
    float _smoothedForce;
    NSMutableArray *_prevSamplesBuffer;
    _Bool _isPrevSamplesBufferFull;
    unsigned long long _prevSamplesBufferIndex;
    float _unitsPerPixel;
}

- (void).cxx_destruct;
-     // Error parsing type: v68@0:8^16^24^32f40f44f48f52^56f64, name: drawQuadraticCurveWithControlPointsP0:p1:p2:fromSpeed:toSpeed:fromForce:toForce:size:angle:
- (void)finalize;
- (_Bool)addPositionSample:(id)arg1 discardable:(_Bool)arg2;
-     // Error parsing type: @36@0:8^16f24@?28, name: initWithColor:pixelsPerUnit:handler:

@end


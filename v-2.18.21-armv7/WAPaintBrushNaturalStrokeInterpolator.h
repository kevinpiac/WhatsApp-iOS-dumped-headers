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
    BOOL _isPrevSamplesBufferFull;
    unsigned int _prevSamplesBufferIndex;
    float _unitsPerPixel;
}

- (void).cxx_destruct;
-     // Error parsing type: v44@0:4^8^12^16f20f24f28f32^36f40, name: drawQuadraticCurveWithControlPointsP0:p1:p2:fromSpeed:toSpeed:fromForce:toForce:size:angle:
- (void)finalize;
- (BOOL)addPositionSample:(id)arg1 discardable:(BOOL)arg2;
-     // Error parsing type: @20@0:4^8f12@?16, name: initWithColor:pixelsPerUnit:handler:

@end


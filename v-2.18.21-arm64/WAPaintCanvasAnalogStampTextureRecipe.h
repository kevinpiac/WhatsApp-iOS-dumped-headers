//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaintCanvasContentStampTextureRecipe.h"

@interface WAPaintCanvasAnalogStampTextureRecipe : WAPaintCanvasContentStampTextureRecipe
{
}

- (double)redrawInterval;
- (id)clockHandleAnglesInDegrees;
- (void)rotateContext:(struct CGContext *)arg1 withAngle:(double)arg2 atCenter:(struct CGPoint)arg3;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3 angle:(double)arg4 center:(struct CGPoint)arg5;
- (void)drawInContext:(struct CGContext *)arg1 ofSize:(struct CGSize)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaintBrush.h"

@interface WAPaintBrushStamp : WAPaintBrush
{
    Class _rendererClass;
    struct CGSize _aspectRatio;
}

+ (long long)type;
+ (unsigned long long)dataStride;
+ (_Bool)appliesRotation;
+ (_Bool)appliesColor;
+ (_Bool)supportsPicking;
+ (id)name;
- (struct CGSize)aspectRatio;
- (void)prepareEncoderForPicking:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 canvasIdentifier:(id)arg2 content:(id)arg3;
- (Class)rendererClass;

@end


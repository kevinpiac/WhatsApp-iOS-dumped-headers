//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIBezierPath, UIColor, WAShapeLayer;

@interface WAShapeView : UIView
{
}

+ (Class)layerClass;
@property(nonatomic) BOOL ignoresRemoveAllAnimations;
@property(retain, nonatomic) UIBezierPath *path;
@property(copy, nonatomic) NSString *lineCap;
@property(nonatomic) float lineWidth;
@property(retain, nonatomic) UIColor *strokeColor;
@property(retain, nonatomic) UIColor *fillColor;

// Remaining properties
@property(readonly, nonatomic) WAShapeLayer *layer; // @dynamic layer;

@end

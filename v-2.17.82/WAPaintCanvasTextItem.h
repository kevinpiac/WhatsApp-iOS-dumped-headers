//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont, WAPaintPositionSample;

@interface WAPaintCanvasTextItem : NSObject <NSCopying>
{
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    BOOL _needsUpdateTextStorage;
    BOOL _hasShadow;
    NSString *_text;
    NSDictionary *_textAttributes;
    float _angle;
    float _scale;
    float _layoutWidth;
    // Error parsing type: , name: _position
}

+ (id)allTextStyles;
@property(readonly, nonatomic) float layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float angle; // @synthesize angle=_angle;
// Error parsing type for property position:
// Property attributes: T,N,V_position

@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)makeTextKitObjectsIfNeeded;
- (void)updateTextStorageIfNeeded;
- (void)setNeedsUpdateTextStorage;
-     // Error parsing type: c16@0:4^8f12, name: hitTestWithPosition:fullCanvasAspectRatio:
-     // Error parsing type: v84@0:4{CGSize=ff}8{?=[3]}16{?={CGSize=ff}{CGPoint=ff}f}64, name: drawInContextOfSize:canvasSpaceToCropSpaceTransform:transformInfo:
- (void)drawInView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (struct CGSize)displaySizeInView:(id)arg1 transformInfo:(CDStruct_1a69c163)arg2 usedLayoutWidth:(out float *)arg3 fullDisplaySize:(out struct CGSize *)arg4;
@property(readonly, nonatomic) struct CGSize normalizedLayoutSize;
- (id)formattedAttributedString;
@property(readonly, nonatomic) WAPaintPositionSample *positionSample;
- (void)updateWithItem:(id)arg1;
- (BOOL)isEqualToTextItem:(id)arg1;
- (void)configureTextView:(id)arg1;
@property(retain, nonatomic) UIFont *textFont;
@property(retain, nonatomic) UIColor *textColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

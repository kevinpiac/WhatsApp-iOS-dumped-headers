//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WAPaintBrushContent : NSObject <NSCopying>
{
    NSString *_text;
    double _minimumInitialHeight;
}

+ (id)cellIdentifier;
@property(readonly, nonatomic) double minimumInitialHeight; // @synthesize minimumInitialHeight=_minimumInitialHeight;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
-     // Error parsing type: v100@0:8@16@24{CGSize=dd}32f48{?=[3]}52, name: addMetadataToDictionary:fromSample:renderSize:uncroppedAspectRatio:viewportTransform:
- (void)copyRefinementFrom:(id)arg1;
- (void)refineWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct CGSize sizeInPicker;
- (id)copyOfPreferredVariant;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *uniqueIdentifier;

@end


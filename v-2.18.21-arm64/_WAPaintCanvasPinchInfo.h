//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAPaintBrushRenderer, WAPaintCanvasTextItem, WAPaintPositionSample;

@interface _WAPaintCanvasPinchInfo : NSObject
{
    _Bool _snappingToAngle;
    _Bool _flaggedForDelete;
    unsigned int _index;
    long long _brushType;
    // Error parsing type: , name: _initialP0
    // Error parsing type: , name: _initialP1
    // Error parsing type: , name: _previousP0
    // Error parsing type: , name: _previousP1
    WAPaintPositionSample *_initialSample;
    WAPaintPositionSample *_baselineSample;
    WAPaintPositionSample *_currentSample;
    WAPaintPositionSample *_previousSample;
    double _previousTimestamp;
    WAPaintBrushRenderer *_renderer;
    WAPaintCanvasTextItem *_textItem;
    WAPaintCanvasTextItem *_initialTextItem;
}

@property(copy, nonatomic) WAPaintCanvasTextItem *initialTextItem; // @synthesize initialTextItem=_initialTextItem;
@property(retain, nonatomic) WAPaintCanvasTextItem *textItem; // @synthesize textItem=_textItem;
@property(nonatomic, getter=isFlaggedForDelete) _Bool flaggedForDelete; // @synthesize flaggedForDelete=_flaggedForDelete;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) WAPaintBrushRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) double previousTimestamp; // @synthesize previousTimestamp=_previousTimestamp;
@property(copy, nonatomic) WAPaintPositionSample *previousSample; // @synthesize previousSample=_previousSample;
@property(copy, nonatomic) WAPaintPositionSample *currentSample; // @synthesize currentSample=_currentSample;
@property(copy, nonatomic) WAPaintPositionSample *baselineSample; // @synthesize baselineSample=_baselineSample;
@property(copy, nonatomic) WAPaintPositionSample *initialSample; // @synthesize initialSample=_initialSample;
// Error parsing type for property previousP1:
// Property attributes: T,N,V_previousP1

// Error parsing type for property previousP0:
// Property attributes: T,N,V_previousP0

// Error parsing type for property initialP1:
// Property attributes: T,N,V_initialP1

// Error parsing type for property initialP0:
// Property attributes: T,N,V_initialP0

@property(nonatomic) long long brushType; // @synthesize brushType=_brushType;
@property(nonatomic, getter=isSnappingToAngle) _Bool snappingToAngle; // @synthesize snappingToAngle=_snappingToAngle;
- (void).cxx_destruct;
- (void)resetBaseline;
@property(readonly, nonatomic) _Bool needsSnapToAngle;
- (id)init;

@end


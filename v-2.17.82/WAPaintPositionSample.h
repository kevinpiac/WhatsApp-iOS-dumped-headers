//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface WAPaintPositionSample : NSObject <NSCopying>
{
    float _angle;
    float _touchForce;
    // Error parsing type: , name: _position
    // Error parsing type: , name: _size
    double _timestamp;
}

@property(nonatomic) float touchForce; // @synthesize touchForce=_touchForce;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float angle; // @synthesize angle=_angle;
// Error parsing type for property size:
// Property attributes: T,N,V_size

// Error parsing type for property position:
// Property attributes: T,N,V_position

- (void)updateWithPaintBlob:(CDStruct_37a3040a)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end


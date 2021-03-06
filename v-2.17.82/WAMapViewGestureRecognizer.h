//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class MKMapView, NSMutableArray, WAWeakTimer;

@interface WAMapViewGestureRecognizer : UIGestureRecognizer
{
    NSMutableArray *_touches;
    MKMapView *_mapView;
    double _altitudeVelocity;
    double _rotationalVelocity;
    struct CGPoint _translationalVelocity;
    BOOL _rotateToNorth;
    BOOL _headingWasNorthWhenTouchesBegan;
    BOOL _headingChangedSlightly;
    WAWeakTimer *_timer;
    BOOL _didMove;
    CDUnknownBlockType _willBeginGesture;
}

@property(copy, nonatomic) CDUnknownBlockType willBeginGesture; // @synthesize willBeginGesture=_willBeginGesture;
- (void).cxx_destruct;
- (double)degreesFromNorth;
- (void)updateInertiaTimer:(id)arg1;
- (BOOL)shouldRotateToNorth;
- (BOOL)haveInertia;
- (void)stopTouches:(id)arg1;
- (id)touchIndexes:(id)arg1;
- (void)moveCameraToAltitude:(double)arg1 heading:(double)arg2 centerCoordinate:(struct CLLocationCoordinate2D)arg3;
- (id)mapTouchesForUpdatedTouches:(id)arg1;
- (void)cancelDeceleration;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 mapView:(id)arg3;

@end


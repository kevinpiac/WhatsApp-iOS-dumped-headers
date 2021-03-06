//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MKMapViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAStaticPinControllerDelegate-Protocol.h"

@class CLGeocoder, CLLocation, CLPlacemark, MKMapCamera, MKMapView, MKUserLocation, NSArray, NSString, NSTimer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, WA2DMapButton, WAInfoButton, WAMapButtonContainer, WAStaticPinButton, WAUserTrackingButton;
@protocol MKMapViewDelegate><WAMapViewDelegate, WAStaticPinController;

@interface WAMapView : UIView <UIGestureRecognizerDelegate, MKMapViewDelegate, WAStaticPinControllerDelegate>
{
    CLGeocoder *_geocoder;
    CLLocation *_geocodeLocation;
    id <WAStaticPinController> _staticPinController;
    BOOL _showPinOnAnnotationDeselect;
    BOOL _locationDataReceived;
    BOOL _mapViewCallbackReceived;
    BOOL _processingCustomMapGesture;
    BOOL _animatingMapToUserLocation;
    CDStruct_02837cd9 _userLocationMapRect;
    MKMapCamera *_savedCamera;
    WAUserTrackingButton *_buttonUserTracking;
    WAStaticPinButton *_buttonStaticPin;
    WA2DMapButton *_button2DMap;
    WAInfoButton *_buttonInfo;
    UIPinchGestureRecognizer *_pinchGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    UITapGestureRecognizer *_doubleFingerTapGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    UIPanGestureRecognizer *_panGesture;
    struct CGPoint _lastPanTranslation;
    MKMapCamera *_initialMapCamera;
    NSTimer *_decelerationTimer;
    BOOL _disableRecenterDefaultLocation;
    UIView *_shade;
    int _geocodingCount;
    WAMapButtonContainer *_viewMapButtons;
    BOOL _map3DModeEnabled;
    BOOL _staticPinEnabled;
    BOOL _mapMovedByUser;
    BOOL _tracksUserLocation;
    BOOL _showsInfoButton;
    BOOL _hideStaticPinCalloutWhileGeocoding;
    id <MKMapViewDelegate><WAMapViewDelegate> _delegate;
    CLPlacemark *_geocodePlacemark;
    MKMapView *_mapView;
    struct UIEdgeInsets _mapInset;
}

+ (BOOL)advancedMapControlsSupported;
@property(nonatomic) BOOL hideStaticPinCalloutWhileGeocoding; // @synthesize hideStaticPinCalloutWhileGeocoding=_hideStaticPinCalloutWhileGeocoding;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) CLPlacemark *geocodePlacemark; // @synthesize geocodePlacemark=_geocodePlacemark;
@property(nonatomic) BOOL showsInfoButton; // @synthesize showsInfoButton=_showsInfoButton;
@property(nonatomic) BOOL tracksUserLocation; // @synthesize tracksUserLocation=_tracksUserLocation;
@property(nonatomic) __weak id <MKMapViewDelegate><WAMapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets mapInset; // @synthesize mapInset=_mapInset;
@property(nonatomic) BOOL mapMovedByUser; // @synthesize mapMovedByUser=_mapMovedByUser;
@property(nonatomic, getter=isStaticPinEnabled) BOOL staticPinEnabled; // @synthesize staticPinEnabled=_staticPinEnabled;
@property(nonatomic, getter=isMap3DModeEnabled) BOOL map3DModeEnabled; // @synthesize map3DModeEnabled=_map3DModeEnabled;
@property(readonly, nonatomic) UIView *viewMapButtons; // @synthesize viewMapButtons=_viewMapButtons;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)staticPinControllerCalloutTapped:(id)arg1;
- (void)staticPinControllerPinDropped:(id)arg1;
- (void)staticPinButtonAction:(id)arg1;
@property(nonatomic) BOOL staticPinIgnoresInsets;
@property(nonatomic) struct CGPoint staticPinPosition;
- (void)setStaticPinHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isStaticPinHidden) BOOL staticPinHidden;
- (void)shadeTapped:(id)arg1;
- (void)adjustCalloutViewForAnnotationView:(id)arg1;
- (void)didReverseGeocodeCurrentLocation:(id)arg1 duration:(double)arg2;
- (void)startReverseGeocodingForCurrentLocation;
@property(readonly, nonatomic) BOOL isGeocoding;
- (BOOL)staticPinReadyForCallout;
- (void)changeUserTrackingModeAction:(id)arg1;
- (void)infoButtonAction:(id)arg1;
- (void)updateUserTrackingState;
- (void)reloadStateOfUserTrackingButton;
- (id)viewForAnnotation:(id)arg1;
@property(readonly, nonatomic) CDStruct_26e8d939 region;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) unsigned int mapType;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(BOOL)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)visibleMapRect;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSArray *selectedAnnotations;
- (void)addAnnotations:(id)arg1;
@property(readonly, nonatomic) NSArray *annotations;
- (void)addAnnotation:(id)arg1;
@property(nonatomic) BOOL showsUserLocation;
@property(readonly, nonatomic) MKUserLocation *userLocation;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleDoubleFingerTapGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)cancelDeceleration:(BOOL)arg1;
- (BOOL)isDecelerating;
- (void)decelerationTimer:(id)arg1;
- (void)decelerateMapWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)handleRotationGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)reloadGestureRecognizers;
- (void)reload3DMapButtonVisibilityAndState;
- (void)resetPitch:(id)arg1;
- (void)setShows3DMap:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isShowing3DMap;
- (void)restoreMapRegionAnimated:(BOOL)arg1 zoomToAnnotations:(id)arg2;
- (void)saveMapRegion;
- (void)setMapInset:(struct UIEdgeInsets)arg1 moveMap:(BOOL)arg2;
- (void)zoomToUserLocationAnimated:(BOOL)arg1 resetZoomLevel:(BOOL)arg2;
- (CDStruct_c3b9c2ee)staticPinPoint;
- (struct CLLocationCoordinate2D)centerCoordinateForLocation:(struct CLLocationCoordinate2D)arg1 givenSize:(CDStruct_c3b9c2ee)arg2;
- (struct CLLocationCoordinate2D)centerCoordinateForUserLocationGivenSize:(CDStruct_c3b9c2ee)arg1;
- (void)zoomToLocation:(id)arg1 radius:(double)arg2;
- (void)setMapButtonsHidden:(BOOL)arg1;
- (void)enterStickerMode;
- (void)sendCenterPinLocation;
- (void)setStaticPinAlpha:(float)arg1;
- (BOOL)shouldHaveStaticPinButton;
- (BOOL)useNewStaticPin;
- (BOOL)instantDrag;
- (id)wa_userLocationView;
- (void)layoutSubviews;
- (float)sideButtonInset;
- (float)topButtonInset;
- (BOOL)topAlignButtons;
@property(readonly, nonatomic) float buttonsHeight;
- (void)map2dButtonWillToggle;
- (void)add2DButton;
- (void)configure;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


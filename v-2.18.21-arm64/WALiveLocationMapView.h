//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKMapView.h>

#import "MKMapViewDelegate-Protocol.h"

@class MKCompassButton, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, WAFriendLiveLocationAnnotation, WAStickyClusterCollection;
@protocol MKMapViewDelegate, WALiveLocationMapViewDelegate;

@interface WALiveLocationMapView : MKMapView <MKMapViewDelegate>
{
    _Bool _needsUpdate;
    WAStickyClusterCollection *_clusterCollection;
    double _previousZoomScale;
    NSArray *_clusters;
    NSMutableArray *_animatingAnnotations;
    NSMutableArray *_groupsToBounce;
    NSMutableArray *_movingAnnotations;
    NSMutableDictionary *_hiddenAnnotations;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } _previousSpan;
    MKMapView *_shadowMap;
    NSObject *_setRegionRequest;
    struct CGPoint _groupAnnotationViewHotspotOffset;
    MKCompassButton *_compass;
    _Bool _animating;
    _Bool _updateWhenAnimationCompletes;
    _Bool _hideUserLocation;
    _Bool _disableUpdates;
    _Bool _animationsCanceled;
    id <WALiveLocationMapViewDelegate> _liveMapViewDelegate;
    NSMutableArray *_unfilteredAnnotations;
    WAFriendLiveLocationAnnotation *_ungroupableAnnotation;
    id <MKMapViewDelegate> _realDelegate;
    CDUnknownBlockType _postUpdateBlock;
    long long _retriesLeft;
    struct CLLocationCoordinate2D _autoscaleAnchor;
    struct CGPoint _annotationCenterOffset;
    struct UIEdgeInsets _edgePadding;
}

@property(nonatomic) long long retriesLeft; // @synthesize retriesLeft=_retriesLeft;
@property(readonly, nonatomic) _Bool animationsCanceled; // @synthesize animationsCanceled=_animationsCanceled;
@property(nonatomic) _Bool disableUpdates; // @synthesize disableUpdates=_disableUpdates;
@property(copy, nonatomic) CDUnknownBlockType postUpdateBlock; // @synthesize postUpdateBlock=_postUpdateBlock;
@property(nonatomic) __weak id <MKMapViewDelegate> realDelegate; // @synthesize realDelegate=_realDelegate;
@property(nonatomic) struct CGPoint annotationCenterOffset; // @synthesize annotationCenterOffset=_annotationCenterOffset;
@property(nonatomic) struct UIEdgeInsets edgePadding; // @synthesize edgePadding=_edgePadding;
@property(nonatomic) struct CLLocationCoordinate2D autoscaleAnchor; // @synthesize autoscaleAnchor=_autoscaleAnchor;
@property(nonatomic) _Bool hideUserLocation; // @synthesize hideUserLocation=_hideUserLocation;
@property(nonatomic) _Bool updateWhenAnimationCompletes; // @synthesize updateWhenAnimationCompletes=_updateWhenAnimationCompletes;
@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) WAFriendLiveLocationAnnotation *ungroupableAnnotation; // @synthesize ungroupableAnnotation=_ungroupableAnnotation;
@property(retain, nonatomic) NSMutableArray *unfilteredAnnotations; // @synthesize unfilteredAnnotations=_unfilteredAnnotations;
@property(nonatomic) __weak id <WALiveLocationMapViewDelegate> liveMapViewDelegate; // @synthesize liveMapViewDelegate=_liveMapViewDelegate;
- (void).cxx_destruct;
- (void)destroyGroupsWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2;
- (void)joinGroupToGroupWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2 jidToNewIDMap:(id)arg3 idToNewClusterMap:(id)arg4;
- (void)joinSingletonToGroupWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2 jidToNewIDMap:(id)arg3 idToNewClusterMap:(id)arg4;
- (void)splitSingletonsFromGroupsWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2 idToNewClusterMap:(id)arg3;
- (void)splitGroupsFromGroupsWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2 jidToOldIDMap:(id)arg3 jidToNewIDMap:(id)arg4 idToOldClusterMap:(id)arg5 idToNewClusterMap:(id)arg6;
- (void)createGroupsWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2 jidToOldIDMap:(id)arg3 idToOldClusterMap:(id)arg4 idToNewClusterMap:(id)arg5;
- (void)destroyExistingSingletonsWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2;
- (void)moveAndUpdateSurvivingGroupsWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2 jidToOldIDMap:(id)arg3 jidToNewIDMap:(id)arg4 idToNewClusterMap:(id)arg5;
- (void)moveExistingSingletonsWithTransitions:(id)arg1 existingAnnotationMap:(id)arg2 idToNewClusterMap:(id)arg3;
- (void)createNewSingletonsWithTransitions:(id)arg1 newAnnotationMap:(id)arg2 existingAnnotationMap:(id)arg3 idToNewClusterMap:(id)arg4;
- (void)addSingleton:(id)arg1 cluster:(struct WACluster *)arg2;
- (void)moveSingletonAnnotation:(id)arg1 toCoordinate:(struct CLLocationCoordinate2D)arg2 existingAnnotationMap:(id)arg3 idToNewClusterMap:(id)arg4;
- (void)updateIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateIfNeeded;
- (id)groupIDsForClusters:(id)arg1;
- (id)annotationMapForClusters:(id)arg1;
- (id)existingAnnotationMap;
- (void)moveAnnotations;
- (void)updateCoordinateOfCluster:(struct WACluster *)arg1;
- (void)setNeedsUpdate:(_Bool)arg1;
- (id)clusterableAnnotationForJID:(id)arg1;
@property(readonly, nonatomic) double zoomScale;
- (void)setHighlightedAnnotation:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (_Bool)jidIsGrouped:(id)arg1;
- (void)selectUnfilteredAnnotation:(id)arg1;
- (_Bool)regionIsCloseTo:(CDStruct_26e8d939)arg1;
- (_Bool)shouldRetryRequest:(id)arg1 withDesiredRegion:(CDStruct_26e8d939)arg2;
- (void)setInsetRegion:(CDStruct_26e8d939)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateShadowMap;
- (struct UIEdgeInsets)effectiveInsets;
- (void)setInsetRegion:(CDStruct_02837cd9)arg1 minimumSize:(double)arg2 mayZoomOut:(_Bool)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showAnnotations:(id)arg1 minimumSize:(double)arg2 mayZoomOut:(_Bool)arg3 excludeHidden:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cancelAnimations;
- (void)showAnnotations:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAnnotationCleverly:(id)arg1;
- (void)showUnfilteredAnnotations:(id)arg1 animated:(_Bool)arg2;
- (void)removeUnfilteredAnnotation:(id)arg1;
- (id)annotationForGroupMostSimilarTo:(id)arg1;
- (void)addUnfilteredAnnotation:(id)arg1;
- (void)removeOrHideAnnotations:(id)arg1;
- (void)hideGroupedAnnotation:(id)arg1;
- (void)sanityCheckAddAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)assertDoNotHaveAnnotationLike:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (_Bool)tryToUnhideAnnotation:(id)arg1;
- (void)willMoveUnfilteredAnnotation:(id)arg1;
- (id)unfilteredAnnotationForJID:(id)arg1;
- (void)refreshUnfilteredAnnotation:(id)arg1;
- (void)animateUpdatesWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAnnotationsForRegionChangeIfNeeded;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)wa_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


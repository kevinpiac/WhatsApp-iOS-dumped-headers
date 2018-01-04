//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "WACardNavigationControllerDelegate-Protocol.h"
#import "WALiveLocationMenuTableViewControllerDelegate-Protocol.h"
#import "WALiveLocationTableViewControllerDelegate-Protocol.h"
#import "WALocationSearchDelegate-Protocol.h"
#import "WAMapViewDelegate-Protocol.h"
#import "WAShareLocationTableViewDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSArray, NSDate, NSString, UIBarButtonItem, UISearchBar, UISearchController, UIView, WACardNavigationController, WAChatSession, WADialogView, WAFriendLocationAnnotation, WALiveLocationShareSettings, WALocationManagerAuthRequester, WALocationSearch, WAMapTypeSegmentedControl, WANavigationBarTitleView, WAShareLocationMapView, WAShareLocationTableViewController, WAShareLocationView, WATimer, WamEventLocationPicker;
@protocol WAShareLocationControllerDelegate><WALiveLocationSender;

@interface WAShareLocationController : WAViewController <CLLocationManagerDelegate, MKMapViewDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, WACardNavigationControllerDelegate, WALiveLocationMenuTableViewControllerDelegate, WALiveLocationTableViewControllerDelegate, WALocationSearchDelegate, WAMapViewDelegate, WAShareLocationTableViewDelegate>
{
    WamEventLocationPicker *_fieldStats;
    double _elapsedTime;
    double _controllerLoadedTime;
    CLLocationManager *_locationManager;
    BOOL _goodLocationReceived;
    WATimer *_staleTimer;
    CLLocation *_lastUpdatedLocation;
    BOOL _isFallBack;
    BOOL _zoomToPlacesWhenMapExpands;
    WACardNavigationController *_cardNavigationController;
    WAShareLocationTableViewController *_tableViewController;
    WALiveLocationShareSettings *_liveLocationSettings;
    WALocationSearch *_locationSearch;
    BOOL _inPinDragMode;
    WAFriendLocationAnnotation *_meAnnotation;
    BOOL _wantsMeAnnotation;
    WAChatSession *_chatSession;
    UIView *_mentionsSelectorContainer;
    WAShareLocationView *_rootView;
    WADialogView *_newUserExperienceDialogView;
    BOOL _canSearch;
    BOOL _havePerformedInitialSearch;
    NSArray *_portraitConstraints;
    NSArray *_landscapeConstraints;
    UISearchController *_searchController;
    WANavigationBarTitleView *_titleView;
    int _entrypoint;
    BOOL _wasInPinDragModeBeforeEnteringLandscapeMode;
    BOOL _keyboardIsVisible;
    NSDate *_lastGeocodedDate;
    BOOL _showLiveLocationCardImmediately;
    id <WAShareLocationControllerDelegate><WALiveLocationSender> _delegate;
    UISearchBar *_searchBar;
    UIView *_viewMapContainer;
    WAShareLocationMapView *_mapView;
    UIView *_horizontalMapDivider;
    UIView *_verticalMapDivider;
    WAMapTypeSegmentedControl *_scMapType;
    UIBarButtonItem *_barButtonCancel;
    UIBarButtonItem *_barButtonRefresh;
    WALocationManagerAuthRequester *_locationAuthRequester;
    WALocationManagerAuthRequester *_locationAlwaysAuthRequester;
}

+ (id)newNewUserExperienceViewControllerWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) WALocationManagerAuthRequester *locationAlwaysAuthRequester; // @synthesize locationAlwaysAuthRequester=_locationAlwaysAuthRequester;
@property(retain, nonatomic) WALocationManagerAuthRequester *locationAuthRequester; // @synthesize locationAuthRequester=_locationAuthRequester;
@property(retain, nonatomic) UIBarButtonItem *barButtonRefresh; // @synthesize barButtonRefresh=_barButtonRefresh;
@property(retain, nonatomic) UIBarButtonItem *barButtonCancel; // @synthesize barButtonCancel=_barButtonCancel;
@property(retain, nonatomic) WAMapTypeSegmentedControl *scMapType; // @synthesize scMapType=_scMapType;
@property(retain, nonatomic) UIView *verticalMapDivider; // @synthesize verticalMapDivider=_verticalMapDivider;
@property(retain, nonatomic) UIView *horizontalMapDivider; // @synthesize horizontalMapDivider=_horizontalMapDivider;
@property(retain, nonatomic) WAShareLocationMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIView *viewMapContainer; // @synthesize viewMapContainer=_viewMapContainer;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) BOOL showLiveLocationCardImmediately; // @synthesize showLiveLocationCardImmediately=_showLiveLocationCardImmediately;
@property(nonatomic) __weak id <WAShareLocationControllerDelegate><WALiveLocationSender> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)liveLocationMenuWillDismiss;
- (void)liveLocationMenuDidSelectShareLiveLocation;
- (void)liveLocationMenuMapTypeDidChange:(unsigned int)arg1;
- (void)locationSearchDidSelectSearchHistoryEntry:(id)arg1;
- (id)locationSearchLastUpdatedLocation;
- (void)locationSearchSetAttribution:(unsigned int)arg1;
- (id)locationSearchFieldStats;
- (CDStruct_26e8d939)locationSearchRegion;
- (void)locationSearchCommitFieldStats;
- (void)locationSearchAggregateTimeAndCommitFieldStats;
- (void)locationSearchDidCompleteWithAdditions:(id)arg1 removals:(id)arg2 previousCount:(unsigned int)arg3 moreAvailable:(BOOL)arg4;
- (void)cardNavigationControllerDidPopLastViewController:(id)arg1;
- (void)cardNavigationController:(id)arg1 opaqueFrameDidChange:(struct CGRect)arg2;
- (void)liveLocationDidCompleteWithSend:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePinDragMode;
- (void)shareLocationDidEndDecelerating;
- (void)shareLocationDidEndDragging;
- (void)shareLocationWillBeginDragging;
- (BOOL)shareLocationShouldAutoExpand;
- (void)shareLocationDidSelectAccessoryForPlaceAtIndex:(int)arg1;
- (void)shareLocationDidSelectPlaceAtIndex:(int)arg1;
- (void)shareLocationDidSelectSendLiveLocation;
- (BOOL)canShareLiveLocation;
- (void)shareLocationDidSelectSendCurrentLocation;
- (void)cardNavigationController:(id)arg1 didMoveCardTo:(struct CGRect)arg2;
- (id)shareLocationSearchQuery;
- (void)shareLocationLoadMoreResults;
- (id)shareLocationPlaces;
- (void)shareLocationDidSelectAttribution:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)mapViewDidCancelInfoPanel:(id)arg1;
- (void)mapViewDidSelectInfoButton:(id)arg1;
- (void)mapViewDidReverseGeocodeCurrentLocation:(id)arg1;
- (void)mapViewWillReverseGeocodeCurrentLocation;
- (void)mapViewDidFinishCrossFadeAnimation;
- (void)mapViewDidLiftStaticPin:(id)arg1;
- (void)mapView:(id)arg1 didSelectLocation:(id)arg2;
- (void)mapView:(id)arg1 didSelectPlacemark:(id)arg2 location:(id)arg3;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 didSelectPlace:(id)arg2;
- (void)wa_applicationWillEnterForeground;
- (void)wa_applicationDidEnterBackground;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)exitPinDragMode;
- (void)enterPinDragMode;
- (void)cancelController;
- (void)finishControllerWithWAPlace:(id)arg1;
- (void)showDetailsForWAPlace:(id)arg1;
- (void)refreshAction:(id)arg1;
- (void)configureLocationSearch;
- (double)visibleRadius;
- (void)cancelAction:(id)arg1;
- (void)mapTypeChangedAction:(id)arg1;
- (void)collapseTableView:(id)arg1;
- (void)showNewUserExperienceIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentCannotShareAlert;
- (void)presentFailedToGetLocationAlert;
- (void)setAccuracyStr:(id)arg1;
- (void)setAttribution:(id)arg1;
- (void)startLocationUpdatesIfNecessary;
- (void)checkStateOfLocationServices;
- (void)processLocationError:(id)arg1;
- (void)processUpdatedLocation:(id)arg1;
- (void)searchUsingBestKnownLocation;
- (void)setAppleAttribution;
- (void)setFacebookAttribution;
- (void)setFoursquareAttribution;
- (void)didReceiveBackgroundLocationAuthorization:(BOOL)arg1;
- (void)showLiveLocationCardAnimated:(BOOL)arg1;
- (void)addMeAnnotationIfPossible;
- (void)sendStaticLocation;
- (void)updateNavigationBarForOrientation:(int)arg1 showingLiveLocationCard:(BOOL)arg2;
- (BOOL)showingLiveLocationCard;
- (id)liveLocationTableViewControllerIfTopmost;
- (void)updateLayoutForCurrentOrientation;
- (void)layoutMap;
- (BOOL)rtl;
- (float)yOrigin;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)activateLandscapeConstraints:(BOOL)arg1;
- (void)activatePortraitConstraints:(BOOL)arg1;
- (void)updateConstraintsForCurrentOrientation;
- (void)updateStaticPinPosition;
- (BOOL)landscapeMode;
- (void)viewDidLoad;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithShareDelegate:(id)arg1 chatSession:(id)arg2 entrypoint:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

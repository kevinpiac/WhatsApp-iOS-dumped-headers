//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CLGeocoder, CLLocation, NSArray, NSMutableArray, NSMutableSet, NSString, UISearchDisplayController, WAPlace;
@protocol WALocationSearchDelegate, WALocationSearchEngine;

@interface WALocationSearch : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_nextResultsPageURLString;
    unsigned long long _defaultSource;
    NSMutableSet *_cachesCreatedThisSession;
    _Bool _moreResultsAvailable;
    NSMutableArray *_searchHistory;
    id <WALocationSearchEngine> _searchEngine;
    WAPlace *_boostedPlace;
    CLGeocoder *_geocoder;
    _Bool _requestInProgress;
    _Bool _desireTransparentIconBackgrounds;
    _Bool _boostCity;
    id <WALocationSearchDelegate> _delegate;
    UISearchDisplayController *_searchDisplayController;
    CLLocation *_searchLocation;
    double _searchRadius;
    NSArray *_places;
    NSString *_placeSearchCriteria;
}

@property(nonatomic) _Bool boostCity; // @synthesize boostCity=_boostCity;
@property(nonatomic) _Bool desireTransparentIconBackgrounds; // @synthesize desireTransparentIconBackgrounds=_desireTransparentIconBackgrounds;
@property(readonly, nonatomic) _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(copy, nonatomic) NSString *placeSearchCriteria; // @synthesize placeSearchCriteria=_placeSearchCriteria;
@property(copy, nonatomic) NSArray *places; // @synthesize places=_places;
@property(nonatomic) double searchRadius; // @synthesize searchRadius=_searchRadius;
@property(retain, nonatomic) CLLocation *searchLocation; // @synthesize searchLocation=_searchLocation;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(nonatomic) __weak id <WALocationSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) long long minSearchDistanceNoQuery;
- (void)addSearchHistoryItem:(id)arg1;
- (void)produceResults:(id)arg1 add:(_Bool)arg2 cache:(_Bool)arg3 moreAvailable:(_Bool)arg4;
- (void)useFallbackForSource:(unsigned long long)arg1 submitFailure:(_Bool)arg2;
- (_Bool)searchCache:(id)arg1;
- (void)processSearchResultsWithAttribution:(unsigned long long)arg1 error:(id)arg2 places:(id)arg3 nextResultsPageURLString:(id)arg4;
- (void)fetchNextPage;
- (void)searchWithEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchWithEngine:(id)arg1 group:(id)arg2;
- (void)searchWithFoursquare:(id)arg1;
- (void)searchWithFacebook:(id)arg1;
- (void)searchWithApple:(id)arg1;
- (id)fullPathToSearchHistoryFile;
- (void)searchWithCriteria:(id)arg1;
- (id)placeForPlacemark:(id)arg1 location:(id)arg2;
- (void)searchWithLocation:(id)arg1;
- (id)dispatchGroupForNewReverseGeocodeSearchOnLocation:(id)arg1;
- (void)searchForPlaces;
- (void)loadMoreResults;
- (void)removeAllResults;
- (void)stopPlaceSearch;
- (void)invalidateResults;
- (void)abandonSearch;
- (void)loadDefaultSource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


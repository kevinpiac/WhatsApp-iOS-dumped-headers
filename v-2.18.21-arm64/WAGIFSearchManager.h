//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, WAGIFAssetCollection, WAGIFSearch, WAGIFSearchView, WALabel;
@protocol WAGIFSearchManagerDelegate;

@interface WAGIFSearchManager : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UISearchBarDelegate>
{
    WAGIFSearchView *_GIFSearchView;
    WAGIFSearch *_search;
    WAGIFAssetCollection *_GIFs;
    WAGIFAssetCollection *_presetGIFs;
    UIActivityIndicatorView *_loadingView;
    WALabel *_errorLabel;
    id <WAGIFSearchManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAGIFSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)searchQueryWithText:(id)arg1;
- (void)presentGIFs:(id)arg1;
@property(readonly, nonatomic) WAGIFSearchView *inputAccessoryView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


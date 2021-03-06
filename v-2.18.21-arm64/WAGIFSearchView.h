//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UICollectionView, UISearchBar;
@protocol WAGIFSearchViewDelegate;

@interface WAGIFSearchView : UIView
{
    id <WAGIFSearchViewDelegate> _delegate;
    UISearchBar *_searchBar;
    UICollectionView *_collectionView;
    UIButton *_cancelButton;
}

@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <WAGIFSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
- (void)layoutSubviews;
- (_Bool)translatesAutoresizingMaskIntoConstraints;

@end


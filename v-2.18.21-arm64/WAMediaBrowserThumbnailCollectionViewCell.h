//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, UIImageView, UIView;
@protocol WAMediaBrowserThumbnailCollectionViewCellDelegate;

@interface WAMediaBrowserThumbnailCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIView *_containerView;
    _Bool _expanded;
    double _offset;
    NSIndexPath *_lastIndexPath;
    id <WAMediaBrowserThumbnailCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WAMediaBrowserThumbnailCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (_Bool)isPointInVisibleArea:(struct CGPoint)arg1;
- (void)applyLayoutAttributes:(id)arg1;
@property(readonly, nonatomic) double expandedWidth;
- (void)layoutSubviews;
- (void)loadContentsIfNeeded;
- (void)setImage:(id)arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect)arg1;

@end


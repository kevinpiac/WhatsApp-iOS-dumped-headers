//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface WAMediaBrowserCollectionView : UICollectionView
{
    BOOL _ignoresSetContentOffset;
}

@property(nonatomic) BOOL ignoresSetContentOffset; // @synthesize ignoresSetContentOffset=_ignoresSetContentOffset;
- (void)accessibilityApplyScrollContent:(struct CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setContentOffset:(struct CGPoint)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAAssetCollection;
@protocol OS_dispatch_group, WAMediaPickerAlbumControllerDelegate;

@interface WAMediaPickerAlbumController : NSObject
{
    unsigned int _mediaTypes;
    WAAssetCollection *_assetCollection;
    NSObject<OS_dispatch_group> *_loadingDispatchGroup;
    BOOL _albumLoadingInProgress;
    BOOL _needsReload;
    BOOL _automaticallyReloadWhenInvalidated;
    id <WAMediaPickerAlbumControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAMediaPickerAlbumControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL automaticallyReloadWhenInvalidated; // @synthesize automaticallyReloadWhenInvalidated=_automaticallyReloadWhenInvalidated;
@property(readonly, nonatomic) WAAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (unsigned int)indexOfAssetWithIdentifier:(id)arg1;
- (void)reloadAlbumWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isAlbumReady;
- (void)invalidate;
- (void)setNeedsReload;
- (id)initWithAssetCollection:(id)arg1 mediaTypes:(unsigned int)arg2;

@end


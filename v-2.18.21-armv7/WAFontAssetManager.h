//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAAssetManagerDelegate-Protocol.h"

@class NSString, WAAssetManager, WAAssetMetadataManager, WAPersistentKeyValueStore;

@interface WAFontAssetManager : NSObject <WAAssetManagerDelegate>
{
    WAAssetMetadataManager *_metadataManager;
    WAPersistentKeyValueStore *_keyValueStore;
    WAAssetManager *_assetManager;
    CDUnknownBlockType _backgroundURLSessionCompletionHandler;
}

+ (id)keyValueStorageURL;
+ (id)backgroundURLSessionConfiguration;
- (void).cxx_destruct;
- (void)assetManagerDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)downloadFontWithName:(id)arg1 url:(id)arg2;
- (void)downloadFontWithName:(id)arg1;
- (BOOL)registerFontWithName:(id)arg1;
- (void)handleEventsForBackgroundURLSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


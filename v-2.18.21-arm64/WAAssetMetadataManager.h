//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface WAAssetMetadataManager : NSObject
{
    NSString *_domain;
}

- (void).cxx_destruct;
- (_Bool)insertMetadata:(id)arg1 forIdentifier:(id)arg2;
- (id)fetchMetadataForIdentifier:(id)arg1;
- (void)deleteMetadataKeys:(id)arg1;
@property(readonly, nonatomic) NSSet *allMetadataKeys;
- (void)downloadFinishedWithResponse:(id)arg1 assetId:(id)arg2;
- (id)updateURLRequest:(id)arg1 forAssetId:(id)arg2;
- (_Bool)shouldDownloadAssetWithId:(id)arg1 assetAvailable:(_Bool)arg2;
- (id)initWithDomain:(id)arg1;

@end

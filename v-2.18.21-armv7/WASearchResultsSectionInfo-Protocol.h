//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol WASearchResultsSectionInfo
@property(readonly, nonatomic) Class objectClass;
@property(readonly, nonatomic) unsigned int objectType;
@property(readonly, nonatomic) BOOL allObjectsLoaded;
@property(readonly, nonatomic, getter=isLoadingObjects) BOOL loadingObjects;
@property(readonly, copy, nonatomic) NSArray *objects;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (id)objectAtIndex:(unsigned int)arg1;
@end

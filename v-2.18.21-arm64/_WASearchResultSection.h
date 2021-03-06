//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WASearchResultsSectionInfo-Protocol.h"

@class NSArray, NSString;

@interface _WASearchResultSection : NSObject <WASearchResultsSectionInfo>
{
    NSArray *_objects;
    _Bool _allObjectsLoaded;
    _Bool _loadingObjects;
    NSString *_localizedTitle;
    unsigned long long _objectType;
    Class _objectClass;
    double _searchTime;
}

@property(nonatomic) double searchTime; // @synthesize searchTime=_searchTime;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly, nonatomic) unsigned long long objectType; // @synthesize objectType=_objectType;
@property(nonatomic, getter=isLoadingObjects) _Bool loadingObjects; // @synthesize loadingObjects=_loadingObjects;
@property(nonatomic) _Bool allObjectsLoaded; // @synthesize allObjectsLoaded=_allObjectsLoaded;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (unsigned long long)replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)addObjects:(id)arg1;
- (id)removeInvalidRows;
- (id)chatSessionFor:(id)arg1;
- (_Bool)isObjectValid:(id)arg1;
- (id)initWithObjectType:(unsigned long long)arg1;

@end


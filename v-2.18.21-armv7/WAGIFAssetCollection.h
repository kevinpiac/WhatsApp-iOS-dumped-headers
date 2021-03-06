//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, WAGIFBatchToken;

@interface WAGIFAssetCollection : NSObject
{
    NSMutableArray *_assets;
    int _startIndexOfLastBatch;
    NSMutableIndexSet *_modifiedRows;
    NSMutableIndexSet *_insertedRows;
    int _rowSize;
    BOOL _loading;
    BOOL _noMoreResults;
    WAGIFBatchToken *_nextBatchToken;
    int _numberOfBatches;
}

@property(readonly, nonatomic) NSIndexSet *insertedRows; // @synthesize insertedRows=_insertedRows;
@property(readonly, nonatomic) NSIndexSet *modifiedRows; // @synthesize modifiedRows=_modifiedRows;
@property(readonly, nonatomic) int numberOfBatches; // @synthesize numberOfBatches=_numberOfBatches;
@property(readonly, nonatomic) BOOL noMoreResults; // @synthesize noMoreResults=_noMoreResults;
@property(nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) WAGIFBatchToken *nextBatchToken; // @synthesize nextBatchToken=_nextBatchToken;
- (void).cxx_destruct;
- (int)rankOfIndex:(id)arg1;
- (int)numberOfAssetsInRow:(int)arg1;
@property(readonly, nonatomic) unsigned int numberOfRows;
- (BOOL)indexNearEnd:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)removeAllAssets;
- (id)assetAtIndex:(id)arg1;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)initWithRowSize:(int)arg1;

@end


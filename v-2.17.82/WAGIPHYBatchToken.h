//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAGIFBatchToken.h"

@interface WAGIPHYBatchToken : WAGIFBatchToken
{
    int _value;
    unsigned int _batchSize;
}

+ (id)firstBatch;
- (BOOL)isFirstBatch;
- (id)stringValue;
- (id)initWithInteger:(int)arg1 batchSize:(unsigned int)arg2;

@end


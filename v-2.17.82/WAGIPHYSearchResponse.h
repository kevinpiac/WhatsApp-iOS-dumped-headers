//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAGIFSearchResponse-Protocol.h"

@class NSArray, NSString, NSURLResponse, WAGIFBatchToken;

@interface WAGIPHYSearchResponse : NSObject <WAGIFSearchResponse>
{
    NSArray *_gifs;
    WAGIFBatchToken *_batchToken;
    WAGIFBatchToken *_nextBatchToken;
    NSURLResponse *_urlResponse;
}

+ (id)batchInJSON:(id)arg1 batchSize:(unsigned int)arg2;
+ (id)gifsInJSON:(id)arg1;
@property(readonly, nonatomic) NSURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(readonly, nonatomic) WAGIFBatchToken *nextBatchToken; // @synthesize nextBatchToken=_nextBatchToken;
@property(readonly, nonatomic) WAGIFBatchToken *batchToken; // @synthesize batchToken=_batchToken;
@property(readonly, nonatomic) NSArray *gifs; // @synthesize gifs=_gifs;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1 response:(id)arg2 batchSize:(unsigned int)arg3 batchToken:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

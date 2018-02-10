//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WASearchEngineRestriction-Protocol.h"

@class NSString;

@interface WASearchEngineMinimumScoreRestriction : NSObject <WASearchEngineRestriction>
{
    float _minimumScore;
}

@property(readonly, nonatomic) float minimumScore; // @synthesize minimumScore=_minimumScore;
- (id)arguments;
- (id)queryClause;
- (id)initWithMinimumScore:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSRegularUploadTaskResult.h"

@class WAMMSTaskMetrics;

@interface WAMMSUploadResumeCheckTaskResult : WAMMSRegularUploadTaskResult
{
    BOOL _complete;
    int _offset;
    WAMMSTaskMetrics *_metrics;
}

@property(retain, nonatomic) WAMMSTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(nonatomic) int offset; // @synthesize offset=_offset;
- (void).cxx_destruct;

@end

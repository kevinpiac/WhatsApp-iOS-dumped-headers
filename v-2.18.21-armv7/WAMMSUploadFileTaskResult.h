//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSRegularUploadTaskResult.h"

@class NSData, WAMMSUploadFileTaskMetrics, WAMediaCipher;

@interface WAMMSUploadFileTaskResult : WAMMSRegularUploadTaskResult
{
    WAMediaCipher *_mediaCipher;
    NSData *_responseData;
    WAMMSUploadFileTaskMetrics *_metrics;
}

@property(retain, nonatomic) WAMMSUploadFileTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(copy, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) WAMediaCipher *mediaCipher; // @synthesize mediaCipher=_mediaCipher;
- (void).cxx_destruct;

@end


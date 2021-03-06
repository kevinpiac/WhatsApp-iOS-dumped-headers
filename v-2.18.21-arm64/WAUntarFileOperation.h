//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASynchronousBackupOperation.h"

@class NSNumber, NSString;

@interface WAUntarFileOperation : WASynchronousBackupOperation
{
    _Bool _succeeded;
    NSString *_destination;
    unsigned long long _extracted;
    unsigned long long _total;
    _Bool _atomic;
    _Bool _ignoreMissingFile;
    NSString *_path;
    NSNumber *_lastCompletedOffset;
    NSNumber *_suggestedExtractionOffset;
}

@property(copy) NSNumber *suggestedExtractionOffset; // @synthesize suggestedExtractionOffset=_suggestedExtractionOffset;
@property(copy) NSNumber *lastCompletedOffset; // @synthesize lastCompletedOffset=_lastCompletedOffset;
@property _Bool ignoreMissingFile; // @synthesize ignoreMissingFile=_ignoreMissingFile;
@property _Bool atomic; // @synthesize atomic=_atomic;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)run;
- (_Bool)succeeded;
- (unsigned long long)totalSteps;
- (unsigned long long)completedSteps;
- (id)initWithPath:(id)arg1 destination:(id)arg2;
- (id)initWithDependenciesRequired:(_Bool)arg1;

@end


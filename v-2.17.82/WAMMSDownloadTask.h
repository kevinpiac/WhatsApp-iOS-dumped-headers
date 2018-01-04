//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAURLSessionDownloadTask.h"

@class NSString, WAMMSDownloadTaskData;

@interface WAMMSDownloadTask : WAURLSessionDownloadTask
{
    NSString *_ackRef;
}

@property(copy, nonatomic) NSString *ackRef; // @synthesize ackRef=_ackRef;
- (void).cxx_destruct;
- (id)moveDownloadedContentForJID:(id)arg1 usingName:(id)arg2 andExtension:(id)arg3;
@property(readonly, copy, nonatomic) NSString *fileType;
@property(readonly, nonatomic) int mediaHeight;
@property(readonly, nonatomic) int mediaWidth;

// Remaining properties
@property(readonly, nonatomic) float progress; // @dynamic progress;
@property(readonly, copy, nonatomic) WAMMSDownloadTaskData *taskData; // @dynamic taskData;

@end

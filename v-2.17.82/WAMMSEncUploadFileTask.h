//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSAbstractUploadFileTask.h"

@class WAMediaKey;

@interface WAMMSEncUploadFileTask : WAMMSAbstractUploadFileTask
{
    WAMediaKey *_mediaKey;
}

- (void).cxx_destruct;
- (id)createUploadWriter;
- (id)initWithSession:(id)arg1 taskDescription:(id)arg2 cellularAllowed:(BOOL)arg3 filePath:(id)arg4 fileOffset:(unsigned int)arg5 mediaKey:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;

@end


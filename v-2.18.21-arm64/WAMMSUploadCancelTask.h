//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSBaseTask.h"

@interface WAMMSUploadCancelTask : WAMMSBaseTask
{
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (_Bool)shouldCancel;
- (id)createURLSessionTaskWithBaseRequest:(id)arg1 MMSSession:(id)arg2;
- (void)failedToStartWithError:(id)arg1;
- (id)initWithSession:(id)arg1 taskDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


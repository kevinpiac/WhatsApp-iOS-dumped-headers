//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAStreamingMediaKeyCache : NSObject
{
}

+ (BOOL)deleteExpiredSidecarsWithBlock:(CDUnknownBlockType)arg1;
+ (void)setSidecar:(id)arg1 forFileHash:(id)arg2 mediaKey:(id)arg3;
+ (id)sidecarForFileHash:(id)arg1 mediaKey:(id)arg2 error:(id *)arg3;
+ (BOOL)parseKey:(id)arg1 fileHash:(id *)arg2 mediaKey:(id *)arg3;
+ (id)keyForFileHash:(id)arg1 mediaKey:(id)arg2;

@end

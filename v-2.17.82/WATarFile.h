//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableArray, NSString;

@interface WATarFile : NSObject
{
    NSMutableArray *_processors;
    void *_bytes;
    BOOL _ignoreMissingFiles;
    unsigned int _mode;
    CDUnknownBlockType _fileCompletionHandler;
    NSString *_prefix;
    NSFileHandle *_handle;
}

+ (BOOL)doesHeaderFitAtOffset:(unsigned long long)arg1 forFileSize:(unsigned long long)arg2;
+ (BOOL)isOffset:(unsigned long long)arg1 validForSize:(unsigned long long)arg2;
+ (BOOL)fileForHeader:(id)arg1 fitsInTar:(unsigned long long)arg2 withOffset:(unsigned long long)arg3;
+ (BOOL)file:(id)arg1 matchesHeader:(id)arg2;
+ (id)handleToPath:(id)arg1 forMode:(unsigned int)arg2;
+ (void)preparePath:(id)arg1 forMode:(unsigned int)arg2;
@property(readonly, nonatomic) NSFileHandle *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) CDUnknownBlockType fileCompletionHandler; // @synthesize fileCompletionHandler=_fileCompletionHandler;
@property(nonatomic) BOOL ignoreMissingFiles; // @synthesize ignoreMissingFiles=_ignoreMissingFiles;
@property(readonly, nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)addEOF;
- (id)addFilesAtURLs:(id)arg1 toTarDirectoryPath:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3;
- (id)addFilesAtURLs:(id)arg1;
- (void)notifyDidFinishHeader:(id)arg1 withResult:(unsigned int)arg2;
- (void)notifyDidStartHeader:(id)arg1;
- (unsigned int)internalAddFileAtPath:(id)arg1 atTarDirectoryPath:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3;
- (unsigned int)addFileWithHeader:(id)arg1 fromHandle:(id)arg2 withCancellationCheck:(CDUnknownBlockType)arg3;
- (unsigned int)addBytesFromHandle:(id)arg1 ofLength:(unsigned long long)arg2 withCancellationCheck:(CDUnknownBlockType)arg3;
- (id)headerForPath:(id)arg1 inTarDirectoryPath:(id)arg2;
- (id)nameForFilePath:(id)arg1 inTarDirectoryPath:(id)arg2;
- (void)addProcessor:(id)arg1;
- (void)finish;
- (void)close;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 mode:(unsigned int)arg2 appendToEOF:(BOOL)arg3;
- (id)initWithHandle:(id)arg1 mode:(unsigned int)arg2;
- (id)initWithPath:(id)arg1 mode:(unsigned int)arg2;
- (id)init;

@end


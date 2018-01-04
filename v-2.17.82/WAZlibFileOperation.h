//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASynchronousBackupOperation.h"

@class NSString;

@interface WAZlibFileOperation : WASynchronousBackupOperation
{
    NSString *_compressedPath;
    NSString *_uncompressedPath;
    BOOL _failed;
}

@property BOOL failed; // @synthesize failed=_failed;
- (void).cxx_destruct;
- (BOOL)operateWithCompressedFile:(struct gzFile_s *)arg1 uncompressedFile:(int)arg2 usingBuffer:(char *)arg3 ofLength:(unsigned long)arg4;
- (BOOL)tryToCreateBufferWithCompressedFile:(struct gzFile_s *)arg1 uncompressedFile:(int)arg2;
- (BOOL)tryToOpenUncompressedFileWithCompressedFile:(struct gzFile_s *)arg1;
- (void)willOpenUncompressedFileAtPath:(id)arg1;
- (BOOL)tryToOpenCompressedFile;
- (void)willOpenCompressedFileAtPath:(id)arg1;
- (void)run;
- (BOOL)succeeded;
- (int)modeForUncompressedFile;
- (const char *)modeForCompressedFile;
- (id)initWithCompressedFilePath:(id)arg1 uncompressedFilePath:(id)arg2;
- (id)initWithDependenciesRequired:(BOOL)arg1;

@end


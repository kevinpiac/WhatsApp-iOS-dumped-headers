//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAZlibFileOperation.h"

@interface WACompressFileOperation : WAZlibFileOperation
{
}

- (BOOL)operateWithCompressedFile:(struct gzFile_s *)arg1 uncompressedFile:(int)arg2 usingBuffer:(char *)arg3 ofLength:(unsigned long)arg4;
- (int)modeForUncompressedFile;
- (const char *)modeForCompressedFile;
- (id)initWithSource:(id)arg1 destination:(id)arg2;
- (id)initWithCompressedFilePath:(id)arg1 uncompressedFilePath:(id)arg2;

@end


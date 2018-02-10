//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSZipArchive : NSObject
{
    NSString *_path;
    NSString *_filename;
    void *_zip;
}

+ (id)_dateWithMSDOSFormat:(unsigned int)arg1;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(_Bool)arg3;
+ (_Bool)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;
+ (_Bool)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;
+ (_Bool)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
- (void).cxx_destruct;
- (_Bool)close;
- (_Bool)writeData:(id)arg1 filename:(id)arg2;
- (_Bool)writeFileAtPath:(id)arg1 withFileName:(id)arg2;
- (_Bool)writeFile:(id)arg1;
- (_Bool)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2;
- (void)zipInfo:(CDStruct_192a48cb *)arg1 setDate:(id)arg2;
- (_Bool)open;
- (id)initWithPath:(id)arg1;

@end


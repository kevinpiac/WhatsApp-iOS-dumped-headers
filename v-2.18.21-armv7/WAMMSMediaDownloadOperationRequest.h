//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableDictionary, NSString, WAMediaKey;

@interface WAMMSMediaDownloadOperationRequest : NSObject <NSCopying>
{
    BOOL _cellularAllowed;
    BOOL _userInitiated;
    BOOL _isStatus;
    WAMediaKey *_mediaKey;
    NSString *_directPath;
    NSString *_mms3DownloadURLOverride;
    NSData *_ciphertextHash;
    NSString *_ciphertextFilePath;
    NSData *_plaintextHash;
    NSString *_plaintextFilePath;
    NSMutableDictionary *_userInfo;
    unsigned int _retryCount;
    unsigned int _numConcurrentDownloadOperations;
    unsigned int _expectedFileSize;
}

@property(nonatomic) unsigned int expectedFileSize; // @synthesize expectedFileSize=_expectedFileSize;
@property(nonatomic) BOOL isStatus; // @synthesize isStatus=_isStatus;
@property(nonatomic) unsigned int numConcurrentDownloadOperations; // @synthesize numConcurrentDownloadOperations=_numConcurrentDownloadOperations;
@property(nonatomic) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *plaintextFilePath; // @synthesize plaintextFilePath=_plaintextFilePath;
@property(readonly, nonatomic) NSData *plaintextHash; // @synthesize plaintextHash=_plaintextHash;
@property(readonly, nonatomic) NSString *ciphertextFilePath; // @synthesize ciphertextFilePath=_ciphertextFilePath;
@property(readonly, nonatomic) NSData *ciphertextHash; // @synthesize ciphertextHash=_ciphertextHash;
@property(readonly, nonatomic) BOOL cellularAllowed; // @synthesize cellularAllowed=_cellularAllowed;
@property(readonly, nonatomic) NSString *mms3DownloadURLOverride; // @synthesize mms3DownloadURLOverride=_mms3DownloadURLOverride;
@property(readonly, nonatomic) NSString *directPath; // @synthesize directPath=_directPath;
@property(readonly, nonatomic) WAMediaKey *mediaKey; // @synthesize mediaKey=_mediaKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaKey:(id)arg1 directPath:(id)arg2 mms3DownloadURLOverride:(id)arg3 cellularAllowed:(BOOL)arg4 ciphertextHash:(id)arg5 ciphertextFilePath:(id)arg6 plaintextHash:(id)arg7 plaintextFilePath:(id)arg8;

@end

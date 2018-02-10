//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WABackupMedia : NSObject
{
    _Bool _useCellularData;
    unsigned long long _itemCount;
}

@property(readonly, nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) _Bool useCellularData; // @synthesize useCellularData=_useCellularData;
- (void)setTaskManager:(id)arg1;
- (void)setAggressive:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableWithCompletion:(CDUnknownBlockType)arg1;
- (void)setEncryptionKey:(id)arg1 verificationKey:(id)arg2;
- (id)initWithChatStorage:(id)arg1 keyValueStore:(id)arg2;

@end


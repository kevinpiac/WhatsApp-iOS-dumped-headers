//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WABackupMedia : NSObject
{
    BOOL _useCellularData;
    unsigned int _itemCount;
}

@property(readonly, nonatomic) unsigned int itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) BOOL useCellularData; // @synthesize useCellularData=_useCellularData;
- (void)setTaskManager:(id)arg1;
- (void)setAggressive:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableWithCompletion:(CDUnknownBlockType)arg1;
- (void)setEncryptionKey:(id)arg1 verificationKey:(id)arg2;
- (id)initWithChatStorage:(id)arg1 keyValueStore:(id)arg2;

@end

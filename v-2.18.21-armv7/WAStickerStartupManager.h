//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAStickerStartupManager : NSObject
{
    BOOL _gimmickPickerAvailable;
    unsigned int _downloadAttemptCount;
}

+ (id)defaultStickers;
+ (id)defaultStickerPack;
@property(nonatomic) unsigned int downloadAttemptCount; // @synthesize downloadAttemptCount=_downloadAttemptCount;
- (void)downloadInitialStickerPackIfNeccessary;
- (void)downloadInitialStickerPack;
@property(readonly, nonatomic, getter=isGimmickPickerAvailable) BOOL gimmickPickerAvailable;
- (id)init;

@end


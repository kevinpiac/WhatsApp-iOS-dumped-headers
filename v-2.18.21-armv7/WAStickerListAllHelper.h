//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStickerListHelper-Protocol.h"

@class NSString, UIImage;

@interface WAStickerListAllHelper : NSObject <WAStickerListHelper>
{
}

@property(readonly, nonatomic) NSString *errorScreenMessage;
@property(readonly, nonatomic) UIImage *errorScreenImage;
@property(readonly, nonatomic) NSString *emptyScreenMessage;
@property(readonly, nonatomic) UIImage *emptyScreenImage;
- (void)didTapActionButton;
@property(readonly, nonatomic) BOOL isEditing;
- (void)getStickerPacksWithCompletion:(CDUnknownBlockType)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIImage;

@protocol WAStickerListHelper
@property(readonly, nonatomic) NSString *emptyScreenMessage;
@property(readonly, nonatomic) NSString *errorScreenMessage;
@property(readonly, nonatomic) UIImage *emptyScreenImage;
@property(readonly, nonatomic) UIImage *errorScreenImage;
@property(readonly, nonatomic) _Bool isEditing;
- (void)getStickerPacksWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)didTapActionButton;
@end

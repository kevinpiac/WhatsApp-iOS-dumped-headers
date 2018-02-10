//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIImage, WAChatComposer, WAContact;

@protocol WAChatComposerDelegate <NSObject>
- (void)chatComposerDidCancel:(WAChatComposer *)arg1;
- (void)chatComposer:(WAChatComposer *)arg1 didFinishWithContacts:(NSArray *)arg2 subject:(NSString *)arg3 picture:(UIImage *)arg4;
- (void)chatComposer:(WAChatComposer *)arg1 didFinishWithContact:(WAContact *)arg2;

@optional
- (void)chatComposerDidAskToInviteFriends:(WAChatComposer *)arg1;
@end


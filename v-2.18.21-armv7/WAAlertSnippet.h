//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WANotificationSnippet.h"

@class UILabel;

@interface WAAlertSnippet : WANotificationSnippet
{
    CDUnknownBlockType _tapHandler;
    UILabel *_stringLabel;
}

@property(retain, nonatomic) UILabel *stringLabel; // @synthesize stringLabel=_stringLabel;
- (void).cxx_destruct;
- (void)handleTap;
- (void)configureWithAlertText:(id)arg1;
- (id)initWithAlertText:(id)arg1 tapHandler:(CDUnknownBlockType)arg2 orientation:(int)arg3;

@end


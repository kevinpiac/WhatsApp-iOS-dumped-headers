//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Callback)
+ (id)callbackDictionaryForDelegate:(id)arg1 userInfo:(id)arg2 finishedSelector:(SEL)arg3 failedSelector:(SEL)arg4;
- (SEL)callbackFailedSelector;
- (SEL)callbackFinishedSelector;
- (id)callbackUserInfo;
- (id)callbackDelegate;
@end


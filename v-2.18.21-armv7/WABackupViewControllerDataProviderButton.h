//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WABackupViewControllerDataProviderButton : NSObject
{
    BOOL _destructive;
    NSString *_localizedText;
    CDUnknownBlockType _action;
}

@property(readonly, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, nonatomic, getter=isDestructive) BOOL destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) NSString *localizedText; // @synthesize localizedText=_localizedText;
- (void).cxx_destruct;
- (id)initWithLocalizedText:(id)arg1 destructive:(BOOL)arg2 action:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperation, NSString, UIImage, WAProfilePictureManager;

@interface WAProfilePictureCacheItem : NSObject
{
    // Error parsing type: Aq, name: _priority
    NSMutableArray *_loadingBlocks;
    NSString *_jid;
    UIImage *_image;
    NSOperation *_currentOperation;
    WAProfilePictureManager *_loadingManager;
}

@property __weak WAProfilePictureManager *loadingManager; // @synthesize loadingManager=_loadingManager;
@property(retain) NSOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain) UIImage *image; // @synthesize image=_image;
@property(readonly, copy) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (void)internalRunWhenCompleted:(CDUnknownBlockType)arg1;
- (void)runWhenCompleted:(CDUnknownBlockType)arg1;
- (void)internalLoadThumbnail;
- (void)loadWithPriority:(long long)arg1;
@property(readonly, getter=isLoaded) _Bool loaded;
@property(readonly) UIImage *placeholderImage;
- (id)initWithJID:(id)arg1 image:(id)arg2;
- (id)initWithJID:(id)arg1 manager:(id)arg2;

@end


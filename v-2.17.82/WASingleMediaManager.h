//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaManager.h"

@class WAMessage;

@interface WASingleMediaManager : WAMediaManager
{
    WAMessage *_message;
}

- (void).cxx_destruct;
- (void)deleteMessagesAtIndexPaths:(id)arg1;
- (BOOL)isForSingleItem;
- (id)indexPathOfMessage:(id)arg1;
- (id)messageAtIndexPath:(id)arg1;
- (id)indexPathFromIndex:(unsigned int)arg1;
- (unsigned int)indexFromIndexPath:(id)arg1;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (unsigned int)numberOfItems;
- (id)initWithMessage:(id)arg1;

@end


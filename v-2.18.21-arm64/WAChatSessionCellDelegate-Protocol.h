//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAChatSessionCell;

@protocol WAChatSessionCellDelegate <NSObject>
- (void)chatSessionCellMarkAsPinOrUnpin:(WAChatSessionCell *)arg1;
- (void)chatSessionCellMarkAsReadOrUnread:(WAChatSessionCell *)arg1;
- (_Bool)archiveActionRemovesCell:(WAChatSessionCell *)arg1;
- (void)chatSessionCellPerformArchiveAction:(WAChatSessionCell *)arg1;
- (void)chatSessionCellShowMoreOptions:(WAChatSessionCell *)arg1;
- (void)chatSessionCellDidEndChangingSideButtons:(WAChatSessionCell *)arg1 buttonsVisible:(_Bool)arg2;
- (void)chatSessionCellDidStartChangingSideButtons:(WAChatSessionCell *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIToolbarDelegate-Protocol.h"

@class NSIndexPath, WAMediaBrowserToolbar;

@protocol WAMediaBrowserToolbarDelegate <UIToolbarDelegate>
- (void)toolbarDidEndScrubbing:(WAMediaBrowserToolbar *)arg1;
- (void)toolbar:(WAMediaBrowserToolbar *)arg1 didScrollToIndexPath:(NSIndexPath *)arg2;
- (void)toolbarDidBeginScrubbing:(WAMediaBrowserToolbar *)arg1;
- (void)toolbarDidActivateUnstarButton:(WAMediaBrowserToolbar *)arg1;
- (void)toolbarDidActivateStarButton:(WAMediaBrowserToolbar *)arg1;
- (void)toolbarDidActivatePauseButton:(WAMediaBrowserToolbar *)arg1;
- (void)toolbarDidActivatePlayButton:(WAMediaBrowserToolbar *)arg1;
- (void)toolbarDidActivateTrashButton:(WAMediaBrowserToolbar *)arg1;
- (void)toolbarDidActivateActionButton:(WAMediaBrowserToolbar *)arg1;
@end


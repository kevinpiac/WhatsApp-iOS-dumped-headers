//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIBarButtonItem, UIToolbar, WAEmbeddedYoutubePlayerView, WAYoutubePlayerController;

@interface WAYoutubeVideoViewController : UIViewController
{
    float _origScale;
    struct CGPoint _origCenter;
    struct CGPoint _oldCenterInParent;
    WAYoutubePlayerController *_youtubeController;
    WAEmbeddedYoutubePlayerView *_playerView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_pauseButton;
    UIBarButtonItem *_playButton;
    UIBarButtonItem *_spacer;
}

- (void).cxx_destruct;
- (void)player:(id)arg1 stateChangedTo:(unsigned int)arg2;
- (void)player:(id)arg1 playPositionChanged:(float)arg2;
- (void)backButtonPressed:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotate;
- (void)loadView;
- (id)initWithYoutubeController:(id)arg1;

@end

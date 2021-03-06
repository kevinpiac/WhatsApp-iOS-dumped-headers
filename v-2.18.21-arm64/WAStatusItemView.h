//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, WAMessage;
@protocol WAStatusItemViewDelegate;

@interface WAStatusItemView : UIView
{
    CADisplayLink *_displayLink;
    double _displayLinkStartTime;
    double _displayLinkPausedTime;
    _Bool _paused;
    _Bool _audioMuted;
    float _progress;
    WAMessage *_message;
    id <WAStatusItemViewDelegate> _delegate;
}

+ (Class)viewClassForMessage:(id)arg1;
@property(nonatomic) __weak id <WAStatusItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isAudioMuted) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)willMoveToWindow:(id)arg1;
- (void)finishPresentingIfPossible;
- (_Bool)isFinishedPresenting;
- (void)rewind;
- (void)handleDisplayLinkUpdate:(id)arg1;
- (void)cancelTimerIfNeeded;
- (void)startTimerIfNeeded;
- (void)handleMessageUpdated:(id)arg1;
- (void)didUpdateMessage;
- (void)didSetMessage;
- (double)presentationTime;
- (void)prepareForReuse;
@property(readonly, nonatomic, getter=isHandlingPanGesture) _Bool handlingPanGesture;
- (void)applicationWillPresentCallScreen:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, MPVolumeView, NSArray, NSIndexPath, NSMutableDictionary, NSString, WAAudioActivity;

@interface WASoundPickerViewController : WATableViewController <AVAudioPlayerDelegate>
{
    NSArray *_soundGroups;
    NSString *_defaultSoundFilename;
    NSIndexPath *_indexPathForSelectedSound;
    NSMutableDictionary *_audioPlayers;
    AVAudioPlayer *_currentPlayer;
    WAAudioActivity *_audioActivity;
    MPVolumeView *_volumeView;
    BOOL _hasNoSoundOption;
    CDUnknownBlockType _completion;
}

+ (id)callSoundPickerForJID:(id)arg1;
+ (id)groupMessageSoundPickerForJID:(id)arg1;
+ (id)personalMessageSoundPickerForJID:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)localizedNameForSound:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)adjustVolumeIfNeeded;
- (void)startAudioActivityIfNeeded;
- (void)fadeOut;
- (id)audioPlayerForFilename:(id)arg1;
- (id)audioPlayers;
- (void)cancelAction:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)dealloc;
- (id)initWithSounds:(id)arg1 defaultSoundName:(id)arg2 selectedSoundName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


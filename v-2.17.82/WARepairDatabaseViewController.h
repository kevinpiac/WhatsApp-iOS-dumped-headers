//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class UIButton, UIImageView, UILabel, UIProgressView, UIView, WAChatStorage, WARepairDatabaseController, WASQLBackupManager;
@protocol WARepairDatabaseControllerDelegate;

@interface WARepairDatabaseViewController : WAViewController
{
    BOOL _localRestoreResumed;
    UILabel *_paragraphLabel;
    UILabel *_warningLabel;
    UIButton *_beginButton;
    UIImageView *_warningImageView;
    UIView *_repairProgressView;
    UIProgressView *_progressView;
    UILabel *_completionLabel;
    WARepairDatabaseController *_navigationController;
    unsigned int _mode;
    WAChatStorage *_chatStorage;
    WASQLBackupManager *_sqlBackupManager;
    id <WARepairDatabaseControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WARepairDatabaseControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WASQLBackupManager *sqlBackupManager; // @synthesize sqlBackupManager=_sqlBackupManager;
@property(retain, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak WARepairDatabaseController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UILabel *completionLabel; // @synthesize completionLabel=_completionLabel;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *repairProgressView; // @synthesize repairProgressView=_repairProgressView;
@property(retain, nonatomic) UIImageView *warningImageView; // @synthesize warningImageView=_warningImageView;
@property(retain, nonatomic) UIButton *beginButton; // @synthesize beginButton=_beginButton;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UILabel *paragraphLabel; // @synthesize paragraphLabel=_paragraphLabel;
- (void).cxx_destruct;
- (unsigned int)supportedInterfaceOrientations;
- (void)performRecoveryFromLocalBackup;
- (void)handleRepairOutcome:(unsigned int)arg1;
- (void)performRecovery:(id)arg1;
- (void)updateProgress:(float)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)configureMode;
- (void)removeCorruptionFlag:(id)arg1;
- (void)awakeFromNib;

@end

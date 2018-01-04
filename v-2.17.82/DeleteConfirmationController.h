//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UITableView, UITableViewCell, UIView;
@protocol DeleteConfirmationControllerDelegate;

@interface DeleteConfirmationController : WAViewController
{
    UIView *_spinnerBackgroundView;
    UIActivityIndicatorView *_spinner;
    NSString *_feedbackText;
    id <DeleteConfirmationControllerDelegate> _delegate;
    UITableView *_tableView;
    UIView *_viewThankYou;
    UILabel *_labelThankYou;
    UITableViewCell *_cellConfirmation;
    UILabel *_labelTitle;
    UILabel *_labelHelperText;
    UIImageView *_imageSadPhone;
}

@property(retain, nonatomic) UIImageView *imageSadPhone; // @synthesize imageSadPhone=_imageSadPhone;
@property(retain, nonatomic) UILabel *labelHelperText; // @synthesize labelHelperText=_labelHelperText;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UITableViewCell *cellConfirmation; // @synthesize cellConfirmation=_cellConfirmation;
@property(retain, nonatomic) UILabel *labelThankYou; // @synthesize labelThankYou=_labelThankYou;
@property(retain, nonatomic) UIView *viewThankYou; // @synthesize viewThankYou=_viewThankYou;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <DeleteConfirmationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *feedbackText; // @synthesize feedbackText=_feedbackText;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)hideSpinnerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showSpinner;
- (void)deleteAction;
- (void)cancelAction:(id)arg1;
- (void)presentDeleteAccountUnableToDeleteAlert;
- (void)presentDeleteAccountNetworkRequiredAlert;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end


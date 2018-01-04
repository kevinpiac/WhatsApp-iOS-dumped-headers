//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

@class WADoneWithSpinnerBarButtonItem;
@protocol WAMediaPickerDataSource;

@interface WAMediaPickerBaseViewController : WATableViewController
{
    BOOL _showDoneButton;
    id <WAMediaPickerDataSource> _mediaPickerDataSource;
    WADoneWithSpinnerBarButtonItem *_doneButton;
}

@property(readonly, nonatomic) WADoneWithSpinnerBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) BOOL showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) __weak id <WAMediaPickerDataSource> mediaPickerDataSource; // @synthesize mediaPickerDataSource=_mediaPickerDataSource;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)toolbarItems;
- (BOOL)scrollEnabled;
- (void)done:(id)arg1;
- (void)updateDoneButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)mediaPickerLibraryControllerDidUpdateAssetsGroups:(id)arg1;
- (void)mediaPickerLibraryControllerDidFinishLoadingLibrary:(id)arg1;
- (void)mediaPickerLibraryControllerWillBeginLoadingLibrary:(id)arg1;
- (id)initWithStyle:(int)arg1;

@end

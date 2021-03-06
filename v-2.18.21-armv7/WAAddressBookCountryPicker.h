//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

@class NSArray, NSDictionary;
@protocol WAAddressBookCountryPickerDelegate;

@interface WAAddressBookCountryPicker : WATableViewController
{
    NSArray *_sectionTitles;
    NSDictionary *_countryMap;
    id <WAAddressBookCountryPickerDelegate> _delegate;
}

+ (id)pickerWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WAAddressBookCountryPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)countryInfoForTableIndexPath:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)cancelAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "EntryCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, OrderSummaryDetails, UITableView, UITableViewCell, UIView, UPIOverlayView;

@interface CredentialsUI : UIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, EntryCellDelegate>
{
    NSArray *controls_arr;
    NSString *_appId;
    NSString *_deviceId;
    NSArray *_publicKey_KI_arr;
    CDUnknownBlockType _completionHandler;
    id _controls;
    id _configuration;
    id _salt;
    NSString *_trust;
    id _payInfo;
    NSString *_keyCode;
    NSString *_language;
    NSArray *_arr_details;
    UPIOverlayView *_overlayView;
    _Bool _viewsCreated;
    _Bool _headerStatus;
    int _flowType;
    UITableView *_tableView;
    OrderSummaryDetails *_osdView;
    UIView *_keyBoardView;
    NSMutableArray *_cellArray;
    UITableViewCell *_selectedCell;
    NSMutableDictionary *_textDictionary;
    NSArray *_data;
    NSMutableArray *_displayFilteredData;
    UIView *_errorMessageView;
    NSTimer *_errorMessageTimer;
    _Bool *_errorMessageDismissed;
}

+ (void)disableDelayedTouches:(id)arg1;
@property(nonatomic) int flowType; // @synthesize flowType=_flowType;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool *errorMessageDismissed; // @synthesize errorMessageDismissed=_errorMessageDismissed;
@property(retain, nonatomic) NSTimer *errorMessageTimer; // @synthesize errorMessageTimer=_errorMessageTimer;
@property(retain, nonatomic) UIView *errorMessageView; // @synthesize errorMessageView=_errorMessageView;
@property(retain, nonatomic) NSMutableArray *displayFilteredData; // @synthesize displayFilteredData=_displayFilteredData;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableDictionary *textDictionary; // @synthesize textDictionary=_textDictionary;
@property(retain, nonatomic) UITableViewCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) UIView *keyBoardView; // @synthesize keyBoardView=_keyBoardView;
@property(retain, nonatomic) OrderSummaryDetails *osdView; // @synthesize osdView=_osdView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool headerStatus; // @synthesize headerStatus=_headerStatus;
- (void).cxx_destruct;
- (void)removeErrorMessage;
- (void)showErrorMessage:(id)arg1;
- (void)validateInputs;
- (void)keytapped:(id)arg1;
- (void)keytouchUp:(id)arg1;
- (void)keytouched:(id)arg1;
- (void)cancelEvents:(id)arg1;
- (id)createKeyboard;
- (void)returnToAppWithStatus:(int)arg1 error:(id)arg2 info:(id)arg3;
- (void)clearInstance;
- (void)back:(id)arg1;
- (void)confirm:(id)arg1;
- (void)resendOtpForcell:(id)arg1;
- (void)cellSelected:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)createViews;
- (id)sortInput:(id)arg1;
- (void)dealloc;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)getCredentialsPresentedFrom:(id)arg1 controls:(id)arg2 keyCode:(id)arg3 publicKey_KI:(id)arg4 configuration:(id)arg5 salt:(id)arg6 trust:(id)arg7 payInfo:(id)arg8 language:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


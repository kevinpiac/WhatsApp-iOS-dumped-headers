//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "ProblemInputControllerDelegate-Protocol.h"

@class NSString, UIImage, UIViewController, WASupportDebugFields, WamEventContactUsSession;

@interface WASupportEmailComposer : NSObject <ProblemInputControllerDelegate, MFMailComposeViewControllerDelegate>
{
    WASupportDebugFields *_supportDebugFields;
    WamEventContactUsSession *_fsEvent;
    WASupportEmailComposer *_retainedSelf;
    double _supportStartTime;
    BOOL _skipServerStatusCheck;
    BOOL _suppressHUD;
    CDUnknownBlockType _completion;
    NSString *_initialText;
    UIImage *_initialImageToAttach;
    UIViewController *_controller;
}

+ (id)composer;
@property(retain, nonatomic) UIViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) BOOL suppressHUD; // @synthesize suppressHUD=_suppressHUD;
@property(nonatomic) BOOL skipServerStatusCheck; // @synthesize skipServerStatusCheck=_skipServerStatusCheck;
@property(retain, nonatomic) UIImage *initialImageToAttach; // @synthesize initialImageToAttach=_initialImageToAttach;
@property(copy, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)fillFieldStatEventOnCallbackFromProblemInputController:(id)arg1;
- (void)problemInputController:(id)arg1 didCancelWithText:(id)arg2 imageAttachments:(id)arg3;
- (void)problemInputController:(id)arg1 didFinishWithText:(id)arg2 logsAttachment:(id)arg3 imageAttachments:(id)arg4;
@property(copy, nonatomic) NSString *context;
@property(copy, nonatomic) NSString *countryCode;
@property(nonatomic) BOOL registration;
- (void)cancel;
- (void)presentFromViewController:(id)arg1;
- (void)presentDirectEmailSupportFlow;
- (void)presentNoConnectionSupportFlow;
- (void)finishComposerWithResult:(BOOL)arg1;
- (void)composeEmailWithProblemDescription:(id)arg1 logsAttachment:(id)arg2 imageAttachments:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


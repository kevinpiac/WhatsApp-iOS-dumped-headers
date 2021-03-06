//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActivityItemSource-Protocol.h"

@class NSString, NSURL, WAChatSessionExporter, WAProgressAlertController;

@interface WAChatSessionExporterController : NSObject <UIActivityItemSource>
{
    WAChatSessionExporter *_exporter;
    WAProgressAlertController *_progressController;
    NSURL *_exportedURL;
}

+ (void)exportChatSession:(id)arg1 withMedia:(BOOL)arg2 fromViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (BOOL)shareExportedFileURL:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performExportWithMedia:(BOOL)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithChatSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


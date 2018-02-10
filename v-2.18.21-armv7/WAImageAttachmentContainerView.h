//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAImageAttachmentViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIScrollView;
@protocol WAImageAttachmentContainerViewDelegate;

@interface WAImageAttachmentContainerView : UIView <WAImageAttachmentViewDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_attachments;
    BOOL _removeButtonsHidden;
    id <WAImageAttachmentContainerViewDelegate> _delegate;
}

@property(nonatomic) BOOL removeButtonsHidden; // @synthesize removeButtonsHidden=_removeButtonsHidden;
@property(nonatomic) __weak id <WAImageAttachmentContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageAttachmentViewDidRequestAddImage:(id)arg1;
- (void)imageAttachmentViewDidRequestRemoveImage:(id)arg1;
- (void)attachImage:(id)arg1;
- (void)addAttachment:(id)arg1;
@property(readonly, nonatomic) NSArray *attachedImages;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


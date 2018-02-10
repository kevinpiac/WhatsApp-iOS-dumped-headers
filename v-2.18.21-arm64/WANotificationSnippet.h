//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WANotificationSnippetDelegate;

@interface WANotificationSnippet : UIView
{
    _Bool _shouldExpand;
    _Bool _contentExpanded;
    _Bool _allowsReplying;
    id <WANotificationSnippetDelegate> _delegate;
    double _collapsedHeight;
    UIView *_backgroundView;
    UIView *_contentView;
    double _expandedHeight;
}

+ (double)preferredHeightForInterfaceOrientation:(long long)arg1;
+ (void)initialize;
@property(nonatomic) double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double collapsedHeight; // @synthesize collapsedHeight=_collapsedHeight;
@property(nonatomic) _Bool allowsReplying; // @synthesize allowsReplying=_allowsReplying;
@property(nonatomic) _Bool contentExpanded; // @synthesize contentExpanded=_contentExpanded;
@property(nonatomic) _Bool shouldExpand; // @synthesize shouldExpand=_shouldExpand;
@property(nonatomic) __weak id <WANotificationSnippetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeAction:(id)arg1;
- (void)contentViewTouchUp:(id)arg1;
- (void)contentViewAnyTouch:(id)arg1;
- (id)initWithOrientation:(long long)arg1;

@end


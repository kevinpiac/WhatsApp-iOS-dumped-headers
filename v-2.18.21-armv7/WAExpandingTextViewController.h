//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSLayoutManagerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAExpandingTextViewDelegate-Protocol.h"

@class NSAttributedString, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIFont, UITapGestureRecognizer, UIView, WAExpandingTextView, WATextFormatter;
@protocol WAExpandingTextViewControllerDelegate;

@interface WAExpandingTextViewController : NSObject <NSLayoutManagerDelegate, UIGestureRecognizerDelegate, WAExpandingTextViewDelegate>
{
    unsigned int _minimizedLineLimit;
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    WAExpandingTextView *_textView;
    BOOL _shouldChangeText;
    struct CGRect _expandRect;
    UITapGestureRecognizer *_tapGestureRecognizer;
    WATextFormatter *_textFormatter;
    BOOL _expanded;
    BOOL _canShowLinks;
    float _preferredHeight;
    NSAttributedString *_fullText;
    NSAttributedString *_expandPrompt;
    id <WAExpandingTextViewControllerDelegate> _delegate;
}

@property(nonatomic) BOOL canShowLinks; // @synthesize canShowLinks=_canShowLinks;
@property(nonatomic) __weak id <WAExpandingTextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) NSAttributedString *expandPrompt; // @synthesize expandPrompt=_expandPrompt;
@property(copy, nonatomic) NSAttributedString *fullText; // @synthesize fullText=_fullText;
@property(nonatomic) float preferredHeight; // @synthesize preferredHeight=_preferredHeight;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)textViewTapped:(id)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
@property(retain, nonatomic) UIFont *baseFont;
@property(nonatomic) float lineFragmentPadding;
- (void)textViewDidUpdateWidth:(id)arg1;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(readonly, nonatomic) UIView *view;
- (void)updatePreferredHeightAndText;
- (float)minimizeTextView;
- (struct _NSRange)truncateText;
- (float)expandTextView;
- (void)addExpandGestureRecognizerToView:(id)arg1;
- (id)initWithTextView:(id)arg1 minimizedLineLimit:(unsigned int)arg2 baseFont:(id)arg3;
- (id)initWithMinimizedLineLimit:(unsigned int)arg1 baseFont:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


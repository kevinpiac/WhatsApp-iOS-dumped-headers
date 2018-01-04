//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_WADraggableInputContainerViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIResponder, _WADraggableInputContainerView;
@protocol WADraggableInputViewDelegate;

@interface WADraggableInputView : UIView <_WADraggableInputContainerViewDelegate>
{
    _WADraggableInputContainerView *_containerView;
    float _previousHeight;
    BOOL _ignoreKeyboardNotifications;
    NSLayoutConstraint *_topConstraintOS7;
    NSLayoutConstraint *_leftConstraintOS7;
    NSLayoutConstraint *_rightConstraintOS7;
    double _animationDurationForHeightUpdate;
    BOOL _inputViewResponderIsBecomingFirstResponder;
    BOOL _updateHeightScheduled;
    id <WADraggableInputViewDelegate> _delegate;
    float _bottomInset;
    unsigned int _keyboardState;
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) unsigned int keyboardState; // @synthesize keyboardState=_keyboardState;
@property(readonly, nonatomic) float bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak id <WADraggableInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)willHideKeyboardWithAnimationDuration:(double)arg1 animationCurve:(int)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)willShowKeyboardWithAnimationDuration:(double)arg1 animationCurve:(int)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)updateBottomInsetFromKeyboardFrame:(struct CGRect)arg1;
- (id)inputViewResponderToBecomeFirstResponder;
- (void)showKeyboardFromViewController:(id)arg1;
- (void)hideKeyboard;
@property(readonly, nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible;
@property(readonly, nonatomic) UIResponder *currentFirstResponder;
@property(readonly, nonatomic) NSArray *inputViewResponders;
- (void)updateHeight;
- (void)invalidateLayout;
- (void)setNeedsUpdateHeightWithAnimationDuration:(double)arg1;
- (void)setNeedsUpdateHeight;
@property(readonly, nonatomic) float currentLayoutWidth;
- (float)preferredHeightForLayoutWidth:(float)arg1;
- (BOOL)isShowingSoftwareKeyboard_iOS11;
- (BOOL)isDraggableInputContainerViewAboveSoftwareKeyboard_iOS11:(id)arg1;
- (float)currentLayoutWidthForDraggableInputContainerView:(id)arg1;
- (float)draggableInputContainerView:(id)arg1 preferredHeightForLayoutWidth:(float)arg2;
- (void)didMoveToParentViewController:(id)arg1 inViewController:(id)arg2;
- (void)resignFirstResponderOnDisappearInViewController:(id)arg1;
- (void)willDisappearInViewController:(id)arg1;
- (void)didAppearInViewController:(id)arg1;
- (void)willAppearInViewController:(id)arg1;
- (BOOL)canViewControllerBecomeFirstResponder:(id)arg1;
- (void)setInitialWidth:(float)arg1;
- (void)willMoveToWindow:(id)arg1;
@property(readonly, nonatomic) struct CGRect containerViewLayoutBounds;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

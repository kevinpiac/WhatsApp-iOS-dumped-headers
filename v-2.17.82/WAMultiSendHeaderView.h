//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPreviewInteractionDelegate-Protocol.h"
#import "WAPaintBrushStampContentDelegate-Protocol.h"
#import "WAPaintColorPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIColor, UIImage, UIImpactFeedbackGenerator, UIPreviewInteraction, WAAutoRepeatButton, WAGradientView, WAMultiSendHeaderViewBrushControl, WAMultiSendHeaderViewDeleteItemView, WAPaintBrushContentPicker, WAPaintColorPickerView, WAView;
@protocol WAMultiSendHeaderViewDelegate;

@interface WAMultiSendHeaderView : UIView <WAPaintBrushStampContentDelegate, WAPaintColorPickerViewDelegate, UIPreviewInteractionDelegate>
{
    BOOL _supportsPainting;
    UIImage *_backButtonChevronImage;
    UIImage *_backButtonCancelImage;
    UIButton *_backButton;
    BOOL _backButtonTappedToHideStampPicker;
    UIButton *_cropButton;
    WAMultiSendHeaderViewBrushControl *_brushControl;
    WAMultiSendHeaderViewBrushControl *_textControl;
    UIButton *_emojiButton;
    UIButton *_deleteMediaItemButton;
    WAAutoRepeatButton *_undoButton;
    WAPaintBrushContentPicker *_stampPicker;
    WAView *_mainContainerView;
    WAPaintColorPickerView *_colorPicker;
    float _colorPickerMaxHeight;
    float _brushSize;
    NSArray *_textStyles;
    float _keyboardHeight;
    WAMultiSendHeaderViewDeleteItemView *_deleteItemView;
    UIImpactFeedbackGenerator *_deletionEligibleFeedback;
    WAGradientView *_gradientView;
    NSArray *_allPaintingControls;
    BOOL _notifyDelegateOfModeChangeOnKeyboardDidHide;
    BOOL _isKeyboardVisible;
    float _buttonPadding;
    UIPreviewInteraction *_cropInteraction;
    BOOL _isCropInteractionInProgress;
    BOOL _editingInteractively;
    BOOL _pinching;
    BOOL _preparingForDeletion;
    id <WAMultiSendHeaderViewDelegate> _delegate;
    unsigned int _mode;
}

@property(nonatomic, getter=isPreparingForDeletion) BOOL preparingForDeletion; // @synthesize preparingForDeletion=_preparingForDeletion;
@property(nonatomic, getter=isPinching) BOOL pinching; // @synthesize pinching=_pinching;
@property(nonatomic, getter=isEditingInteractively) BOOL editingInteractively; // @synthesize editingInteractively=_editingInteractively;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WAMultiSendHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)endCropInteractionIfNeeded;
- (void)startCropInteractionIfNeeded;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(float)arg2 ended:(BOOL)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(float)arg2 ended:(BOOL)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (void)paintColorPickerViewDidEndChangingProperties:(id)arg1;
- (void)paintColorPickerViewDidBeginChangingProperties:(id)arg1;
- (void)paintColorPickerViewDidChangeValue:(id)arg1;
- (void)paintColorPickerViewDidChangeColor:(id)arg1;
@property(retain, nonatomic) UIColor *brushColor;
- (void)ensureNormalBrushColor;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setKeyboardHeight:(float)arg1 animationCurve:(int)arg2 animationDuration:(double)arg3;
- (float)keyboardHeight;
@property(nonatomic) BOOL showsPixelEffects;
- (void)paintBrushContentPicker:(id)arg1 didSelectPaintBrushContent:(id)arg2;
- (void)setStampPickerHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isStampPickerHidden;
- (void)redoButtonTapped:(id)arg1;
- (void)undoButtonTapped:(id)arg1;
- (void)emojiButtonTapped:(id)arg1;
- (void)textButtonTapped:(id)arg1;
- (void)brushButtonTapped:(id)arg1;
- (BOOL)shouldDeleteItemAtLocation:(struct CGPoint)arg1;
- (void)deleteMediaItemButtonTapped:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateDeleteItemViewState;
- (void)setEditingInteractively:(BOOL)arg1 layoutImmediately:(BOOL)arg2;
- (void)backButtonTapped:(id)arg1;
- (void)reload;
- (float)brushSizeFromColorPicker;
@property(readonly, nonatomic) float brushSize;
- (void)setMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)cropButtonTapped:(id)arg1;
- (BOOL)shouldShowColorPicker;
- (void)layoutSubviews;
- (id)newToolButtonWithClass:(Class)arg1;
- (id)newToolButton;
- (BOOL)showEmojiButton;
- (void)dealloc;
- (id)initWithPaintingSupport:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


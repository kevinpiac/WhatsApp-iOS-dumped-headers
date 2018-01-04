//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIColor, UIFont, UILabel;
@protocol WAProgressHUDDelegate;

@interface WAProgressHUD : UIView
{
    BOOL useAnimation;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    UILabel *label;
    UILabel *detailsLabel;
    BOOL isFinished;
    struct CGAffineTransform rotationTransform;
    BOOL square;
    BOOL dimBackground;
    BOOL taskInProgress;
    BOOL removeFromSuperViewOnHide;
    unsigned int animationType;
    id <WAProgressHUDDelegate> delegate;
    float opacity;
    UIColor *color;
    UIFont *labelFont;
    UIFont *detailsLabelFont;
    UIView *indicator;
    float xOffset;
    float yOffset;
    float margin;
    float graceTime;
    float minShowTime;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    UIView *customView;
    unsigned int mode;
    NSString *labelText;
    NSString *detailsLabelText;
    float progress;
    CDUnknownBlockType completionBlock;
    struct CGSize minSize;
    struct CGSize size;
    double _showStartedTimestamp;
}

+ (id)allHUDsForView:(id)arg1;
+ (id)HUDForView:(id)arg1;
+ (unsigned int)hideAllHUDsForView:(id)arg1 animated:(BOOL)arg2;
+ (BOOL)hideHUDForView:(id)arg1 animated:(BOOL)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) double showStartedTimestamp; // @synthesize showStartedTimestamp=_showStartedTimestamp;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) float progress; // @synthesize progress;
@property(copy, nonatomic) NSString *detailsLabelText; // @synthesize detailsLabelText;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText;
@property(nonatomic) unsigned int mode; // @synthesize mode;
@property(retain, nonatomic) UIView *customView; // @synthesize customView;
@property(nonatomic) BOOL removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property(nonatomic) BOOL taskInProgress; // @synthesize taskInProgress;
@property(retain, nonatomic) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain, nonatomic) NSTimer *graceTimer; // @synthesize graceTimer;
@property(nonatomic) float minShowTime; // @synthesize minShowTime;
@property(nonatomic) float graceTime; // @synthesize graceTime;
@property(nonatomic) BOOL dimBackground; // @synthesize dimBackground;
@property(nonatomic) float margin; // @synthesize margin;
@property(nonatomic, getter=isSquare) BOOL square; // @synthesize square;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize;
@property(nonatomic) float yOffset; // @synthesize yOffset;
@property(nonatomic) float xOffset; // @synthesize xOffset;
@property(retain, nonatomic) UIView *indicator; // @synthesize indicator;
@property(retain, nonatomic) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont;
@property(retain, nonatomic) UIColor *color; // @synthesize color;
@property(nonatomic) float opacity; // @synthesize opacity;
@property(nonatomic) __weak id <WAProgressHUDDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned int animationType; // @synthesize animationType;
- (void).cxx_destruct;
- (void)setTransformForCurrentOrientation:(BOOL)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (void)updateUIForKeypath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateIndicators;
- (void)setupLabels;
- (void)cleanUp;
- (void)launchExecution;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(BOOL)arg4;
- (void)done;
- (void)animationFinished:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
- (void)hideUsingAnimation:(BOOL)arg1;
- (void)showUsingAnimation:(BOOL)arg1;
- (void)handleMinShowTimer:(id)arg1;
- (void)handleGraceTimer:(id)arg1;
- (void)hideDelayed:(id)arg1;
- (void)hide:(BOOL)arg1 afterDelay:(double)arg2;
- (void)hide:(BOOL)arg1;
- (void)show:(BOOL)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

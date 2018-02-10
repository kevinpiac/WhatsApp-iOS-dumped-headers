//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UITabBarController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UITabBarControllerDelegate <NSObject>

@optional
- (id <UIViewControllerAnimatedTransitioning>)tabBarController:(UITabBarController *)arg1 animationControllerForTransitionFromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;
- (id <UIViewControllerInteractiveTransitioning>)tabBarController:(UITabBarController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (int)tabBarControllerPreferredInterfaceOrientationForPresentation:(UITabBarController *)arg1;
- (unsigned int)tabBarControllerSupportedInterfaceOrientations:(UITabBarController *)arg1;
- (void)tabBarController:(UITabBarController *)arg1 didEndCustomizingViewControllers:(NSArray *)arg2 changed:(BOOL)arg3;
- (void)tabBarController:(UITabBarController *)arg1 willEndCustomizingViewControllers:(NSArray *)arg2 changed:(BOOL)arg3;
- (void)tabBarController:(UITabBarController *)arg1 willBeginCustomizingViewControllers:(NSArray *)arg2;
- (void)tabBarController:(UITabBarController *)arg1 didSelectViewController:(UIViewController *)arg2;
- (BOOL)tabBarController:(UITabBarController *)arg1 shouldSelectViewController:(UIViewController *)arg2;
@end


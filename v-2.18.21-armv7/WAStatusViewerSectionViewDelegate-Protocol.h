//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, WAPBInteractiveAnnotation, WAStatusViewerSectionView;

@protocol WAStatusViewerSectionViewDelegate <NSObject>
- (void)statusViewerSectionView:(WAStatusViewerSectionView *)arg1 didSelectInteractiveAnnotation:(WAPBInteractiveAnnotation *)arg2;
- (void)statusViewerSectionView:(WAStatusViewerSectionView *)arg1 didRequestOpenGroupLink:(NSURL *)arg2;
- (void)statusViewerSectionView:(WAStatusViewerSectionView *)arg1 didRequestAudioVolumeChange:(float)arg2;
- (void)statusViewerSectionDidEndLoading:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionDidBeginLoading:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidRequestMoreOptions:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidRequestDownload:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidEndPreventingAdvancing:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidBeginPreventingAdvancing:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidEndUserInteraction:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidBeginUserInteraction:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidRequestDismiss:(WAStatusViewerSectionView *)arg1;
- (void)statusViewerSectionViewDidRequestAdvanceToNextMessage:(WAStatusViewerSectionView *)arg1;
- (BOOL)canStatusViewerSectionViewRequestAdvanceToNextMessage:(WAStatusViewerSectionView *)arg1;
@end


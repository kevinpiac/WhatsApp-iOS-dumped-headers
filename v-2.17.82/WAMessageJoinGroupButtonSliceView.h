//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class UIButton, UIView, WAMessageJoinGroupButtonSlice;

@interface WAMessageJoinGroupButtonSliceView : WAMessageContainerSliceView
{
    UIButton *_joinGroupButton;
    UIView *_topBorder;
}

+ (BOOL)supportsPreviewing;
+ (BOOL)isUserInteractionEnabled;
- (void).cxx_destruct;
- (id)wa_accessibilityElements;
- (void)joinGroup:(id)arg1;
- (void)reloadSliceAfterChange:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageJoinGroupButtonSlice *slice; // @dynamic slice;

@end


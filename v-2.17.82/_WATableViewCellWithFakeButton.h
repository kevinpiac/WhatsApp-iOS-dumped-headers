//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WATableViewCellSeparatorInsetUpdating-Protocol.h"

@class UIImage, UIImageView, WAShapeView;

@interface _WATableViewCellWithFakeButton : UITableViewCell <WATableViewCellSeparatorInsetUpdating>
{
    UIImageView *_imageView;
    WAShapeView *_imageViewBackground;
}

- (void).cxx_destruct;
- (void)updateSeparatorInsetWithTableView:(id)arg1;
@property(retain, nonatomic) UIImage *buttonImage;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

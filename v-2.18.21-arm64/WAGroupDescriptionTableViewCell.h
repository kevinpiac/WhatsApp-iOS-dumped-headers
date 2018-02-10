//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAExpandingTextViewControllerDelegate-Protocol.h"

@class NSString, WAExpandingTextViewController;
@protocol WAGroupDescriptionTableViewCellDelegate;

@interface WAGroupDescriptionTableViewCell : UITableViewCell <WAExpandingTextViewControllerDelegate>
{
    WAExpandingTextViewController *_expandingTextViewController;
    NSString *_groupDescription;
    struct UIEdgeInsets _accessoryInsets;
    struct UIEdgeInsets _regularInsets;
    _Bool _hasContent;
    id <WAGroupDescriptionTableViewCellDelegate> _delegate;
}

+ (id)textViewFont;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(nonatomic) __weak id <WAGroupDescriptionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)expandingTextViewControllerHeightDidChange:(id)arg1;
- (void)expandingTextViewControllerExpandedStateDidChange:(id)arg1;
- (void)collapse;
- (id)imageView;
- (id)textLabel;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setGroupDescription:(id)arg1 editable:(_Bool)arg2;
@property(readonly, nonatomic) NSString *groupDescription;
- (void)setEditable:(_Bool)arg1;
- (void)layoutSubviews;
- (id)init;

@end


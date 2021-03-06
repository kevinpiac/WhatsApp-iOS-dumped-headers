//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WAMessage;

@interface WAStatusLinkPreviewDisplayView : UIView
{
    UIImageView *_imageView;
    UILabel *_contentLabel;
    UILabel *_webURLLabel;
    float _preferredImageHeight;
    UIView *_containerView;
    NSString *_linkUrlString;
    WAMessage *_message;
}

@property(retain, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)reloadFont;
- (id)creatWebURLLabelText;
- (void)fetchImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)hasThumbnail;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


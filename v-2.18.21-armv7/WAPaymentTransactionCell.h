//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, WAPaymentTransaction, WAProfilePictureThumbnailView;

@interface WAPaymentTransactionCell : UITableViewCell
{
    WAPaymentTransaction *_transaction;
    UILabel *_amountLabel;
    UILabel *_nameLabel;
    UILabel *_noteLabel;
    UILabel *_statusLabel;
    WAProfilePictureThumbnailView *_profilePictureView;
    NSLayoutConstraint *_profilePictureSize;
    NSLayoutConstraint *_leadingMargin;
}

+ (id)stringRepresentationForMessage:(id)arg1;
+ (struct UIEdgeInsets)preferredSeparatorInset;
+ (float)preferredHeightForTransaction:(id)arg1;
+ (float)preferredHeight;
@property(nonatomic) __weak NSLayoutConstraint *leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) __weak NSLayoutConstraint *profilePictureSize; // @synthesize profilePictureSize=_profilePictureSize;
@property(nonatomic) __weak WAProfilePictureThumbnailView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(readonly, nonatomic) WAPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)configureWithTransaction:(id)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end


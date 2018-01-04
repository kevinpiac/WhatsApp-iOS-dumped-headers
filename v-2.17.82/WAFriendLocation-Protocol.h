//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSAttributedString, NSDate, NSString, WAProfilePictureThumbnailView;

@protocol WAFriendLocation <NSObject>
@property(readonly, nonatomic) WAProfilePictureThumbnailView *profilePicture;
@property(readonly, nonatomic) NSDate *endTime;
@property(readonly, copy, nonatomic) NSString *jid;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, copy, nonatomic) NSString *pushName;
@property(readonly, nonatomic) BOOL isPhoneNumber;
@property(readonly, copy, nonatomic) NSString *nameOrFormattedPhoneNumber;
- (NSAttributedString *)pushNameAttributedText;
- (NSAttributedString *)phoneNumberOrContactNameAttributedTextInBold:(BOOL)arg1;
@end

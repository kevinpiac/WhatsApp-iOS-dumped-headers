//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPSAHelper : NSObject
{
}

+ (void)insertVerifiedBadgeImagesInString:(id)arg1 replacing:(id)arg2;
+ (id)verifiedBadgeImage;
+ (id)psaChatThumbnailPicture;
+ (id)psaChatProfilePicture;
+ (id)psaSessionPushName;
+ (id)psaSessionPartnerName;
+ (void)processPSAMessageStanza:(id)arg1 withProtobufContent:(id)arg2 notificationType:(id)arg3 connection:(id)arg4;
+ (void)handlePSANotification:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)registerForNotifications;

@end

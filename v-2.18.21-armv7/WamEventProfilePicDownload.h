//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@interface WamEventProfilePicDownload : WamEvent
{
    double _profile_pic_download_t;
    double _profile_pic_download_result;
    double _profile_pic_type;
    double _profile_pic_download_size;
}

@property(nonatomic) double profile_pic_download_size; // @synthesize profile_pic_download_size=_profile_pic_download_size;
@property(nonatomic) double profile_pic_type; // @synthesize profile_pic_type=_profile_pic_type;
@property(nonatomic) double profile_pic_download_result; // @synthesize profile_pic_download_result=_profile_pic_download_result;
@property(nonatomic) double profile_pic_download_t_milliseconds; // @synthesize profile_pic_download_t_milliseconds=_profile_pic_download_t;
@property(nonatomic) double profile_pic_download_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class WamEventMediaPicker;

@interface WAMediaPickerStats : NSObject <NSCopying>
{
    WamEventMediaPicker *_photosEvent;
    WamEventMediaPicker *_videosEvent;
    WamEventMediaPicker *_gifsEvent;
    double _creationTime;
}

+ (int)wamMediaPickerOriginForMediaPickerOrigin:(unsigned int)arg1;
@property(readonly, nonatomic) WamEventMediaPicker *gifsEvent; // @synthesize gifsEvent=_gifsEvent;
@property(readonly, nonatomic) WamEventMediaPicker *videosEvent; // @synthesize videosEvent=_videosEvent;
@property(readonly, nonatomic) WamEventMediaPicker *photosEvent; // @synthesize photosEvent=_photosEvent;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
- (void).cxx_destruct;
- (void)submitFieldStatsIfValid:(id)arg1 stringForLogging:(id)arg2;
@property(nonatomic) int chatRecipientCount;
@property(nonatomic) int statusRecipientCount;
- (id)newFieldStatsEventWithMediaType:(int)arg1 pickerOrigin:(unsigned int)arg2;
- (void)submit;
- (void)updateRecipientCountWithChatSessions:(id)arg1;
- (void)markAllSentAsDeletedInEvent:(id)arg1;
- (void)markAllSentAsDeleted;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithForwardedMessages:(id)arg1 toChatSessions:(id)arg2;
- (id)initWithOrigin:(unsigned int)arg1;

@end

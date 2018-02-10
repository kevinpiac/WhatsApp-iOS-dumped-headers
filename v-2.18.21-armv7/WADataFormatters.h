//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WADataFormatters : NSObject
{
}

+ (id)paymentMonthAndYearFromDate:(id)arg1;
+ (id)paymentMonthFormatter;
+ (id)formattedTextForPhotoAndVideoCount:(int)arg1;
+ (id)formattedTextForVideoCount:(int)arg1;
+ (id)formattedTextForPhotoCount:(int)arg1;
+ (id)backupSizeStringFromLongLong:(long long)arg1;
+ (id)sizeStringFromLongLong:(long long)arg1;
+ (id)localizedPageCountStringForMIMEType:(id)arg1 pageCount:(int)arg2;
+ (id)localizedNameList:(id)arg1;
+ (id)localizedNameListThreeOrMoreItems:(id)arg1 secondItem:(id)arg2 additionalMiddleItems:(id)arg3 lastItem:(id)arg4;
+ (id)localizedNameListWithTwoItems:(id)arg1 secondItem:(id)arg2;
+ (id)localizedStringWithFormat:(id)arg1 number:(id)arg2 formatSpecifier:(id)arg3;
+ (id)localizedStringWithFormat:(id)arg1 number:(id)arg2;
+ (id)voiceOverStringForDurationInSeconds:(double)arg1;
+ (id)timeLeftStringFromTimeInterval:(double)arg1;
+ (id)agoStringFromTimeInterval:(double)arg1 extraPrecision:(BOOL)arg2;
+ (id)updatedAgoStringFromTimeInterval:(double)arg1 extraPrecision:(BOOL)arg2;
+ (id)longStyleStringFromTimeInterval:(double)arg1 precise:(BOOL)arg2;
+ (id)fixedStringFromTimeInterval:(double)arg1 options:(unsigned int)arg2;
+ (id)shortStyleStringFromTimeInterval:(double)arg1 precise:(BOOL)arg2;
+ (id)stringFromTimeInterval:(double)arg1 style:(unsigned int)arg2;
+ (id)pluralYears:(int)arg1;
+ (id)pluralMonths:(int)arg1;
+ (id)pluralDays:(int)arg1;
+ (id)pluralHours:(int)arg1 titleCase:(BOOL)arg2;
+ (id)pluralMinutes:(int)arg1 titleCase:(BOOL)arg2;
+ (id)pluralSeconds:(int)arg1;
+ (int)yearFromDate:(id)arg1;
+ (id)dayOfTheWeekFromDate:(id)arg1;
+ (id)messageTimestampStringFromDate:(id)arg1;
+ (id)messageDateStringFromDate:(id)arg1;
+ (id)liveLocationTimeFromDate:(id)arg1;
+ (id)dateTimeStringFromDate:(id)arg1;
+ (id)chatTimestampFromDate:(id)arg1;
+ (id)aboutUpdateTimestampStringFromDate:(id)arg1;
+ (id)lastActiveStringFromDate:(id)arg1;
+ (id)lastSeenStringFromDate:(id)arg1;
+ (id)stringWithCorrectedDateTimePreposition:(id)arg1;
+ (id)fullWeekdayFormatter;
+ (id)dateFormatterMediumStyleNoYear;
+ (id)sharedCalendar;
+ (id)shortWeekdayFormatter;
+ (id)messageTimestampFormatter;
+ (id)dateTimeFormatterLongStyleNoYearNoTime;
+ (id)dateTimeFormatterLongStyleNoYear;
+ (id)dateTimeFormatterMediumStyleNoYear;
+ (id)dateTimeFormatterLongStyle;
+ (id)dateTimeFormatter;
+ (id)timeFormatter;
+ (id)dateFormatterMediumStyle;
+ (id)dateFormatterShortStyle;
+ (id)dateFormatterMonthAndDay;
+ (id)numberFormatter;
+ (void)handleSignificantTimeChange:(id)arg1;
+ (void)currentLocaleDidChange:(id)arg1;
+ (void)initialize;

@end


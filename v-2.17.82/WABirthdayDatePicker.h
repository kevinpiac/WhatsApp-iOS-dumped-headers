//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSCalendar, NSDateComponents, NSDateFormatter, NSString, UIFont;

@interface WABirthdayDatePicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    int _currentMonth;
    int _currentYear;
    struct _NSRange _monthRange;
    struct _NSRange _dayRange;
    struct _NSRange _dayRangeForCurrentMonth;
    NSArray *_monthNames;
    int _maximumYear;
    NSString *_emptyYear;
    NSCalendar *_calendar;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_yearFormatter;
    int _dayComponent;
    int _monthComponent;
    int _yearComponent;
    float _maxDayWidth;
    float _maxMonthWidth;
    float _maxYearWidth;
    float _maxContentWidth;
    UIFont *_font;
    CDUnknownBlockType _handler;
    NSDateComponents *_date;
}

@property(retain, nonatomic) NSDateComponents *date; // @synthesize date=_date;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)transformComponentsToDate;
- (void)transformDateToComponents;
- (void)calculateDayRangeForCurrentMonthAndYear;
- (int)monthNumberForRow:(int)arg1;
- (void)validateDaySelection;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString, NSTimer;

@interface WAAlternatingLabel : UILabel
{
    NSTimer *_timer;
    int _index;
    NSString *_primaryText;
    NSString *_secondaryText;
    double _interval;
}

@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (void)switchLabel:(id)arg1;
@property(nonatomic, getter=isAnimating) BOOL animating;

@end


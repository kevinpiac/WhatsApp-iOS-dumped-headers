//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPAnimationEvent.h"

@interface POPAnimationValueEvent : POPAnimationEvent
{
    id _value;
    id _velocity;
}

@property(retain, nonatomic) id velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)_appendDescription:(id)arg1;
- (id)initWithType:(unsigned int)arg1 time:(double)arg2 value:(id)arg3;

@end

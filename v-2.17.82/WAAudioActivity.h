//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAAudioActivity : NSObject
{
    BOOL _needsSessionReactivation;
    int _type;
}

@property(readonly, nonatomic) BOOL needsSessionReactivation; // @synthesize needsSessionReactivation=_needsSessionReactivation;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)unset;
- (void)set;
@property(readonly, nonatomic, getter=isMixable) BOOL mixable;
- (BOOL)supportsRecording;
- (BOOL)isEqualToActivity:(id)arg1;
- (id)initWithActivityType:(int)arg1 needsSessionReactivation:(BOOL)arg2;

@end


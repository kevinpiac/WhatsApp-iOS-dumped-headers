//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAGraphicMediaSearchResult : NSObject
{
    NSString *_value;
    NSString *_language;
    long long _score;
}

@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long score; // @synthesize score=_score;
- (void).cxx_destruct;
- (id)description;

@end


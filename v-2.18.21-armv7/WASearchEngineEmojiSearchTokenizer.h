//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WASearchEngineTokenizerHelper;

@interface WASearchEngineEmojiSearchTokenizer : NSObject
{
    WASearchEngineTokenizerHelper *_helper;
    NSString *_name;
    NSString *_language;
}

+ (id)newRegisteredEmojiSearchTokenizerInDatabase:(struct sqlite3 *)arg1 name:(id)arg2 language:(id)arg3;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDatabase:(struct sqlite3 *)arg1 name:(id)arg2 language:(id)arg3;

@end

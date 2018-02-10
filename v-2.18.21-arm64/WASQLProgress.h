//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASQLObject.h"

@class WAJID;

@interface WASQLProgress : WASQLObject
{
    _Bool _completed;
    int _value;
    WAJID *_jid;
}

+ (float)overallProgressFromDB:(struct sqlite3 *)arg1;
+ (_Bool)updateOverallProgress:(float)arg1 inDB:(struct sqlite3 *)arg2;
+ (id)selectProgressForJID:(id)arg1 fromDB:(struct sqlite3 *)arg2;
+ (id)incompleteChatJIDsAfter:(id)arg1 limit:(unsigned int)arg2 fromDB:(struct sqlite3 *)arg3;
+ (id)tableName;
+ (_Bool)createTableIfNecessaryInDB:(struct sqlite3 *)arg1;
@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) WAJID *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (id)description;
- (_Bool)bindAllValuesToStatement:(id)arg1;
- (id)allValues;
- (_Bool)populateWithDictionary:(id)arg1;
- (id)initWithJID:(id)arg1 value:(int)arg2 completed:(_Bool)arg3;
- (id)initWithJID:(id)arg1;

@end


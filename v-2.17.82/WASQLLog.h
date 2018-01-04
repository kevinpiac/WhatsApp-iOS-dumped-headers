//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASQLObject.h"

@class NSString;

@interface WASQLLog : WASQLObject
{
    int _type;
    NSString *_identifier;
    NSString *_backupIdentifier;
}

+ (BOOL)deleteAllFromDB:(struct sqlite3 *)arg1;
+ (id)selectAllFromDB:(struct sqlite3 *)arg1;
+ (id)tableName;
+ (BOOL)createTableIfNecessaryInDB:(struct sqlite3 *)arg1;
@property(readonly, nonatomic) NSString *backupIdentifier; // @synthesize backupIdentifier=_backupIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)bindAllValuesToStatement:(id)arg1;
- (id)allValues;
- (BOOL)bindIdentityToStatement:(id)arg1;
- (id)identityWhereClause;
- (BOOL)populateWithDictionary:(id)arg1;
- (id)initWithType:(int)arg1 identifier:(id)arg2 backupIdentifier:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSError, NSString;
@protocol WAServerDate;

@interface XMPPGroup : NSObject
{
    _Bool _locked;
    _Bool _announcementOnly;
    CDStruct_0714743d _expectedValues;
    NSString *_jid;
    NSString *_subject;
    NSString *_creatorJID;
    NSDate<WAServerDate> *_creationDate;
    NSDate<WAServerDate> *_subjectTimestamp;
    NSString *_subjectOwnerJID;
    NSError *_groupDescriptionError;
    NSString *_groupDescriptionID;
    NSString *_groupDescriptionOwnerJID;
    NSDate<WAServerDate> *_groupDescriptionTimestamp;
    NSString *_groupDescription;
    NSArray *_participants;
}

+ (id)groupFromGroupElement:(id)arg1 expetedValues:(CDStruct_0714743d)arg2;
+ (id)groupFromGroupElement:(id)arg1;
@property(nonatomic) CDStruct_0714743d expectedValues; // @synthesize expectedValues=_expectedValues;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
@property(retain, nonatomic) NSDate<WAServerDate> *groupDescriptionTimestamp; // @synthesize groupDescriptionTimestamp=_groupDescriptionTimestamp;
@property(copy, nonatomic) NSString *groupDescriptionOwnerJID; // @synthesize groupDescriptionOwnerJID=_groupDescriptionOwnerJID;
@property(copy, nonatomic) NSString *groupDescriptionID; // @synthesize groupDescriptionID=_groupDescriptionID;
@property(retain, nonatomic) NSError *groupDescriptionError; // @synthesize groupDescriptionError=_groupDescriptionError;
@property(nonatomic) _Bool announcementOnly; // @synthesize announcementOnly=_announcementOnly;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(copy, nonatomic) NSString *subjectOwnerJID; // @synthesize subjectOwnerJID=_subjectOwnerJID;
@property(retain, nonatomic) NSDate<WAServerDate> *subjectTimestamp; // @synthesize subjectTimestamp=_subjectTimestamp;
@property(retain, nonatomic) NSDate<WAServerDate> *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *creatorJID; // @synthesize creatorJID=_creatorJID;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)addParticipantsFromGroupElement:(id)arg1;
@property(readonly, nonatomic) _Bool hasParticipants;
- (void)addGroupDescriptionFromGroupElement:(id)arg1;
@property(readonly, nonatomic) _Bool hasGroupDescriptionValue;

@end

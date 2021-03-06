//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAVCardSerializing-Protocol.h"

@class NSString, WAContact;

@interface WAVCardSharingUnit : NSObject <WAVCardSerializing>
{
    WAContact *_contact;
    unsigned int _multiValueIndex;
    BOOL _sharingEnabled;
    NSString *_labelText;
    NSString *_valueText;
}

+ (int)nextVCardCustomItemIndex;
+ (id)sharingUnitForContact:(id)arg1 index:(unsigned int)arg2;
+ (id)sharingUnitForContact:(id)arg1;
@property(copy, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(nonatomic) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *stringForVCard;
- (id)initWithContact:(id)arg1 index:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


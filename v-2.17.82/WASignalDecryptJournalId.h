//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WASignalDecryptJournalId : NSObject
{
    NSString *_domain;
    NSString *_uniqueId;
}

@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)stringJournalId;
- (id)initWithDomain:(id)arg1 uniqueId:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAChatSessionTransactionListener : NSObject
{
    CDUnknownBlockType _markedArchived;
    CDUnknownBlockType _markedTrusted;
    CDUnknownBlockType _changedSubject;
    CDUnknownBlockType _handleMessages;
    CDUnknownBlockType _handleLifecycle;
}

@property(copy, nonatomic) CDUnknownBlockType handleLifecycle; // @synthesize handleLifecycle=_handleLifecycle;
@property(copy, nonatomic) CDUnknownBlockType handleMessages; // @synthesize handleMessages=_handleMessages;
@property(copy, nonatomic) CDUnknownBlockType changedSubject; // @synthesize changedSubject=_changedSubject;
@property(copy, nonatomic) CDUnknownBlockType markedTrusted; // @synthesize markedTrusted=_markedTrusted;
@property(copy, nonatomic) CDUnknownBlockType markedArchived; // @synthesize markedArchived=_markedArchived;
- (void).cxx_destruct;
- (id)init;

@end


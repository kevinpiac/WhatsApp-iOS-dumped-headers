//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, WAChatSession, WAChatStorage;

@interface WAChatSessionExporter : NSObject
{
    WAChatStorage *_chatStorage;
    NSManagedObjectContext *_exportContext;
    // Error parsing type: Aq, name: _exportCounter
    _Bool _includesMedia;
    WAChatSession *_chatSession;
}

+ (id)textRepresentationForMessage:(id)arg1 withMetadata:(_Bool)arg2 attachmentFilename:(id)arg3;
@property(nonatomic, getter=includesMedia) _Bool includesMedia; // @synthesize includesMedia=_includesMedia;
@property(readonly, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void).cxx_destruct;
- (unsigned long long)internalExportChatSession:(id)arg1 toURL:(id)arg2 fetchRequest:(id)arg3 includeMedia:(_Bool)arg4 exportIndex:(long long)arg5 progress:(CDUnknownBlockType)arg6;
- (void)exportWithProgressUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)initWithChatSession:(id)arg1;

@end


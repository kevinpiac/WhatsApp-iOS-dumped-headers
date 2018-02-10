//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WAAssetMetadataManager, WAGraphicMediaSearchEngine, WAGraphicMediaSearchHandle;

@interface WAEmojiSearchEngine : NSObject
{
    NSArray *_unicodeOrderedEmojis;
    WAGraphicMediaSearchHandle *_lastSearchHandle;
    _Bool _available;
    NSArray *_unicodeOrderedEmojisFromJSON;
    WAGraphicMediaSearchEngine *_graphicMediaSearchEngine;
    WAAssetMetadataManager *_metadataManager;
}

+ (id)requestWithContentTypeForRequest:(id)arg1;
+ (id)emojiDictAssetIdWithLanguages:(id)arg1;
+ (id)emojiDictDownloadURLWithLanguages:(id)arg1;
+ (id)unicodeOrderedEmojisFromJSON;
+ (id)top50Emojis;
+ (id)recentStampsText;
+ (id)databasePath;
@property(readonly, nonatomic) WAAssetMetadataManager *metadataManager; // @synthesize metadataManager=_metadataManager;
@property(readonly, nonatomic) WAGraphicMediaSearchEngine *graphicMediaSearchEngine; // @synthesize graphicMediaSearchEngine=_graphicMediaSearchEngine;
@property(copy, nonatomic) NSArray *unicodeOrderedEmojisFromJSON; // @synthesize unicodeOrderedEmojisFromJSON=_unicodeOrderedEmojisFromJSON;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateAvailabilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)unicodeOrderedEmojis;
- (id)normalizedEmoji:(id)arg1 belongingTo:(id)arg2;
- (void)populateEmojiData:(id)arg1 validEmoji:(id)arg2;
- (void)didDownloadData:(id)arg1 response:(id)arg2 emojiDictAssetId:(id)arg3 error:(id)arg4;
- (void)downloadEmojiDictsWithAvailableLanguages:(id)arg1;
- (id)keyboardLanguagesAvailable;
- (id)populateDatabaseInCurrentLanguageIfNeededTask;
- (id)primaryLanguage;
- (long long)compareFirstEmoji:(id)arg1 toSecondEmoji:(id)arg2 recentStampsText:(id)arg3 top50:(id)arg4 primaryLanguage:(id)arg5;
- (id)search:(id)arg1 language:(id)arg2 inColumn:(id)arg3 forColumn:(id)arg4 onQueue:(id)arg5 withBlock:(CDUnknownBlockType)arg6;
- (void)search:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startDatabasePopulationTask;
- (void)dealloc;
- (id)init;

@end


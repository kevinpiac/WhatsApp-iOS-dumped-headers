//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSArray, NSLayoutManager, NSLock, NSSet, NSString, NSTextContainer, NSTextStorage, WAMessageAttributedTextSliceLink;

@interface WAMessageAttributedTextSlice : WAMessageContainerSlice
{
    NSString *_originalText;
    struct CGRect _textRect;
    struct CGRect _lastLineRect;
    BOOL _needsDetectHyperlinks;
    NSLock *_textObjectsLock;
    BOOL _isSingleLine;
    BOOL _isCenterAligned;
    BOOL _isTextRTL;
    int _maximumNumberOfLines;
    int _lastValidCharacterIndex;
    WAMessageAttributedTextSliceLink *_readMoreLink;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    NSArray *_links;
    NSSet *_highlightedWords;
    NSArray *_highlightedRects;
}

+ (void)detectInviteLinksInText:(id)arg1;
+ (Class)viewClass;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *highlightedRects; // @synthesize highlightedRects=_highlightedRects;
@property(copy, nonatomic) NSSet *highlightedWords; // @synthesize highlightedWords=_highlightedWords;
@property(readonly, copy, nonatomic) NSArray *links; // @synthesize links=_links;
- (void).cxx_destruct;
- (id)rectsForCharacterRange:(struct _NSRange)arg1 inTextContainer:(id)arg2 withLayoutManager:(id)arg3;
- (BOOL)isWord:(id)arg1 foundInHighlightedWords:(id)arg2;
- (BOOL)isValidTextCheckingResult:(id)arg1 forText:(id)arg2;
- (BOOL)isSubstringInRange:(struct _NSRange)arg1 partOfMentionInString:(id)arg2;
- (id)parseInviteLinksInText:(id)arg1 attributedText:(id)arg2;
- (id)detectMentionsInText:(id)arg1 attributedText:(id)arg2;
- (id)detectSystemDataTypesInText:(id)arg1 attributedText:(id)arg2;
- (void)reallyDetectHyperlinks;
- (void)performHyperlinkDetectionIfNeeded;
- (void)performLayoutBlock:(CDUnknownBlockType)arg1;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(float)arg1;
- (void)truncateAndAppendReadMoreLinkIfNeeded;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_c67131ad)arg2 attributedText:(id)arg3 maximumNumberOfLines:(int)arg4 detectHyperlinks:(BOOL)arg5 formatText:(BOOL)arg6;

@end


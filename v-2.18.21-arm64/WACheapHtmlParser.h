//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableString, NSString, NSURL;

@interface WACheapHtmlParser : NSObject <NSXMLParserDelegate>
{
    NSMutableString *_characters;
    long long _anchorStart;
    NSURL *_url;
    NSMutableArray *_urls;
    NSMutableArray *_urlRanges;
}

@property(readonly, nonatomic) NSString *characters; // @synthesize characters=_characters;
@property(readonly, nonatomic) NSArray *urlRanges; // @synthesize urlRanges=_urlRanges;
@property(readonly, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

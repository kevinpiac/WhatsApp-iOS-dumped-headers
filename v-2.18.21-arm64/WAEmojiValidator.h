//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAEmojiValidator : NSObject
{
}

+ (unsigned long long)emojiTypeFor:(id)arg1;
+ (_Bool)shouldRenderLargeEmojiForMessageType:(int)arg1;
+ (double)largeEmojiFontSizeFromOriginalFontSize:(double)arg1 glyphCount:(long long)arg2 maxGlyphCount:(long long)arg3;
+ (unsigned long long)countToRenderLarge:(id)arg1 maximumCount:(unsigned long long)arg2;

@end

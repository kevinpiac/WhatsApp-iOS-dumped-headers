//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSArray;

@interface NSString (Additions)
+ (id)wa_robustStringWithData:(id)arg1 usingEncoding:(unsigned int)arg2;
+ (id)wa_stringWithData:(id)arg1 encodingHint:(unsigned int)arg2 actualEncoding:(unsigned int *)arg3;
+ (id)digraphs;
- (int)wa_levenshteinDistanceWithWord:(id)arg1;
- (id)wa_stringByRemovingTagsWithAnchorsHavingURLs:(out id *)arg1 ranges:(out id *)arg2;
- (id)wa_stringBetweenStartString:(id)arg1 endString:(id)arg2;
- (id)wa_componentsOfURLStringForIndexing;
- (id)wa_bestWebURLReturningMatchedText:(id *)arg1;
- (id)wa_htmlUnescapedString;
- (BOOL)wa_isPSASessionId;
- (BOOL)wa_isPSASessionJid;
- (BOOL)wa_isValidUserJid;
- (BOOL)wa_isIPv6Address;
- (BOOL)wa_isIPv4Address;
- (BOOL)wa_isIPAddress;
- (id)wa_decodedStringFromBase64;
- (id)wa_groupIdFromGjid;
- (BOOL)wa_isLocationJID;
- (id)wa_locationJIDFromJID;
- (id)wa_locationJIDFromWhatsAppID;
- (id)wa_userJIDFromUserOrStatusJID;
- (BOOL)wa_isUserJID;
- (BOOL)wa_isGroupJID;
- (BOOL)wa_isStatusJID;
- (id)wa_statusJIDFromWhatsAppID;
- (id)wa_statusJIDFromJID;
- (id)wa_domainNameFromJID;
- (id)wa_whatsAppIDFromJID;
- (id)wa_jidFromPushPayloadID;
- (id)wa_userJidFromWhatsAppID;
- (id)localPhoneNumberFormattedUsingCountryCode:(id)arg1;
- (id)unformattedPhoneNumber;
- (id)unformattedPhoneNumberFromJID;
- (id)wa_formattedPhoneNumberFromWhatsAppIDWithDirectionalMarks:(BOOL)arg1;
- (id)formattedPhoneNumber;
- (id)formattedPhoneNumberWithDirectionalMarks:(BOOL)arg1;
- (id)phoneNumberForVoiceOver;
@property(readonly, copy, nonatomic) NSString *wa_baseName;
- (id)wa_stringBySubstitutingURLs:(id)arg1;
- (id)wa_redactedURLString;
- (id)wa_redactedString;
- (id)wa_stringByReplacingGreaterThanSignWithImageUsingColor:(id)arg1 andFont:(id)arg2;
- (id)wa_substringWithComposedCharacterSequenceLength:(unsigned int)arg1;
- (unsigned int)wa_countComposedCharactersWithMaximumValue:(unsigned int)arg1;
- (void)wa_enumerateComposedCharactersInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)wa_bestStringLanguage;
- (BOOL)isRTLText;
@property(readonly, nonatomic, getter=wa_isEmptyOrWhitespace) BOOL wa_emptyOrWhitespace;
@property(readonly, nonatomic, getter=isOnlyDigits) BOOL onlyDigits;
- (id)wa_stringByDeletingNonDigits;
- (id)wa_suffixWithMaximumLength:(unsigned int)arg1;
- (id)wa_prefixWithMaximumLength:(unsigned int)arg1;
- (id)wa_stringByRemovingNewlines;
- (id)wa_trimmedStringByLimitingConsecutiveNewlinesTo:(int)arg1 wasTrimmed:(char *)arg2;
- (id)wa_trimmedStringByNormalizingNewlines;
- (id)wa_trimmedString;
- (id)wa_stringByRemovingVariationSelector;
- (id)wa_stringBySanitizingOutgoingString;
- (id)wa_stringBySanitizingWithMaximumLength:(unsigned int)arg1 options:(unsigned int)arg2;
@property(readonly, nonatomic) struct _NSRange wa_trimmedRange;
- (id)wa_stringBySanitizingUserInput;
- (id)wa_stringBySanitizingIncomingStringWithMaximumLength:(unsigned int)arg1;
- (id)wa_stringBySanitizingIncomingString;
- (id)wa_stringByRemovingSkinTone;
@property(readonly, nonatomic) NSArray *tokens;
- (id)normalizedLatinString;
- (id)normalizedString;
- (id)wa_SHA256Hash;
- (BOOL)wa_containsString:(id)arg1;
@end


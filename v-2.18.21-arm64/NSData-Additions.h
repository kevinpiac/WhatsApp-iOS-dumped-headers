//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (Additions)
+ (id)wa_randomDataOfLength:(unsigned long long)arg1;
- (id)wa_URLEncodedString;
- (id)wa_SHA256String;
- (id)wa_MD5String;
- (id)wa_stringValue;
- (id)wa_stringDump;
- (id)wa_subdataCopyWithRange:(struct _NSRange)arg1;
- (unsigned int)wa_uint31;
- (id)wa_base64DecodedData;
- (id)wa_URLSafeBase64DecodedData;
- (id)wa_base64EncodedString;
- (id)wa_URLSafeBase64EncodedString;
- (id)wa_UTF8StringValue;
- (id)wa_SHA256Digest;
- (id)wa_MD5Digest;
- (_Bool)wa_constantTimeIsEqualToData:(id)arg1;
@end


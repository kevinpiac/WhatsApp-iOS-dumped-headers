//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KeychainWrapper : NSObject
{
}

+ (_Bool)updateKeychainValue:(id)arg1 forIdentifier:(id)arg2;
+ (_Bool)createKeychainValue:(id)arg1 forIdentifier:(id)arg2;
+ (id)keychainItemMatching:(id)arg1 withAccessibilityControl:(_Bool)arg2 modificationDate:(id *)arg3;
+ (id)searchDictionary:(id)arg1 withAccessibilityControl:(_Bool)arg2;
+ (void)deleteKeychainValueWithIdentifier:(id)arg1;
+ (void)setKeychainValue:(id)arg1 forIdentifier:(id)arg2;
+ (id)keychainValueWithIdentifier:(id)arg1 modificationDate:(id *)arg2;
+ (id)keychainValueWithIdentifier:(id)arg1;

@end


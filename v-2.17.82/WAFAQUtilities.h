//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAFAQUtilities : NSObject
{
}

+ (id)faqSearchURLWithQuery:(id)arg1;
+ (id)bizBecameConsumerURL;
+ (id)bizChangedToVerifiedURL;
+ (id)bizChangedToUnverifiedURL;
+ (id)bizInitialVerifiedURL;
+ (id)invalidEmojiInProfileArticleURL;
+ (id)regTooManyAttemptsArticleURL;
+ (id)callUnavalableInCountryArticleURL;
+ (id)e2eSecurityArticleURL;
+ (id)e2eFutureproofLearnMoreURL;
+ (id)e2ePlaceholderLearnMoreURL;
+ (id)e2eIdentityChangeLearnMoreURL;
+ (id)e2eGenericLearnMoreArticleURL;
+ (id)urlForArticle:(unsigned int)arg1 ofType:(unsigned int)arg2;
+ (id)stringForCategory:(unsigned int)arg1;
+ (id)baseFAQURLComponents;
+ (id)baseFAQURL;

@end

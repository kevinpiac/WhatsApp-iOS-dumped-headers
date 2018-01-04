//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, XMPPBusinessVertical;

@interface XMPPBusinessProfile : NSObject
{
    int _tag;
    NSString *_address;
    NSString *_businessDescription;
    XMPPBusinessVertical *_vertical;
    NSString *_email;
    NSArray *_websites;
}

+ (id)profileFromBusinessProfileElement:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *websites; // @synthesize websites=_websites;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) XMPPBusinessVertical *vertical; // @synthesize vertical=_vertical;
@property(readonly, copy, nonatomic) NSString *businessDescription; // @synthesize businessDescription=_businessDescription;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) int tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)initWithBusinessProfileElement:(id)arg1;

@end

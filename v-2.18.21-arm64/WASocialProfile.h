//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface WASocialProfile : NSObject
{
    // Error parsing type: , name: type
    // Error parsing type: , name: webURL
    // Error parsing type: , name: deepLinkURL
    // Error parsing type: , name: info
    // Error parsing type: , name: icon
    // Error parsing type: , name: name
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)arg1 webURL:(id)arg2 deepLinkURL:(id)arg3 info:(id)arg4;
@property(nonatomic, readonly) NSString *name; // @synthesize name;
@property(nonatomic, readonly) UIImage *icon; // @synthesize icon;
@property(nonatomic, readonly) NSString *info; // @synthesize info;
@property(nonatomic, readonly) NSURL *deepLinkURL; // @synthesize deepLinkURL;
@property(nonatomic, readonly) NSURL *webURL; // @synthesize webURL;
@property(nonatomic, readonly) long long type; // @synthesize type;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface WAStickerPack : NSObject <NSSecureCoding>
{
    NSString *_stickerPackId;
    NSString *_name;
    NSString *_publisher;
    NSString *_packDescription;
    NSURL *_previewImageURL;
    NSURL *_previewImageRowURL;
    NSURL *_previewImageListURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSURL *previewImageListURL; // @synthesize previewImageListURL=_previewImageListURL;
@property(readonly, copy, nonatomic) NSURL *previewImageRowURL; // @synthesize previewImageRowURL=_previewImageRowURL;
@property(readonly, copy, nonatomic) NSURL *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(readonly, copy, nonatomic) NSString *packDescription; // @synthesize packDescription=_packDescription;
@property(readonly, copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *stickerPackId; // @synthesize stickerPackId=_stickerPackId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStickerPackId:(id)arg1 name:(id)arg2 publisher:(id)arg3 packDescription:(id)arg4 previewImageURL:(id)arg5 previewImageRowURL:(id)arg6 previewImageListURL:(id)arg7;

@end


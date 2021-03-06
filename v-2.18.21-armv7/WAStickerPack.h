//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "WAStickerPackInfoProviding-Protocol.h"

@class NSArray, NSString;

@interface WAStickerPack : NSObject <NSSecureCoding, WAStickerPackInfoProviding>
{
    NSString *_stickerPackId;
    NSString *_name;
    NSString *_publisher;
    NSString *_packDescription;
    NSString *_previewMainImageId;
    NSString *_trayImageId;
    NSArray *_previewImageIds;
    long long _stickerCount;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *previewImageIds; // @synthesize previewImageIds=_previewImageIds;
@property(readonly, copy, nonatomic) NSString *trayImageId; // @synthesize trayImageId=_trayImageId;
@property(readonly, nonatomic) long long stickerCount; // @synthesize stickerCount=_stickerCount;
@property(readonly, copy, nonatomic) NSString *previewMainImageId; // @synthesize previewMainImageId=_previewMainImageId;
@property(readonly, copy, nonatomic) NSString *packDescription; // @synthesize packDescription=_packDescription;
@property(readonly, copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *stickerPackId; // @synthesize stickerPackId=_stickerPackId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL firstParty;
@property(readonly, nonatomic, getter=isInMyStickersList) BOOL inMyStickersList;
- (id)initWithStickerPackId:(id)arg1 name:(id)arg2 publisher:(id)arg3 packDescription:(id)arg4 previewMainImageId:(id)arg5 stickerCount:(long long)arg6 trayImageId:(id)arg7 previewImageIds:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


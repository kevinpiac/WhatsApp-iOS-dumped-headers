//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMPPUPIHandleResponse : NSObject
{
    NSString *_jid;
    NSString *_handle;
    NSString *_nodal;
    NSString *_nodalAllowed;
}

+ (id)responseFromStanza:(id)arg1;
@property(copy, nonatomic) NSString *nodalAllowed; // @synthesize nodalAllowed=_nodalAllowed;
@property(copy, nonatomic) NSString *nodal; // @synthesize nodal=_nodal;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (id)description;

@end


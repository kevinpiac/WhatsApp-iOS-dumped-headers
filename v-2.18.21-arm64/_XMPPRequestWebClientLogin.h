//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_XMPPWebClientRequest.h"

@interface _XMPPRequestWebClientLogin : _XMPPWebClientRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)syncElementWithWebReference:(id)arg1;
- (id)initWithWebReference:(id)arg1 clientToken:(id)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

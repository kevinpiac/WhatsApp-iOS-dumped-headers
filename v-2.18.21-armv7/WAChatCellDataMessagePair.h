//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAChatCellData, WAMessage;

@interface WAChatCellDataMessagePair : NSObject
{
    WAMessage *_message;
    WAChatCellData *_cellData;
}

@property(readonly, nonatomic) WAChatCellData *cellData; // @synthesize cellData=_cellData;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 inCellData:(id)arg2;

@end


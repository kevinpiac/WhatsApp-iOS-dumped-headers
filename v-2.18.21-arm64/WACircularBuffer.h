//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface WACircularBuffer : NSObject
{
    unsigned long long _length;
    NSMutableData *_internalBuffer;
}

- (void).cxx_destruct;
- (id)fetchCurrentData;
- (void)fillWithDataIn:(const void *)arg1 dataInLength:(unsigned long long)arg2;
- (id)initWithLength:(unsigned long long)arg1;

@end


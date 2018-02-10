//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAVertexBufferObjectBuilder : NSObject
{
    unsigned int _target;
    _Bool _haveData;
    const void *_data;
    long long _size;
    unsigned int _usage;
    _Bool _enableAttributeArrray;
    int _componentsPerAttribute;
    unsigned int _type;
    unsigned char _normalized;
    int _stride;
    const void *_pointer;
    unsigned int _index;
    _Bool _built;
}

- (id)build;
- (void)setVertexAttributePointer:(const void *)arg1 componentsPerAttribute:(int)arg2 type:(unsigned int)arg3 normalized:(unsigned char)arg4 stride:(int)arg5 index:(unsigned int)arg6;
- (void)setData:(const void *)arg1 size:(long long)arg2 usage:(unsigned int)arg3;
- (id)initWithTarget:(unsigned int)arg1;

@end

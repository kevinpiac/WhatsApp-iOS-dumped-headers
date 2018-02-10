//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WAGLProgram : NSObject
{
    unsigned int _program;
    NSMutableArray *_shaders;
    NSMutableDictionary *_attributeNames;
}

- (void).cxx_destruct;
- (BOOL)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 file:(id)arg3 prefix:(id)arg4;
- (void)deleteShadersAndDetach:(BOOL)arg1;
- (unsigned int)indexForAttributeNamed:(id)arg1;
- (BOOL)setValueOfUniformLocation:(int)arg1 toInt:(int)arg2;
- (BOOL)use;
- (int)uniformLocationNamed:(id)arg1;
- (BOOL)link;
- (void)bindAttributeName:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)addShader:(id)arg1 ofType:(unsigned int)arg2 withPrefix:(id)arg3;
- (BOOL)addShader:(id)arg1 ofType:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end


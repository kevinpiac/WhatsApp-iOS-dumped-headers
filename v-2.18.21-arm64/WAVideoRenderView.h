//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EAGLContext, UIBlurEffect;

@interface WAVideoRenderView : UIView
{
    UIView *_blurredView;
    _Bool _bufferInitFailed;
    EAGLContext *_oglContext;
    struct gl_buffers *_gl_buf;
    UIBlurEffect *_blurEffect;
}

@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
@property(nonatomic) _Bool bufferInitFailed; // @synthesize bufferInitFailed=_bufferInitFailed;
@property(nonatomic) struct gl_buffers *gl_buf; // @synthesize gl_buf=_gl_buf;
@property(retain, nonatomic) EAGLContext *oglContext; // @synthesize oglContext=_oglContext;
- (void).cxx_destruct;
@property(nonatomic) _Bool blurred;
- (void)resizeGLBuffer;
- (void)ensureGLBufferResized:(int)arg1;
- (void)publishResizeEvent:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1 center:(struct CGPoint)arg2 isUserAction:(_Bool)arg3;

@end


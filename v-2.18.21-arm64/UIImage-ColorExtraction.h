//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (ColorExtraction)
- (struct _WAColorSwatch *)wa_quantizeColors:(id)arg1 count:(long long)arg2 actualCount:(long long *)arg3;
- (struct _WAColorSwatch *)wa_extractDominantColorsWithTargetCount:(long long)arg1 actualCount:(long long *)arg2;
- (struct vImage_Buffer)wa_ARGBImageBufferForColorAnalysis;
- (id)wa_extractVibrantColor;
@end


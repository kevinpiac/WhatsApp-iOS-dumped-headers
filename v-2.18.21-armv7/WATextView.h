//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "NSLayoutManagerDelegate-Protocol.h"

@class NSString;

@interface WATextView : UITextView <NSLayoutManagerDelegate>
{
}

- (id)originalAttributedText;
- (id)originalText;
- (void)setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


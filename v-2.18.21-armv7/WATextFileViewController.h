//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class NSString, UITextView;

@interface WATextFileViewController : WAViewController
{
    NSString *_pageTitle;
    UITextView *_textView;
    NSString *_pathToTextFile;
}

@property(copy, nonatomic) NSString *pathToTextFile; // @synthesize pathToTextFile=_pathToTextFile;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithFilePath:(id)arg1;

@end


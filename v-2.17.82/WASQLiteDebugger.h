//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WASQLiteDebugger : NSObject
{
}

+ (void)runSQLiteMetaCommand:(id)arg1 output:(struct __sFILE *)arg2;
+ (void)closeSQLiteShell;
+ (BOOL)openSQLiteShellForDatabaseAtPath:(id)arg1;
+ (id)queue;

@end


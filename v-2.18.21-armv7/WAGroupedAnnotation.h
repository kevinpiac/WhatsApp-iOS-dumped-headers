//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAHideableMapAnnotation-Protocol.h"
#import "WAMapAnnotationWithCount-Protocol.h"

@class NSArray, NSSet, NSString, WAClusterableAnnotation;

@interface WAGroupedAnnotation : NSObject <WAHideableMapAnnotation, WAMapAnnotationWithCount>
{
    BOOL hidden;
    BOOL _dimmed;
    BOOL _highlightDot;
    BOOL _focused;
    BOOL _pendingBounce;
    NSString *_identifier;
    int _level;
    NSArray *_members;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) BOOL pendingBounce; // @synthesize pendingBounce=_pendingBounce;
@property(nonatomic) BOOL focused; // @synthesize focused=_focused;
@property(nonatomic) BOOL highlightDot; // @synthesize highlightDot=_highlightDot;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) int level; // @synthesize level=_level;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL hidden; // @synthesize hidden;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSSet *jids;
@property(readonly, nonatomic) WAClusterableAnnotation *representativeAnnotation;
@property(readonly, nonatomic) int count;
- (id)initWithMembers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersFetchedResultLookup-Protocol.h"

@class SCDocObjectObserver;

@interface SCSnapchatterObserver : NSObject <SCSnapchattersFetchedResultLookup>
{
    SCDocObjectObserver *_observer;
}

- (void).cxx_destruct;
- (id)initWithDocObjectContext:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;
- (id)snapchatter;
- (id)snapchatterWithUserId:(id)arg1;
- (id)snapchatterWithUsername:(id)arg1;

@end


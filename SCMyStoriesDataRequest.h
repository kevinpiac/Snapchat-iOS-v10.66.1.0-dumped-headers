//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCMyStoriesDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSArray *_handleSnapsUpdated_updatedSnaps;
}

+ (id)handleSnapsUpdatedWithUpdatedSnaps:(id)arg1;
+ (id)handleStoriesUpdated;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchHandleStoriesUpdated:(CDUnknownBlockType)arg1 handleSnapsUpdated:(CDUnknownBlockType)arg2;

@end

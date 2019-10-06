//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol SCPerforming;

@interface SCGroupLeaveStateTracker : NSObject
{
    id <SCPerforming> _performer;
    NSMutableSet *_currentlyLeavingGroupIds;
    NSMutableDictionary *_leftGroupVersionByGroupId;
    NSDictionary *_leftGroupVersionByGroupIdSnapshot_DEPRECATED;
}

- (void).cxx_destruct;
- (void)_takeLeftGroupVersionByGroupIdSnapshot_DEPRECATED;
- (void)clear;
- (void)clearCurrentlyLeavingGroup:(id)arg1;
- (void)clearLeftGroupVersion:(id)arg1;
- (id)initWithPerformer:(id)arg1;
- (_Bool)isGroupInLeavingState:(id)arg1;
- (_Bool)isGroupLeftGroup:(id)arg1;
- (long long)leftGroupVersion:(id)arg1;
@property(retain) NSDictionary *leftGroupVersionByGroupIdSnapshot_DEPRECATED; // @synthesize leftGroupVersionByGroupIdSnapshot_DEPRECATED=_leftGroupVersionByGroupIdSnapshot_DEPRECATED;
- (void)startLeavingGroup:(id)arg1;

@end


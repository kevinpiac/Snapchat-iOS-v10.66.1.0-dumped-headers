//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSSMPublicUserStoryMetadata, SCSSMStoryFragmentMetadata, SCSSMStoryPrefetchMetadata;

@interface SCSSMPublicUserStoryCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSSMStoryFragmentMetadata *fragmentMetadata; // @dynamic fragmentMetadata;
@property(nonatomic) _Bool hasFragmentMetadata; // @dynamic hasFragmentMetadata;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasPrefetchMetadata; // @dynamic hasPrefetchMetadata;
@property(retain, nonatomic) SCSSMPublicUserStoryMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) SCSSMStoryPrefetchMetadata *prefetchMetadata; // @dynamic prefetchMetadata;
@property(retain, nonatomic) NSMutableArray *snapsArray; // @dynamic snapsArray;
@property(readonly, nonatomic) unsigned long long snapsArray_Count; // @dynamic snapsArray_Count;

@end


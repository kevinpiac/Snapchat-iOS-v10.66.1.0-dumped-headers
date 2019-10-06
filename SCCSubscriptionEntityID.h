//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString, SCCSubscriptionLegacyInfoForFetching;

@interface SCCSubscriptionEntityID : SCComposerMarshallableObject
{
    NSString *_entityID;
    SCCSubscriptionLegacyInfoForFetching *_legacyInfoForFetching;
    long long _entityType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *entityID; // @synthesize entityID=_entityID;
@property(nonatomic) long long entityType; // @synthesize entityType=_entityType;
- (id)initWithEntityID:(id)arg1 legacyInfoForFetching:(id)arg2 entityType:(long long)arg3;
@property(retain, nonatomic) SCCSubscriptionLegacyInfoForFetching *legacyInfoForFetching; // @synthesize legacyInfoForFetching=_legacyInfoForFetching;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCCSubscriptionLegacyInfoForFetching : SCComposerMarshallableObject
{
    NSString *_username;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithUsername:(id)arg1;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end


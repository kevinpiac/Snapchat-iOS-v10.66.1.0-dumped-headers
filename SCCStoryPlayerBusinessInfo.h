//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSData;

@interface SCCStoryPlayerBusinessInfo : SCComposerMarshallableObject
{
    NSData *_encodedBusinessProfile;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *encodedBusinessProfile; // @synthesize encodedBusinessProfile=_encodedBusinessProfile;
- (id)initWithEncodedBusinessProfile:(id)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end


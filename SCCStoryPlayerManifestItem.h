//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSData, SCCStoryPlayerBusinessInfo;

@interface SCCStoryPlayerManifestItem : SCComposerMarshallableObject
{
    NSData *_encodedStoryManifest;
    SCCStoryPlayerBusinessInfo *_businessInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCCStoryPlayerBusinessInfo *businessInfo; // @synthesize businessInfo=_businessInfo;
@property(copy, nonatomic) NSData *encodedStoryManifest; // @synthesize encodedStoryManifest=_encodedStoryManifest;
- (id)initWithEncodedStoryManifest:(id)arg1 businessInfo:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end

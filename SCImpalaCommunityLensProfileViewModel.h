//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString, SCImpalaPublicProfileEntryInfo;

@interface SCImpalaCommunityLensProfileViewModel : SCComposerMarshallableObject
{
    _Bool _animatedLensThumbnailsEnabled;
    NSString *_userId;
    NSString *_userDisplayName;
    SCImpalaPublicProfileEntryInfo *_entryInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animatedLensThumbnailsEnabled; // @synthesize animatedLensThumbnailsEnabled=_animatedLensThumbnailsEnabled;
@property(retain, nonatomic) SCImpalaPublicProfileEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
- (id)initWithUserId:(id)arg1 userDisplayName:(id)arg2 entryInfo:(id)arg3 animatedLensThumbnailsEnabled:(_Bool)arg4;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString, SCImpalaPublicProfileEntryInfo;

@interface SCImpalaPublisherProfileV2ViewModel : SCComposerMarshallableObject
{
    _Bool _autoSubscribe;
    NSString *_businessProfileId;
    NSString *_showId;
    SCImpalaPublicProfileEntryInfo *_entryInfo;
    NSString *_bitmojiAvatarId;
    NSNumber *_extrasAbEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoSubscribe; // @synthesize autoSubscribe=_autoSubscribe;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
@property(retain, nonatomic) SCImpalaPublicProfileEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
@property(retain, nonatomic) NSNumber *extrasAbEnabled; // @synthesize extrasAbEnabled=_extrasAbEnabled;
- (id)initWithBusinessProfileId:(id)arg1 showId:(id)arg2 entryInfo:(id)arg3 bitmojiAvatarId:(id)arg4 autoSubscribe:(_Bool)arg5;
- (id)initWithBusinessProfileId:(id)arg1 showId:(id)arg2 entryInfo:(id)arg3 bitmojiAvatarId:(id)arg4 autoSubscribe:(_Bool)arg5 extrasAbEnabled:(id)arg6;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;

@end


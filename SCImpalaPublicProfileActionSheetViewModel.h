//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString, SCImpalaPublicProfileEntryInfo;

@interface SCImpalaPublicProfileActionSheetViewModel : SCComposerMarshallableObject
{
    _Bool _previewMode;
    _Bool _lensCreatorPublicProfilesAbEnabled;
    _Bool _commerceStoreButtonAbEnabled;
    _Bool _forceShowDevCommerceStoreButton;
    _Bool _reportTileAbEnabled;
    NSString *_businessProfileId;
    SCImpalaPublicProfileEntryInfo *_entryInfo;
    NSNumber *_highlightsAbEnabled;
    NSNumber *_nullStateAbEnabled;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
@property(nonatomic) _Bool commerceStoreButtonAbEnabled; // @synthesize commerceStoreButtonAbEnabled=_commerceStoreButtonAbEnabled;
@property(retain, nonatomic) SCImpalaPublicProfileEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
@property(nonatomic) _Bool forceShowDevCommerceStoreButton; // @synthesize forceShowDevCommerceStoreButton=_forceShowDevCommerceStoreButton;
@property(retain, nonatomic) NSNumber *highlightsAbEnabled; // @synthesize highlightsAbEnabled=_highlightsAbEnabled;
- (id)initWithBusinessProfileId:(id)arg1 entryInfo:(id)arg2 previewMode:(_Bool)arg3 lensCreatorPublicProfilesAbEnabled:(_Bool)arg4 commerceStoreButtonAbEnabled:(_Bool)arg5 forceShowDevCommerceStoreButton:(_Bool)arg6 reportTileAbEnabled:(_Bool)arg7 highlightsAbEnabled:(id)arg8;
- (id)initWithBusinessProfileId:(id)arg1 entryInfo:(id)arg2 previewMode:(_Bool)arg3 lensCreatorPublicProfilesAbEnabled:(_Bool)arg4 commerceStoreButtonAbEnabled:(_Bool)arg5 forceShowDevCommerceStoreButton:(_Bool)arg6 reportTileAbEnabled:(_Bool)arg7 highlightsAbEnabled:(id)arg8 nullStateAbEnabled:(id)arg9;
@property(nonatomic) _Bool lensCreatorPublicProfilesAbEnabled; // @synthesize lensCreatorPublicProfilesAbEnabled=_lensCreatorPublicProfilesAbEnabled;
@property(retain, nonatomic) NSNumber *nullStateAbEnabled; // @synthesize nullStateAbEnabled=_nullStateAbEnabled;
@property(nonatomic) _Bool previewMode; // @synthesize previewMode=_previewMode;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(nonatomic) _Bool reportTileAbEnabled; // @synthesize reportTileAbEnabled=_reportTileAbEnabled;

@end


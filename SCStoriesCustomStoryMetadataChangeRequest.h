//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString, SCStoriesCustomStoryCreationInfo, SCStoriesCustomStorySortingHints, SCStoriesGeoStoryConfig;

@interface SCStoriesCustomStoryMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _currentUserCanPost;
    _Bool _isInactive;
    _Bool _currentUserCanAutosave;
    _Bool _currentUserAutosaveEnabled;
    NSString *_publicationId;
    long long _type;
    NSString *_mischiefId;
    NSString *_displayName;
    NSString *_subText;
    double _metadataTimestamp;
    SCStoriesCustomStoryCreationInfo *_creationInfo;
    SCStoriesGeoStoryConfig *_geoConfig;
    NSArray *_participants;
    NSArray *_posterIdsPermitted;
    NSArray *_viewerIdsPermitted;
    SCStoriesCustomStorySortingHints *_sortingHints;
}

+ (id)changeRequestForStoriesCustomStoryMetadata:(id)arg1;
+ (id)creationRequestWithStoriesCustomStoryMetadata:(id)arg1;
+ (id)deletionRequestForStoriesCustomStoryMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesCustomStoryMetadata;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(copy, nonatomic) SCStoriesCustomStoryCreationInfo *creationInfo; // @synthesize creationInfo=_creationInfo;
@property(nonatomic) _Bool currentUserAutosaveEnabled; // @synthesize currentUserAutosaveEnabled=_currentUserAutosaveEnabled;
@property(nonatomic) _Bool currentUserCanAutosave; // @synthesize currentUserCanAutosave=_currentUserCanAutosave;
@property(nonatomic) _Bool currentUserCanPost; // @synthesize currentUserCanPost=_currentUserCanPost;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) SCStoriesGeoStoryConfig *geoConfig; // @synthesize geoConfig=_geoConfig;
- (id)initWithRowid:(long long)arg1 publicationId:(id)arg2 type:(long long)arg3 mischiefId:(id)arg4 displayName:(id)arg5 subText:(id)arg6 metadataTimestamp:(double)arg7 creationInfo:(id)arg8 geoConfig:(id)arg9 currentUserCanPost:(_Bool)arg10 participants:(id)arg11 posterIdsPermitted:(id)arg12 viewerIdsPermitted:(id)arg13 isInactive:(_Bool)arg14 sortingHints:(id)arg15 currentUserCanAutosave:(_Bool)arg16 currentUserAutosaveEnabled:(_Bool)arg17;
@property(nonatomic) _Bool isInactive; // @synthesize isInactive=_isInactive;
@property(nonatomic) double metadataTimestamp; // @synthesize metadataTimestamp=_metadataTimestamp;
@property(copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSArray *posterIdsPermitted; // @synthesize posterIdsPermitted=_posterIdsPermitted;
@property(copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
@property(copy, nonatomic) SCStoriesCustomStorySortingHints *sortingHints; // @synthesize sortingHints=_sortingHints;
@property(copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *viewerIdsPermitted; // @synthesize viewerIdsPermitted=_viewerIdsPermitted;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


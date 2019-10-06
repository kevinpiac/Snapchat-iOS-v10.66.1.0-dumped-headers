//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EGODatabaseStatement, GeoParser, NSArray, NSDateFormatter, NSDictionary, NSMutableDictionary, NSMutableSet, SCGallerySearchLocalizationHelper, SCGalleryTagClusterIndexer, SCGalleryTakenNearbySearch, SCMemoriesSearchDatabase, SCUserSession;
@protocol SCPerforming;

@interface SCGallerySearch : NSObject
{
    SCUserSession *_userSession;
    id <SCPerforming> _performer;
    NSDateFormatter *_dateFormatter;
    SCGalleryTagClusterIndexer *_tagClusterIndexer;
    SCGalleryTakenNearbySearch *_takenNearbySearcher;
    SCMemoriesSearchDatabase *_memoriesSearchDatabase;
    NSMutableDictionary *_visualTagConfidenceMapping;
    NSMutableSet *_distinctVisualTagSet;
    NSMutableSet *_distinctTimeTagSet;
    NSMutableSet *_distinctGeoTagSet;
    NSMutableSet *_distinctMetaTagSet;
    NSMutableSet *_distinctUserSpecificTagSet;
    NSMutableSet *_distinctTranslatableTagSet;
    EGODatabaseStatement *_querySnapIdsByTag;
    EGODatabaseStatement *_queryConfidenceWithSnapIdAndTag;
    EGODatabaseStatement *_querySnapInfoByStringMatching;
    EGODatabaseStatement *_querySnapCountFromStringMatching;
    EGODatabaseStatement *_querySnapIdVisualTagConfsByCluster;
    EGODatabaseStatement *_queryLocationForSnapIds;
    EGODatabaseStatement *_querySnapsForOneTimeTag;
    EGODatabaseStatement *_queryDistinctVisualTags;
    EGODatabaseStatement *_queryDistinctLocationTags;
    EGODatabaseStatement *_queryDistinctTimeTags;
    EGODatabaseStatement *_queryDistinctMetaTags;
    EGODatabaseStatement *_querySnapIdsByCaptionExactMatch;
    EGODatabaseStatement *_querySnapIdsByCaptionPrefixMatch;
    NSArray *_serverQuerySearchResults;
    NSArray *_fallbackSearchResults;
    NSDictionary *_thresholdForConcepts;
    float _overallThreshold;
    GeoParser *_geoParser;
    SCGallerySearchLocalizationHelper *_localizationHelper;
}

- (void).cxx_destruct;
- (float)_acceptanceForConcept:(id)arg1;
- (void)_addIntermediateSearchResults:(id)arg1 toSearchResults:(id)arg2 includePrivate:(_Bool)arg3;
- (id)_appendQuerys:(id)arg1 withTags:(id)arg2;
- (void)_appendSearchResults:(id)arg1 toSearchResults:(id)arg2;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (id)_assembleSearchResultWithSnapMatchInfos:(id)arg1 entries:(id)arg2 snaps:(id)arg3 resultTitle:(id)arg4;
- (id)_assembleSearchResultsFromSearchIntermediateResults:(id)arg1 includePrivate:(_Bool)arg2;
- (id)_autocompleteConceptToSnapMatchInfosDictForPrefix:(id)arg1;
- (id)_autocompleteUserSpecificConcept:(id)arg1;
- (id)_fetchDistinctTags:(id)arg1 database:(id)arg2;
- (id)_findMatchedConceptSimilarityPairsForQueryToken:(id)arg1 fromTagSet:(id)arg2;
- (id)_findMatchedConceptsForQueryToken:(id)arg1 withMatchedGeoTagSet:(id)arg2 withMatchedTimeTagSet:(id)arg3;
- (id)_getConceptArraysFromUserQuery:(id)arg1 withMatchedGeoTagSet:(id)arg2 withMatchedTimeTagSet:(id)arg3;
- (id)_getQuerys:(id)arg1 withDictionary:(id)arg2 withMatchedGeoTagSet:(id)arg3 withMatchedTimeTagSet:(id)arg4;
- (id)_getTagsFromString:(id)arg1;
- (unsigned long long)_hashTokenArray:(id)arg1;
- (_Bool)_isInterpretableWithoutTagMatching:(id)arg1;
- (_Bool)_isUserSpecificConcept:(id)arg1;
- (_Bool)_isValidConcept:(id)arg1 inputLanguageId:(id)arg2;
- (id)_normalizeString:(id)arg1;
- (id)_outerJoinDictionary:(id)arg1 andDictionary:(id)arg2;
- (id)_prefixMatchingConceptToSnapMatchInfosDictForPrefix:(id)arg1 languageId:(id)arg2;
- (int)_querySqliteForNumberOfResultsWithFullTextSearch:(id)arg1;
- (id)_querySqliteForOffsetsWithFullTextSearch:(id)arg1;
- (void)_reloadThresholdForConcepts;
- (id)_searchResultFromCaptionMatching:(id)arg1 source:(long long)arg2;
- (id)_searchResultsForQuery:(id)arg1 inputLocale:(id)arg2 includePrivate:(_Bool)arg3 source:(long long)arg4 request:(id)arg5 queue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_searchResultsFromFuzzyMatching:(id)arg1 includePrivate:(_Bool)arg2 searchResults:(id)arg3 geoNearbyResults:(id)arg4 timeAroundResults:(id)arg5 request:(id)arg6 queue:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_searchResultsFromPrefixMatching:(id)arg1 inputLocale:(id)arg2 includePrivate:(_Bool)arg3 searchResults:(id)arg4 geoNearbyResults:(id)arg5 timeAroundResults:(id)arg6 request:(id)arg7 queue:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)_searchResultsFromSuggestedResults:(id)arg1;
- (id)_segmentUserQueryIntoConcepts:(id)arg1 inputLanguageId:(id)arg2;
- (void)_setupDatabase:(id)arg1;
- (id)_similarResultsForQuery:(id)arg1 includePrivate:(_Bool)arg2 request:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_snapMatchInfosForCaptionMatchingText:(id)arg1 source:(long long)arg2;
- (id)_snapMatchInfosFromFuzzyTimeParsing:(id)arg1;
- (id)_snapMatchInfosFromGeoParsing:(id)arg1 matchingQuery:(id *)arg2 allowAutocorrect:(_Bool)arg3;
- (id)_snapMatchInfosFromMatchingConcept:(id)arg1;
- (id)_snapMatchInfosFromTagMatching:(id)arg1;
- (id)_snapMatchInfosFromTimeParsing:(id)arg1;
- (id)_snapMatchInfosFromUserSpecificConcept:(id)arg1;
- (id)_storyTitleSearchResultWithUserQuery:(id)arg1 includePrivate:(_Bool)arg2;
- (double)_tagConfidenceForSnap:(id)arg1 tag:(id)arg2;
- (id)_tokenize:(id)arg1;
- (id)_unionResultsWithSameResultTitle:(id)arg1 newResult:(id)arg2;
- (void)addToTagSetFromTags:(id)arg1 inTagType:(long long)arg2;
- (id)fetchSearchResultWithSnapIdGroups:(id)arg1 resultTitle:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)fetchSearchResultWithSnapIds:(id)arg1 resultTitle:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isInsideSearchPerformer;
- (id)searchTimeLocationClusterWithTimetags:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)searchWithClusterNames:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)searchWithConcepts:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)searchWithTypeahead:(id)arg1 inputLocale:(id)arg2 includePrivate:(_Bool)arg3 source:(long long)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)searchableThresholdForConcept:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


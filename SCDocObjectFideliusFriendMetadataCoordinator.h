//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFideliusFriendMetadataCoordinating-Protocol.h"

@class SCDocObjectContext, SCDocObjectFetchedResult, SCQueuePerformer;
@protocol SCDocObjectObservationToken;

@interface SCDocObjectFideliusFriendMetadataCoordinator : NSObject <SCFideliusFriendMetadataCoordinating>
{
    SCDocObjectContext *_docObjectContext;
    SCQueuePerformer *_fetcherPerformer;
    SCQueuePerformer *_mutatorPerformer;
    id <SCDocObjectObservationToken> _observationToken;
    SCDocObjectFetchedResult *_fideliusFriendMetadata;
    struct NSDictionary *_fideliusFriendMetadataMap;
}

- (void).cxx_destruct;
- (void)_fetchAndObserveFideliusFriendMetadata;
- (void)_setFideliusFriendMetadata:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setFideliusFriendMetadatas:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateFideliusFriendMetadataMapWithFetchedResult:(id)arg1;
- (struct NSDictionary *)fideliusFriendMetadataMap;
- (id)fideliusFriendMetadataWithUserId:(id)arg1;
- (id)initWithDocObjectContext:(id)arg1;
- (void)setFideliusFriendMetadata:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFideliusFriendMetadatas:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


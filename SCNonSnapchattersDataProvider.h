//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNonSnapchattersDataFetching-Protocol.h"

@class SCDocObjectContext, SCDocObjectFetchedResult, SCQueuePerformer;
@protocol SCDocObjectObservationToken;

@interface SCNonSnapchattersDataProvider : NSObject <SCNonSnapchattersDataFetching>
{
    SCDocObjectContext *_docObjectContext;
    SCQueuePerformer *_performer;
    SCDocObjectFetchedResult *_contactNonSnapchatters;
    id <SCDocObjectObservationToken> _contactNonSnapchattersObservationToken;
}

- (void).cxx_destruct;
- (void)_beginObserveContactNonSnapchatters;
- (void)_fetchAndObserveContactNonSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_mutateContactNonSnapchatters:(id)arg1;
- (id)contactNonSnapchatters;
- (void)contactNonSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"

@class NSString;

@protocol SCPinnedConversationsDataCoordinating <SCDataCoordinating, SCDataCoordinatorListener>
- (void)addPinnedConversationWithId:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)fetchPinnedTimestampsByFeedIdWithCompletion:(void (^)(NSDictionary *))arg1;
- (_Bool)hasPinnedConversationWithId:(NSString *)arg1;
- (void)removePinnedConversationWithId:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end


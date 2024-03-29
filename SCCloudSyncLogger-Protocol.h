//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@protocol SCCloudSyncLogger <NSObject>
- (void)beginUploadForURL:(NSURL *)arg1 snapId:(NSString *)arg2 objectType:(long long)arg3 dataSizeInBytes:(unsigned long long)arg4;
- (void)cloudSyncDidPerformStep:(unsigned long long)arg1 consoleParam:(NSDictionary *)arg2 metricParam:(NSDictionary *)arg3;
- (void)createMemoriesS2RWithDescription:(NSString *)arg1;
- (void)didStartParsingResponse;
- (void)didSyncedSnapsCount:(unsigned long long)arg1 savedSnapsCount:(unsigned long long)arg2;
- (void)endUploadForURL:(NSURL *)arg1 succeeded:(_Bool)arg2 statusCode:(long long)arg3 parameters:(NSDictionary *)arg4;
- (void)initialSyncDidFinishWithToken:(NSString *)arg1;
- (void)initialSyncDidPaginateWithToken:(NSString *)arg1;
- (void)initialSyncDidStartWithSyncToken:(NSString *)arg1;
- (void)initialSyncRequestDidFinishWithEntryCount:(unsigned long long)arg1;
- (void)logBackupErrorWithMessage:(NSString *)arg1 retryCount:(unsigned long long)arg2 statusCode:(NSNumber *)arg3 detailStatusCode:(NSNumber *)arg4 fromRetry:(_Bool)arg5 operationParams:(NSDictionary *)arg6;
- (void)logBlizzardAbandonOperation:(NSString *)arg1 entryId:(NSString *)arg2 snapId:(NSString *)arg3 mediaId:(NSString *)arg4 operationType:(long long)arg5 abandonReason:(long long)arg6 detail:(NSString *)arg7;
- (void)logBlizzardBackupError:(unsigned long long)arg1 fromRetry:(_Bool)arg2 errorMessage:(NSString *)arg3 statusCode:(long long)arg4 detailStatusCode:(long long)arg5;
- (void)logCloudSyncerStatus;
- (void)logException:(NSString *)arg1 detail:(NSString *)arg2 params:(NSDictionary *)arg3;
- (void)logFinishedOperationWithOperationType:(unsigned long long)arg1 totalTimeInSec:(double)arg2 networkProcessingTimeInSec:(double)arg3 queueLength:(long long)arg4 logContexts:(NSArray *)arg5 tempCellularBackupEnabled:(_Bool)arg6;
- (void)logInvalidAddSnapsWithOperationType:(NSString *)arg1 invalidCount:(unsigned long long)arg2;
- (void)logNewQueuedOperationWithParams:(NSDictionary *)arg1 queueLength:(long long)arg2 blockedDurationInSec:(double)arg3;
- (void)logResyncOperationTotalTimeInSec:(double)arg1;
- (void)logResyncOperationWithParams:(NSDictionary *)arg1;
- (void)logSkipedOperationsFromOutOfOrderDeletion:(NSDictionary *)arg1 logContexts:(NSArray *)arg2 deleteEntryIds:(NSArray *)arg3 backupNowEnabled:(_Bool)arg4;
- (void)logSkippedMediaUpload:(NSString *)arg1 reason:(NSString *)arg2;
- (void)performEntryCountHealthCheck:(long long)arg1;
- (void)setTotalEntryCountFromServer:(long long)arg1;
@end


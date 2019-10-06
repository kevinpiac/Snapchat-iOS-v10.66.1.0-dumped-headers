//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"

@class NSMutableArray;
@protocol SCStoriesReadReceiptMetadataProcessing, SCStoriesReadReceiptUploadingProcessing;

@protocol SCStoriesSnapReadReceiptDataCoordinating <SCDataCoordinating>
- (void)addReadReceiptMetadataProcessor:(id <SCStoriesReadReceiptMetadataProcessing>)arg1 forSource:(long long)arg2;
- (void)addReadReceiptUploadingProcessor:(id <SCStoriesReadReceiptUploadingProcessing>)arg1 forSource:(long long)arg2;
@property(readonly, nonatomic) NSMutableArray *readReceiptUpdateLog;
@end


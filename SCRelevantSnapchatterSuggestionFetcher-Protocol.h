//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSString, SCSnapchatter;
@protocol OS_dispatch_queue;

@protocol SCRelevantSnapchatterSuggestionFetcher
- (void)removeSuggestedSnapchatter:(SCSnapchatter *)arg1;
- (void)snapchattersForUserId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end


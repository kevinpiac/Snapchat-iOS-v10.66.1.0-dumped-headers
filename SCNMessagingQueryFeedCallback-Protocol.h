//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol SCNMessagingQueryFeedCallback
- (void)onBootstrapNotComplete;
- (void)onError:(long long)arg1;
- (void)onQueryFeedComplete:(NSArray *)arg1 hasNoMore:(_Bool)arg2;
@end

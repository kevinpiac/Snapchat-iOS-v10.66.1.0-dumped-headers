//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;
@protocol SCGroupsDataRequestListener;

@protocol SCGroupsDataTracking
- (void)addListener:(id <SCGroupsDataRequestListener>)arg1;
- (void)didUpdateDataRequest:(long long)arg1 groupId:(NSString *)arg2;
- (void)removeListener:(id <SCGroupsDataRequestListener>)arg1;
@end


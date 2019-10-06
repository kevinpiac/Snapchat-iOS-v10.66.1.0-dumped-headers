//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFideliusLogger;
@protocol SCFideliusDataProvider, SCPerforming;

@interface SCFideliusUnwrapService : NSObject
{
    id <SCFideliusDataProvider> _dataSource;
    SCFideliusLogger *_logger;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_logBadFriendDataAsync:(id)arg1;
- (id)_senderUserId:(id)arg1;
- (id)initWithDataSource:(id)arg1 useFakePerformer:(_Bool)arg2 logger:(id)arg3;
- (id)unwrap:(id)arg1 failureCount:(long long)arg2;

@end


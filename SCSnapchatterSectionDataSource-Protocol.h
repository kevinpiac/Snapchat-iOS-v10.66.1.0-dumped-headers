//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol SCSnapchatterSectionDataSource <NSObject>
- (void)snapchattersForSectionIdentifier:(NSString *)arg1 query:(NSString *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
@end


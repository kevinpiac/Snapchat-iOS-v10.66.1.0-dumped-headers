//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, SCStoriesReadReceiptUpdateRequest;
@protocol OS_dispatch_queue;

@protocol SCStoriesReadReceiptUpdateProcessor
- (void)processUpdate:(SCStoriesReadReceiptUpdateRequest *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(_Bool, _Bool, _Bool))arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SCChatStoryLoader
- (void)findGroupStoryMediaForStoryId:(NSString *)arg1 completion:(void (^)(id))arg2;
- (void)findStoryMediaForStoryId:(NSString *)arg1 recipient:(NSString *)arg2 sentByUser:(_Bool)arg3 completion:(void (^)(id))arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCContextV2ImpalaHandler <NSObject>
- (_Bool)isSubscribedToImpalaProfileID:(NSString *)arg1;
- (void)reportImpalaProfileID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)setSubscribed:(_Bool)arg1 toProfileID:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)shareImpalaProfileID:(NSString *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCExperimentManager;

@protocol SCRetriableRequestManagerRetroConfigProtocol <NSObject>
- (void)countEvent:(long long)arg1 params:(NSDictionary *)arg2;
- (void)countEvent:(long long)arg1 params:(NSDictionary *)arg2 amount:(unsigned long long)arg3;
- (_Bool)isBackgroundRetryEnabled:(SCExperimentManager *)arg1;
- (_Bool)isPersistenceEnabled:(SCExperimentManager *)arg1 category:(NSString *)arg2;
- (_Bool)isRetryEnabled:(SCExperimentManager *)arg1 category:(NSString *)arg2;
- (unsigned long long)maxFileAgeMillis:(SCExperimentManager *)arg1;
- (unsigned long long)maxFileSizeBytes:(SCExperimentManager *)arg1;
- (unsigned long long)maxPersistedRequests:(SCExperimentManager *)arg1;
- (void)timeEvent:(long long)arg1 duration:(unsigned long long)arg2 params:(NSDictionary *)arg3;
@end

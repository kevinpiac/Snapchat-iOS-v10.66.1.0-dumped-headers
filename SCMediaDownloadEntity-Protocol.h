//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCMediaDownloadEntity <NSObject>
- (NSString *)UUID;
- (void)cancelByProducingResumeData;
- (void)resumeWithResultHandler:(void (^)(unsigned long long, id, NSError *))arg1;
- (void)setProgressHandler:(void (^)(double))arg1;
@end


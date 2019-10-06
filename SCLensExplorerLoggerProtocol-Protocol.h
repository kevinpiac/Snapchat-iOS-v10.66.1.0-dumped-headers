//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString;
@protocol SCLensExplorerLoggerUtils;

@protocol SCLensExplorerLoggerProtocol <NSObject>
- (void)flushWithDate:(NSDate *)arg1 completion:(void (^)(void))arg2 extraData:(NSDictionary *)arg3;
- (NSString *)lensExplorerStudySettings;
- (void)logEvent:(NSString *)arg1 data:(NSDictionary *)arg2;
@property(readonly, nonatomic) id <SCLensExplorerLoggerUtils> loggingUtils;
@end

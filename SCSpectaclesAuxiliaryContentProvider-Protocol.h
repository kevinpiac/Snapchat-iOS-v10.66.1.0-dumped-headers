//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SCSpectaclesAuxiliaryContentProvider <NSObject>
- (void)downloadDepthForSnapId:(NSString *)arg1 outputDepthDirectory:(NSString *)arg2 immediate:(_Bool)arg3 progress:(void (^)(double))arg4 completion:(void (^)(NSError *, _Bool, _Bool))arg5;
- (void)extractDepthFromContentFile:(NSString *)arg1 primaryCamera:(unsigned long long)arg2 calibrationFile:(NSString *)arg3 imuFile:(NSString *)arg4 outputDepthDirectory:(NSString *)arg5 outputAdjustmentFile:(NSString *)arg6 contentType:(unsigned long long)arg7 completion:(void (^)(NSError *, _Bool, _Bool))arg8;
- (void)extractLookupTableFromCalibrationFile:(NSString *)arg1 forContentOfType:(unsigned long long)arg2 completion:(void (^)(NSError *, SCSpectaclesLookupTable *, SCSpectaclesLookupTable *))arg3;
- (void)invalidate;
- (void)loadDepthAvailabilityForSnapId:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)requestSkyClassifierWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSString *)skyClassifierPath;
- (NSArray *)stabilizationFramesFromIMUFile:(NSString *)arg1 contentSize:(struct CGSize)arg2;
@end


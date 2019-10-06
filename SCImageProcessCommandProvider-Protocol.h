//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SCImageProcessCPUCommand, SCImageProcessCommand, SCImageProcessLensCommandSpectaclesMetadata;

@protocol SCImageProcessCommandProvider <NSObject>
- (SCImageProcessCommand *)imageCommandForFilterName:(NSString *)arg1 config:(NSDictionary *)arg2;
- (NSArray *)imageCommandForMultiSnapV2ThumbnailFromFilterName:(NSString *)arg1;
- (SCImageProcessCommand *)spectaclesNoOpLensCommandWithMetadata:(SCImageProcessLensCommandSpectaclesMetadata *)arg1;
- (SCImageProcessCPUCommand *)videoCPUCommandForFilterName:(NSString *)arg1;
- (SCImageProcessCommand *)videoCommandForFilterName:(NSString *)arg1;
- (SCImageProcessCommand *)videoCommandForFilterName:(NSString *)arg1 config:(NSDictionary *)arg2;
@end


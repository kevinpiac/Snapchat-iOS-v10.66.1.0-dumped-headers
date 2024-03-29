//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCVideoEncoder;

@protocol SCVideoEncoderDelegate <NSObject>
- (void)videoEncoder:(SCVideoEncoder *)arg1 didFailEncodingWithError:(NSError *)arg2;
- (void)videoEncoder:(SCVideoEncoder *)arg1 didProgressWithPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)videoEncoderDidCancelEncoding:(SCVideoEncoder *)arg1;
- (void)videoEncoderDidCompleteEncoding:(SCVideoEncoder *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;
@protocol SCBloopsTarget;

@protocol SCBloopsTargetsConverter <NSObject>
- (NSData *)imageDataFromTarget:(id <SCBloopsTarget>)arg1 error:(id *)arg2;
- (NSData *)proceccedDataFromTarget:(id <SCBloopsTarget>)arg1 error:(id *)arg2;
- (id <SCBloopsTarget>)targetFromImageData:(NSData *)arg1 imageIdentifier:(NSString *)arg2 error:(id *)arg3;
- (id <SCBloopsTarget>)targetFromProceccedData:(NSData *)arg1 imageIdentifier:(NSString *)arg2 error:(id *)arg3;
@end


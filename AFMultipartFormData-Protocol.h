//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString;

@protocol AFMultipartFormData
- (void)appendPartWithFileData:(NSData *)arg1 name:(NSString *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4;
- (void)appendPartWithFormData:(NSData *)arg1 name:(NSString *)arg2;
@end

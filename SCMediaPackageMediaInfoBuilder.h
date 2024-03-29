//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCMediaPackageMediaInfoBuilder : NSObject
{
    NSDate *_captureTime;
    long long _sojuMediaType;
    NSString *_captureSessionId;
    _Bool _isFromFrontFacingCamera;
    long long _captureOrientation;
}

+ (id)mediaPackageMediaInfo;
+ (id)mediaPackageMediaInfoFromExistingMediaPackageMediaInfo:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withCaptureOrientation:(long long)arg1;
- (id)withCaptureSessionId:(id)arg1;
- (id)withCaptureTime:(id)arg1;
- (id)withIsFromFrontFacingCamera:(_Bool)arg1;
- (id)withSojuMediaType:(long long)arg1;

@end


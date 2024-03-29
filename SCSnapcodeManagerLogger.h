//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSnapcodeManagerSessionCounter;

@interface SCSnapcodeManagerLogger : NSObject
{
    NSString *_loggerSessionId;
    SCSnapcodeManagerSessionCounter *_snapcodeSessionCounter;
}

- (void).cxx_destruct;
- (void)didEnterPage:(long long)arg1 snapcodeCount:(int)arg2 ghostImageCount:(int)arg3;
- (void)didEnterSnapcodeManager;
- (void)didExitImageEditWithType:(long long)arg1 snapcodeCount:(int)arg2 snapcodeWithImageCount:(int)arg3 webImageCount:(int)arg4 cameraImageCount:(int)arg5 selectedImageSize:(int)arg6 selectedWebImage:(_Bool)arg7 hasMovedImage:(_Bool)arg8;
- (void)didFinishFetchSnapcodes;
- (void)didPerformAction:(long long)arg1 success:(_Bool)arg2;
- (void)didPreviewSnapcodeWithScannableId:(id)arg1 scanData:(id)arg2 snapcodeCount:(int)arg3 snapcodeWithImageCount:(int)arg4;
- (void)didShareSnapcodeWithScannableId:(id)arg1 scanData:(id)arg2 snapcodeCount:(int)arg3 snapcodeWithImageCount:(int)arg4;
- (void)didStartFetchSnapcodes;
- (void)enterSearch;
- (void)exitSearch;

@end


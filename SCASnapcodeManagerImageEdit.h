//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASnapcodeManagerImageEdit : SCAUserTrackedEvent
{
    NSNumber *snapcodeCount;
    NSNumber *snapcodeWithImageCount;
    NSNumber *webImageCount;
    NSNumber *cameraImageCount;
    NSNumber *selectedImageSize;
    NSNumber *isWebImage;
    NSNumber *isImageMove;
    long long exit_event;
    NSString *snapcodeSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCameraImageCount;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExit_event;
- (_Bool)getIsImageMove;
- (_Bool)getIsWebImage;
- (double)getPerUserSamplingRate;
- (long long)getSelectedImageSize;
- (long long)getSnapcodeCount;
- (id)getSnapcodeSessionId;
- (long long)getSnapcodeWithImageCount;
- (long long)getWebImageCount;
- (id)init;
- (void)setCameraImageCount:(long long)arg1;
- (void)setExit_event:(long long)arg1;
- (void)setIsImageMove:(_Bool)arg1;
- (void)setIsWebImage:(_Bool)arg1;
- (void)setSelectedImageSize:(long long)arg1;
- (void)setSnapcodeCount:(long long)arg1;
- (void)setSnapcodeSessionId:(id)arg1;
- (void)setSnapcodeWithImageCount:(long long)arg1;
- (void)setWebImageCount:(long long)arg1;

@end


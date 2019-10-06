//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerPreferenceAdaptor-Protocol.h"

@interface SCMainAppStickerPreferenceAdaptor : NSObject <SCStickerPreferenceAdaptor>
{
}

+ (id)shared;
- (void)addRecentlyUsedSticker:(id)arg1;
- (void)setDisplayedSnapAndDriveWarning;
- (void)setDisplayedSnapReplyStickerAnimation;
- (void)setDisplayedTrackingStickerTooltip;
- (_Bool)shouldDisplaySnapAndDriveWarning;
- (_Bool)shouldDisplaySnapReplyStickerAnimation;
- (_Bool)shouldDisplayTrackingStickerTooltip;
- (unsigned long long)speedUnit;
- (unsigned long long)temperatureScale;
- (void)updateSpeedUnit:(unsigned long long)arg1;
- (void)updateTemperatureScale:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAChatMediaItemSelect : SCAUserTrackedEvent
{
    NSNumber *positionIndex;
    NSNumber *withEdit;
    long long messageType;
    long long drawerViewMode;
    long long mediaType;
    NSString *stickerId;
    NSString *section;
    NSString *parcelType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDrawerViewMode;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMediaType;
- (long long)getMessageType;
- (id)getParcelType;
- (double)getPerUserSamplingRate;
- (long long)getPositionIndex;
- (id)getSection;
- (id)getStickerId;
- (_Bool)getWithEdit;
- (id)init;
- (void)setDrawerViewMode:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMessageType:(long long)arg1;
- (void)setParcelType:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setSection:(id)arg1;
- (void)setStickerId:(id)arg1;
- (void)setWithEdit:(_Bool)arg1;

@end

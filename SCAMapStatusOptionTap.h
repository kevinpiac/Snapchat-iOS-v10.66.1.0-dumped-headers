//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAMapStatusOptionTap : SCAUserTrackedEvent
{
    NSNumber *mapSessionId;
    NSNumber *statusSessionId;
    NSNumber *stickerBitmojiCount;
    NSNumber *index;
    long long statusOptionType;
    NSString *chosenActionmojiStickerId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getChosenActionmojiStickerId;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getIndex;
- (long long)getMapSessionId;
- (double)getPerUserSamplingRate;
- (long long)getStatusOptionType;
- (long long)getStatusSessionId;
- (long long)getStickerBitmojiCount;
- (id)init;
- (void)setChosenActionmojiStickerId:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setMapSessionId:(long long)arg1;
- (void)setStatusOptionType:(long long)arg1;
- (void)setStatusSessionId:(long long)arg1;
- (void)setStickerBitmojiCount:(long long)arg1;

@end


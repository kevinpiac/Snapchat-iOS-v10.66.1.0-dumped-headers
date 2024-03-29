//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class NSString;

@interface SCAStickerSearchStickerPick : SCAUserNotTrackedEvent
{
    long long source;
    long long sectionName;
    long long stickerSourceTab;
    long long stickerPickerType;
    NSString *searchTerm;
    NSString *stickerId;
    NSString *stickerPackId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getSearchTerm;
- (long long)getSectionName;
- (long long)getSource;
- (id)getStickerId;
- (id)getStickerPackId;
- (long long)getStickerPickerType;
- (long long)getStickerSourceTab;
- (id)init;
- (void)setSearchTerm:(id)arg1;
- (void)setSectionName:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setStickerId:(id)arg1;
- (void)setStickerPackId:(id)arg1;
- (void)setStickerPickerType:(long long)arg1;
- (void)setStickerSourceTab:(long long)arg1;

@end


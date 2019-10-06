//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStickerPickerSearch : SCAUserTrackedEvent
{
    NSNumber *stickerBitmojiCount;
    NSNumber *stickerSnapchatCount;
    NSNumber *stickerEmojiCount;
    NSNumber *stickerResultCount;
    NSNumber *searchSequenceId;
    NSString *searchTerm;
    NSString *snapSessionId;
    NSString *stickerSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSearchSequenceId;
- (id)getSearchTerm;
- (id)getSnapSessionId;
- (long long)getStickerBitmojiCount;
- (long long)getStickerEmojiCount;
- (long long)getStickerResultCount;
- (id)getStickerSessionId;
- (long long)getStickerSnapchatCount;
- (void)setSearchSequenceId:(long long)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setStickerBitmojiCount:(long long)arg1;
- (void)setStickerEmojiCount:(long long)arg1;
- (void)setStickerResultCount:(long long)arg1;
- (void)setStickerSessionId:(id)arg1;
- (void)setStickerSnapchatCount:(long long)arg1;

@end


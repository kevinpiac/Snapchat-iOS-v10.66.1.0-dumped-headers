//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCChatStickerSearchResultsFilterer : NSObject
{
}

+ (id)emojiBlackList;
+ (id)filter:(id)arg1 searchTerm:(id)arg2 maxResults:(long long)arg3 bitmojiStickerManager:(id)arg4 avatarId:(id)arg5 friendAvatarId:(id)arg6 targetType:(id)arg7;
+ (_Bool)set:(id)arg1 containsEmoji:(id)arg2;
+ (id)symbolsWhiteList;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, SCStickerTagFuzzySearch;

@interface SCStickerCaptionRecommendationRanker : NSObject
{
    NSCalendar *_gregorian;
    SCStickerTagFuzzySearch *_stickerSearch;
}

- (void).cxx_destruct;
- (void)_splitStickersByType:(id)arg1 bitmojis:(id)arg2 stickers:(id)arg3 emojis:(id)arg4;
- (id)initWithStickerSearch:(id)arg1;
- (void)rank:(id)arg1 maxNumResults:(long long)arg2 shuffleResults:(_Bool)arg3 shouldIncludeFriendBitmoji:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)rank:(id)arg1 shouldIncludeFriendBitmoji:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FriendStories.h"

@class NSArray, NSString;

@interface SCPromotedStories : FriendStories
{
    _Bool _isContentLooping;
    NSString *_adId;
    NSArray *_snapStories;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (id)initWithCheetahPromotedStory:(id)arg1;
@property(readonly, nonatomic) _Bool isContentLooping; // @synthesize isContentLooping=_isContentLooping;
@property(readonly, nonatomic) NSArray *snapStories; // @synthesize snapStories=_snapStories;

@end


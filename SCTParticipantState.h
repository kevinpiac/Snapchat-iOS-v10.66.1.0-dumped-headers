//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface SCTParticipantState : NSObject
{
    NSString *_username;
    NSString *_displayName;
    UIColor *_presenceColor;
    NSString *_bitmojiAvatarId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 presenceColor:(id)arg3 bitmojiAvatarId:(id)arg4;
@property(readonly, nonatomic) UIColor *presenceColor; // @synthesize presenceColor=_presenceColor;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;

@end


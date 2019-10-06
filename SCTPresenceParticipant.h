//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTPresenceParticipant-Protocol.h"

@class NSDate, NSString, UIColor;
@protocol SCTPresenceBitmoji;

@interface SCTPresenceParticipant : NSObject <SCTPresenceParticipant>
{
    _Bool _present;
    _Bool _selected;
    NSString *_username;
    NSString *_displayName;
    NSString *_uniqueLabel;
    NSDate *_updatedTime;
    NSDate *_objectCreatedTime;
    UIColor *_presenceColor;
    NSString *_bitmojiAvatarId;
    id <SCTPresenceBitmoji> _presenceBitmoji;
    long long _bitmojiFetchState;
}

- (void).cxx_destruct;
- (void)_updatePresence:(_Bool)arg1 date:(id)arg2;
@property(readonly, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, nonatomic) long long bitmojiFetchState; // @synthesize bitmojiFetchState=_bitmojiFetchState;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool hasBitmoji;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 uniqueLabel:(id)arg3 presenceColor:(id)arg4 bitmojiAvatarId:(id)arg5;
@property(readonly, nonatomic) _Bool isFetchingBitmoji;
- (_Bool)isPresent;
@property(readonly, nonatomic) NSDate *objectCreatedTime; // @synthesize objectCreatedTime=_objectCreatedTime;
@property(readonly, nonatomic) id <SCTPresenceBitmoji> presenceBitmoji; // @synthesize presenceBitmoji=_presenceBitmoji;
@property(readonly, nonatomic) UIColor *presenceColor; // @synthesize presenceColor=_presenceColor;
@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(readonly, nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSDate *updatedTime; // @synthesize updatedTime=_updatedTime;
@property(readonly, nonatomic) NSString *uniqueLabel; // @synthesize uniqueLabel=_uniqueLabel;
- (void)updateBitmojiFetchState:(long long)arg1 presenceBitmoji:(id)arg2;
- (void)updatePrecenceColor:(id)arg1;
- (void)updatePresence:(_Bool)arg1;
- (void)updateSelection:(_Bool)arg1;
- (void)updateUniqueLabel:(id)arg1;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


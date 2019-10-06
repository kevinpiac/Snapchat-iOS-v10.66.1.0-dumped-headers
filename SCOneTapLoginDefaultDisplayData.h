//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOneTapLoginDisplayData-Protocol.h"

@class NSString, SCPromise;
@protocol SCCache, SCOneTapLoginRepository, SCPerforming;

@interface SCOneTapLoginDefaultDisplayData : NSObject <SCOneTapLoginDisplayData>
{
    SCPromise *_bitmojiAvatarImagePromise;
    id <SCOneTapLoginRepository> _oneTapLoginRepository;
    id <SCPerforming> _performer;
    id <SCCache> _globalCache;
}

- (void).cxx_destruct;
- (void)_fetchBitmojiAvatarFromCache:(id)arg1;
- (void)_updateBitmojiAvatarPromiseWithError:(id)arg1;
- (void)_updateBitmojiAvatarPromiseWithImage:(id)arg1;
@property(retain, nonatomic) NSString *bitmojiAvatarId;
@property(retain, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, nonatomic) _Bool hasUnexpiredOneTapLogin;
- (id)initWithOneTapLoginRepository:(id)arg1 globalCache:(id)arg2;
- (_Bool)isCurrentUserOptedIn:(id)arg1;
- (id)oneTapLoginBitmojiAvatar;
@property(retain, nonatomic) NSString *userId;
@property(retain, nonatomic) NSString *username;

@end


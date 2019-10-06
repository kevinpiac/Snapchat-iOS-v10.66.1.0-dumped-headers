//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiAvatarDataProvider-Protocol.h"

@class AvatarData, NSString, SCDisposableObserver;

@interface SCBitmojiUserAvatarDataProvider : NSObject <SCBitmojiAvatarDataProvider>
{
    AvatarData *_avatarData;
    SCDisposableObserver *_avatarIdObserver;
}

- (void).cxx_destruct;
- (void)_invalidateAvatarData;
- (id)avatarData;
- (_Bool)hasAvatarData;
- (id)initWithBitmojiAvatarProvider:(id)arg1;
- (void)updateAvatarData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SOJUUserOwnedUnlockablesResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *lensListSignature;
@property(readonly, copy, nonatomic) NSArray *personalFilters;
@property(readonly, copy, nonatomic) NSArray *userOwnedUnlockables;
@property(readonly, copy, nonatomic) NSArray *userPinnedLenses;
@property(readonly, copy, nonatomic) NSArray *userUnlockedFilters;
@property(readonly, copy, nonatomic) NSArray *userUnlockedStickerPacks;
@end


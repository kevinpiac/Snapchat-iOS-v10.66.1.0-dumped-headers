//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUScannableAction-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUScannableActionUnlockableSticker <NSObject, NSCoding, NSCopying, SOJUScannableAction>
@property(readonly, copy, nonatomic) NSString *stickerPackId;
@property(readonly, copy, nonatomic) NSString *stickerTitle;
@property(readonly, copy, nonatomic) NSString *thumbnailImageLink;
@property(readonly, copy, nonatomic) NSNumber *unlockDurationInMins;
@property(readonly, copy, nonatomic) NSString *unlockableId;
@property(readonly, copy, nonatomic) NSNumber *unlocked;
@end

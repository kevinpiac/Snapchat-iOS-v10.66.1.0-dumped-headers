//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCLensBitmojiProvider <NSObject>
- (void)deeplinkBitmojiForLensId:(NSString *)arg1;
@property(copy, nonatomic) NSString *friendAvatarId;
@property(copy, nonatomic) NSString *friendUserId;
- (_Bool)isBitmojiLinked;
- (NSString *)pendingDeeplinkLensId;
- (void)setActive:(_Bool)arg1;
- (void)setFriendBitmojiAvailable:(_Bool)arg1;
- (void)updatePendingDeeplinkStateWithCompletion:(void (^)(_Bool))arg1;
@end


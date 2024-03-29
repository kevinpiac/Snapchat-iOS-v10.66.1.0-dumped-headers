//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCLensUser <NSObject>
- (NSString *)bitmojiAvatarId;
- (NSString *)bitmojiSelfieId;
- (_Bool)isActiveLensesUser;
- (_Bool)isCheetahNewUser;
- (_Bool)isLoggedIn;
- (_Bool)isNewUser;
@property(retain, nonatomic) NSDate *lastLensesActivationDate;
@property(retain, nonatomic) NSDate *lastSpectaclesLensesActivationDate;
- (NSString *)lensStudioId;
@property(nonatomic) unsigned long long lensesActivationTooltipShownCount;
- (NSString *)userId;
- (NSString *)usernameDisplayOnly;
@end


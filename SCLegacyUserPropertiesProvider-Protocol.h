//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCLegacyUserPropertiesProvider <NSObject>
- (NSDate *)birthday;
- (NSString *)bitmojiAvatarId;
- (NSString *)bitmojiSelfieId;
- (NSString *)blizzardToken;
- (NSString *)deviceToken;
- (NSString *)displayName;
- (_Bool)isAffectedByGDPR;
- (NSString *)lensStudioId;
- (unsigned long long)receivedCount;
- (NSString *)registrationCountryCode;
- (unsigned long long)score;
- (unsigned long long)sentCount;
- (unsigned long long)storyCount;
- (NSString *)voipDeviceToken;
@end

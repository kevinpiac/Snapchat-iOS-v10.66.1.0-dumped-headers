//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SCLensCreator <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool isOfficialCreator;
@property(readonly, copy, nonatomic) NSString *snapProIdentifier;
@property(readonly, nonatomic) _Bool snapProIsDeactivated;
@property(readonly, copy, nonatomic) NSString *userAvatarId;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *userSelfieId;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SOJUAdIdentityResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *rawUserData;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackHostAndPath;
@property(readonly, copy, nonatomic) NSString *trackHostAndPath;
@property(readonly, copy, nonatomic) NSString *trackRequestCookie;
@property(readonly, copy, nonatomic) NSString *userAdId;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUDiscoverModerationAudience;

@protocol SOJUDiscoverModerationStoryModeration <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUDiscoverModerationAudience *audience;
@property(readonly, copy, nonatomic) NSNumber *moderatedAt;
@property(readonly, copy, nonatomic) NSNumber *moderatedAtMs;
@property(readonly, copy, nonatomic) NSString *moderationRevisionId;
@property(readonly, copy, nonatomic) NSString *scope;
@end


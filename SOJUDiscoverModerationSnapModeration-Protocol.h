//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SOJUDiscoverModerationAudience, SOJUDiscoverModerationBrandSafety;

@protocol SOJUDiscoverModerationSnapModeration <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUDiscoverModerationAudience *audience;
@property(readonly, copy, nonatomic) SOJUDiscoverModerationBrandSafety *brandSafety;
@property(readonly, copy, nonatomic) NSString *scope;
@end

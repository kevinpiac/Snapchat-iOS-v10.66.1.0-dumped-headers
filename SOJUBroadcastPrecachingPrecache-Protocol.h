//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, SOJUBroadcastPrecachingLookaheadPrecache;

@protocol SOJUBroadcastPrecachingPrecache <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUBroadcastPrecachingLookaheadPrecache *defaultLookaheadPrecache;
@property(readonly, copy, nonatomic) NSArray *defaults;
@property(readonly, copy, nonatomic) NSArray *entities;
@property(readonly, copy, nonatomic) NSArray *lookaheadPrecache;
@property(readonly, copy, nonatomic) NSNumber *useServerPreloadingLogic;
@end


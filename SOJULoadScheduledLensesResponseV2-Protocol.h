//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJULoadScheduledLensesResponseV2 <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *activeLenses;
@property(readonly, copy, nonatomic) NSArray *activeRearLenses;
@property(readonly, copy, nonatomic) NSNumber *cacheTtlMillis;
@property(readonly, copy, nonatomic) NSString *lensListSignature;
@property(readonly, copy, nonatomic) NSNumber *medianIndexDepth;
@property(readonly, copy, nonatomic) NSArray *precachedLenses;
@property(readonly, copy, nonatomic) NSString *preselectedLensId;
@end

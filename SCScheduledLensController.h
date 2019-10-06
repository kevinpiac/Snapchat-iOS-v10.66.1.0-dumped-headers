//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSString;
@protocol SCPerforming, SCScheduledLensControllerDelegate;

@interface SCScheduledLensController : NSObject <NSCoding>
{
    id <SCScheduledLensControllerDelegate> _delegate;
    NSDate *_nextFetchDate;
    NSString *_preselectedLensId;
    NSArray *_activeScheduledLenses;
    NSArray *_activeRearScheduledLenses;
    NSArray *_preCachedScheduledLenses;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_ensureNonNilObjects;
- (id)_processNewGeofiltersList:(id)arg1 lensType:(long long)arg2;
- (void)_processScheduledLensesToCache:(id)arg1;
@property(retain, nonatomic) NSArray *activeRearScheduledLenses; // @synthesize activeRearScheduledLenses=_activeRearScheduledLenses;
@property(retain, nonatomic) NSArray *activeScheduledLenses; // @synthesize activeScheduledLenses=_activeScheduledLenses;
@property(readonly, nonatomic) NSArray *cachedActiveRearScheduledLenses;
@property(readonly, nonatomic) NSArray *cachedActiveScheduledLenses;
@property(readonly, nonatomic) NSArray *cachedScheduledLensesToPrefetch;
- (void)clearCache;
@property(nonatomic) __weak id <SCScheduledLensControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *nextFetchDate; // @synthesize nextFetchDate=_nextFetchDate;
- (void)nextFetchDateWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSArray *preCachedScheduledLenses; // @synthesize preCachedScheduledLenses=_preCachedScheduledLenses;
@property(retain, nonatomic) NSString *preselectedLensId; // @synthesize preselectedLensId=_preselectedLensId;
- (void)processResponse:(id)arg1;
- (void)updateCache;

@end


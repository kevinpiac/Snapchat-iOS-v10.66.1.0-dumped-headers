//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsUserInfoAdapter-Protocol.h"

@class NSString, SCQueuePerformer;
@protocol SCSnapAdsPersistedDataAdapter;

@interface SCSnapAdsUser : NSObject <SCSnapAdsUserInfoAdapter>
{
    SCQueuePerformer *_queuePerformer;
    _Bool _enableAdTracking;
    NSString *_userAdId;
    id <SCSnapAdsPersistedDataAdapter> _persistedDataAdapter;
}

- (void).cxx_destruct;
- (void)_updateAdvertiserInfoFromDevice;
@property(nonatomic) _Bool enableAdTracking; // @synthesize enableAdTracking=_enableAdTracking;
- (_Bool)getEnableAdTracking;
- (id)getEncrypedUserData;
- (id)getPersistedDataAdapter;
- (id)getRawUserData;
- (id)getRawUserDataV2;
- (id)getUserAdId;
- (id)initWithPersistedDataAdapter:(id)arg1;
@property(retain) id <SCSnapAdsPersistedDataAdapter> persistedDataAdapter; // @synthesize persistedDataAdapter=_persistedDataAdapter;
- (void)setEncrypedUserData:(id)arg1;
@property(copy, nonatomic) NSString *userAdId; // @synthesize userAdId=_userAdId;
- (void)updateAdTrackingAdId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


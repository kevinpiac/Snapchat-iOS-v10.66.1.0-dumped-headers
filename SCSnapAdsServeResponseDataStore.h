//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCSnapAdsServeResponseDataStore : NSObject
{
    NSMutableDictionary *_adIdentifierToResponseMap;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)_addAdResponse:(id)arg1;
- (void)_removeAdResponseForIdentifier:(id)arg1;
- (id)adResponseForIdentifier:(id)arg1;
- (void)addAdResponse:(id)arg1;
- (id)init;
- (void)removeAdResponseForIdentifier:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaSubscriptionChecker-Protocol.h"

@class NSString, SCDiscoverChannel;

@interface SCDiscoverSubscriptionChecker : NSObject <SCOperaSubscriptionChecker>
{
    SCDiscoverChannel *_channel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCDiscoverChannel *channel; // @synthesize channel=_channel;
- (id)initWithChannel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldAllowSubscription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

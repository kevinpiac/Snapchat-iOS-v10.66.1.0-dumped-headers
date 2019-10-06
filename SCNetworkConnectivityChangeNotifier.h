//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesConnectivityChangeNotifier-Protocol.h"

@class NSMutableArray;
@protocol SCPerforming;

@interface SCNetworkConnectivityChangeNotifier : NSObject <SCNNetworkTypesConnectivityChangeNotifier>
{
    id <SCPerforming> _queuePerformer;
    NSMutableArray *_listeners;
    long long _currentConnectivity;
}

- (void).cxx_destruct;
@property long long currentConnectivity; // @synthesize currentConnectivity=_currentConnectivity;
- (id)initWithDefaultNetworkReachability:(long long)arg1 queuePerformer:(id)arg2;
- (void)notifyListener:(long long)arg1;
- (long long)registerListener:(id)arg1;
- (void)updateCurrentReachability:(long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNNetworkTypesConnectivityChangeListener : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::network_types::ConnectivityChangeListener>, std::__1::shared_ptr<snap::network_types::ConnectivityChangeListener>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_be644834 *)arg1;
- (void)onConnectivityChanged:(long long)arg1;

@end

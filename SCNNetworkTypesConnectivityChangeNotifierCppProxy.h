//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesConnectivityChangeNotifier-Protocol.h"

@interface SCNNetworkTypesConnectivityChangeNotifierCppProxy : NSObject <SCNNetworkTypesConnectivityChangeNotifier>
{
    struct Handle<std::__1::shared_ptr<snap::network_types::ConnectivityChangeNotifier>, std::__1::shared_ptr<snap::network_types::ConnectivityChangeNotifier>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_40099c5c *)arg1;
- (void)notifyListener:(long long)arg1;
- (long long)registerListener:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkManagerUrlRequestCallback-Protocol.h"

@interface SCNNetworkManagerUrlRequestCallbackCppProxy : NSObject <SCNNetworkManagerUrlRequestCallback>
{
    struct Handle<std::__1::shared_ptr<snap::network_manager::UrlRequestCallback>, std::__1::shared_ptr<snap::network_manager::UrlRequestCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)OnFailure:(id)arg1 responseInfo:(id)arg2;
- (void)OnSuccess:(id)arg1 responseInfo:(id)arg2 responseData:(id)arg3;
- (id)initWithCpp:(const shared_ptr_15c98029 *)arg1;

@end

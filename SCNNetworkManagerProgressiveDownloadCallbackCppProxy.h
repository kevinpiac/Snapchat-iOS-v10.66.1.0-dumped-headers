//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkManagerProgressiveDownloadCallback-Protocol.h"

@interface SCNNetworkManagerProgressiveDownloadCallbackCppProxy : NSObject <SCNNetworkManagerProgressiveDownloadCallback>
{
    struct Handle<std::__1::shared_ptr<snap::network_manager::ProgressiveDownloadCallback>, std::__1::shared_ptr<snap::network_manager::ProgressiveDownloadCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_c3a21101 *)arg1;
- (void)onUpdate:(id)arg1 statusCode:(int)arg2 error:(id)arg3;

@end


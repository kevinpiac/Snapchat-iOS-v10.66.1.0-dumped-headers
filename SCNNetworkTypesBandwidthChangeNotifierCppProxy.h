//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesBandwidthChangeNotifier-Protocol.h"

@interface SCNNetworkTypesBandwidthChangeNotifierCppProxy : NSObject <SCNNetworkTypesBandwidthChangeNotifier>
{
    struct Handle<std::__1::shared_ptr<snap::network_types::BandwidthChangeNotifier>, std::__1::shared_ptr<snap::network_types::BandwidthChangeNotifier>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_78c8ff1a *)arg1;
- (void)notifyDownloadListeners:(long long)arg1;
- (void)notifyUploadListeners:(long long)arg1;
- (long long)registerDownloadListener:(id)arg1;
- (long long)registerUploadListener:(id)arg1;

@end

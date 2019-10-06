//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesBandwidthChangeNotifier-Protocol.h"

@class NSMutableArray;
@protocol SCPerforming;

@interface SCNetworkBandwidthChangeNotifier : NSObject <SCNNetworkTypesBandwidthChangeNotifier>
{
    id <SCPerforming> _queuePerformer;
    NSMutableArray *_downloadListeners;
    NSMutableArray *_uploadListeners;
    long long _currentDownloadConnectionClass;
    long long _currentUploadConnectionClass;
}

- (void).cxx_destruct;
@property long long currentDownloadConnectionClass; // @synthesize currentDownloadConnectionClass=_currentDownloadConnectionClass;
@property long long currentUploadConnectionClass; // @synthesize currentUploadConnectionClass=_currentUploadConnectionClass;
- (id)initWithDefaultDownloadConnectionClass:(long long)arg1 uploadConnectionClass:(long long)arg2 queuePerformer:(id)arg3;
- (void)notifyDownloadListeners:(long long)arg1;
- (void)notifyUploadListeners:(long long)arg1;
- (long long)registerDownloadListener:(id)arg1;
- (long long)registerUploadListener:(id)arg1;
- (void)updateCurrentDownloadConnectionClass:(long long)arg1;
- (void)updateCurrentUploadConnectionClass:(long long)arg1;

@end


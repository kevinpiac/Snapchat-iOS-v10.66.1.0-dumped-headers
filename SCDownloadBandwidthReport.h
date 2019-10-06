//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCDownloadBandwidthReport : NSObject
{
    double _elapsedTime;
    unsigned long long _bytesDownloaded;
    unsigned long long _numberOfRequests;
    unsigned long long _estimatedBitrate;
}

@property(nonatomic) unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) unsigned long long estimatedBitrate; // @synthesize estimatedBitrate=_estimatedBitrate;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 bytesDownloaded:(unsigned long long)arg3 numberOfRequests:(unsigned long long)arg4;
@property(nonatomic) unsigned long long numberOfRequests; // @synthesize numberOfRequests=_numberOfRequests;

@end

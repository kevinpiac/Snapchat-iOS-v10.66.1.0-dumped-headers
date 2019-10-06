//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIDetector, SCQueuePerformer;

@interface SCFaceDetector : NSObject
{
    unsigned long long _accuracy;
    double _minimumFaceSize;
    CIDetector *_detector;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)_detectFacesInImage:(id)arg1;
- (long long)_exifOrienationForImage:(id)arg1;
- (void)_setup;
- (void)detectFacesInImageAsynchronously:(id)arg1 completion:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (id)detectFacesInImageSynchronously:(id)arg1;
- (id)initWithAccuracy:(unsigned long long)arg1 minimumFaceSize:(double)arg2;

@end


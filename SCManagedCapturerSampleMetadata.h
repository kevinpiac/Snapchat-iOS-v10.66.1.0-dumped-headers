//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCManagedCapturerSampleMetadata : NSObject
{
    float _fieldOfView;
    unsigned long long _captureDevicePosition;
    CDStruct_1b6d18a9 _presentationTimestamp;
    CDStruct_1b6d18a9 _captureTimestamp;
}

@property(readonly, nonatomic) unsigned long long captureDevicePosition; // @synthesize captureDevicePosition=_captureDevicePosition;
@property(readonly, nonatomic) CDStruct_1b6d18a9 captureTimestamp; // @synthesize captureTimestamp=_captureTimestamp;
@property(readonly, nonatomic) float fieldOfView; // @synthesize fieldOfView=_fieldOfView;
- (id)initWithPresentationTimestamp:(CDStruct_1b6d18a9)arg1 captureTimestamp:(CDStruct_1b6d18a9)arg2 fieldOfView:(float)arg3 captureDevicePosition:(unsigned long long)arg4;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationTimestamp; // @synthesize presentationTimestamp=_presentationTimestamp;

@end

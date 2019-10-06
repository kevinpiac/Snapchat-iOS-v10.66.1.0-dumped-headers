//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesSnapPlaybackCaptureInfo : NSObject <NSCopying>
{
    long long _cameraType;
    long long _orientation;
    NSString *_encryptedGeoLogString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *encryptedGeoLogString; // @synthesize encryptedGeoLogString=_encryptedGeoLogString;
- (unsigned long long)hash;
- (id)initWithCameraType:(long long)arg1 orientation:(long long)arg2 encryptedGeoLogString:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;

@end

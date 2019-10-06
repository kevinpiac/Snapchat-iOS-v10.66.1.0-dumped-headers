//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBatchCaptureSegmentMetadata-Protocol.h"

@class CLLocation, NSDate, NSString;

@interface SCBatchCaptureSegmentMetadata : NSObject <SCBatchCaptureSegmentMetadata>
{
    _Bool _fromFrontFacingCamera;
    long long _mediaOrientation;
    NSDate *_createTime;
    NSDate *_captureTime;
    CLLocation *_location;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *captureTime; // @synthesize captureTime=_captureTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, nonatomic) _Bool fromFrontFacingCamera; // @synthesize fromFrontFacingCamera=_fromFrontFacingCamera;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaOrientation:(long long)arg1 createTime:(id)arg2 captureTime:(id)arg3 location:(id)arg4 fromFrontFacingCamera:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long mediaOrientation; // @synthesize mediaOrientation=_mediaOrientation;
- (_Bool)preferFasterCoding;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCapturedSnapRecoveryData-Protocol.h"

@class NSString, NSURL;

@interface SCCapturedSnapRecoveryData : NSObject <SCCapturedSnapRecoveryData>
{
    _Bool _isImage;
    NSURL *_mediaFileURL;
    NSString *_captureSessionId;
    double _captureTimeStamp;
    unsigned long long _attemptedRecoveryCount;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long attemptedRecoveryCount; // @synthesize attemptedRecoveryCount=_attemptedRecoveryCount;
@property(readonly, copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
@property(readonly, nonatomic) double captureTimeStamp; // @synthesize captureTimeStamp=_captureTimeStamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaFileURL:(id)arg1 captureSessionId:(id)arg2 captureTimeStamp:(double)arg3 isImage:(_Bool)arg4 attemptedRecoveryCount:(unsigned long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(readonly, copy, nonatomic) NSURL *mediaFileURL; // @synthesize mediaFileURL=_mediaFileURL;
- (_Bool)preferFasterCoding;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


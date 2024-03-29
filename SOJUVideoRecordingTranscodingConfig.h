//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUVideoRecordingTranscodingConfig-Protocol.h"

@class NSNumber, NSString;

@interface SOJUVideoRecordingTranscodingConfig : NSObject <SOJUVideoRecordingTranscodingConfig>
{
    NSNumber *_recordingBitrate1080p;
    NSNumber *_recordingBitrate720p;
    NSNumber *_recordingBitrate640p;
    NSNumber *_recordingBitrate480p;
    NSNumber *_recordingBitrate360p;
    NSNumber *_transcodingOutputWidth;
    NSNumber *_transcodingOutputBitrate1080p;
    NSNumber *_transcodingOutputBitrate720p;
    NSNumber *_transcodingOutputBitrate640p;
    NSNumber *_transcodingOutputBitrate480p;
    NSNumber *_transcodingOutputBitrate360p;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithRecordingBitrate1080p:(id)arg1 recordingBitrate720p:(id)arg2 recordingBitrate640p:(id)arg3 recordingBitrate480p:(id)arg4 recordingBitrate360p:(id)arg5 transcodingOutputWidth:(id)arg6 transcodingOutputBitrate1080p:(id)arg7 transcodingOutputBitrate720p:(id)arg8 transcodingOutputBitrate640p:(id)arg9 transcodingOutputBitrate480p:(id)arg10 transcodingOutputBitrate360p:(id)arg11;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate1080p; // @synthesize recordingBitrate1080p=_recordingBitrate1080p;
- (int)recordingBitrate1080pValue;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate360p; // @synthesize recordingBitrate360p=_recordingBitrate360p;
- (int)recordingBitrate360pValue;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate480p; // @synthesize recordingBitrate480p=_recordingBitrate480p;
- (int)recordingBitrate480pValue;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate640p; // @synthesize recordingBitrate640p=_recordingBitrate640p;
- (int)recordingBitrate640pValue;
@property(readonly, copy, nonatomic) NSNumber *recordingBitrate720p; // @synthesize recordingBitrate720p=_recordingBitrate720p;
- (int)recordingBitrate720pValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate1080p; // @synthesize transcodingOutputBitrate1080p=_transcodingOutputBitrate1080p;
- (int)transcodingOutputBitrate1080pValue;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate360p; // @synthesize transcodingOutputBitrate360p=_transcodingOutputBitrate360p;
- (int)transcodingOutputBitrate360pValue;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate480p; // @synthesize transcodingOutputBitrate480p=_transcodingOutputBitrate480p;
- (int)transcodingOutputBitrate480pValue;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate640p; // @synthesize transcodingOutputBitrate640p=_transcodingOutputBitrate640p;
- (int)transcodingOutputBitrate640pValue;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputBitrate720p; // @synthesize transcodingOutputBitrate720p=_transcodingOutputBitrate720p;
- (int)transcodingOutputBitrate720pValue;
@property(readonly, copy, nonatomic) NSNumber *transcodingOutputWidth; // @synthesize transcodingOutputWidth=_transcodingOutputWidth;
- (int)transcodingOutputWidthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


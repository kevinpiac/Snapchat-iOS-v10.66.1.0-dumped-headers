//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletFaceParams-Protocol.h"

@class NSNumber, NSString, SOJURect;

@interface SOJUGalleryServletFaceParams : NSObject <SOJUGalleryServletFaceParams>
{
    NSString *_faceId;
    NSString *_mediaId;
    SOJURect *_boundingBox;
    SOJURect *_relativeBoundingBox;
    NSString *_mediaBytes;
    NSString *_faceVersion;
    NSNumber *_gender;
    NSNumber *_genderScore;
    NSNumber *_smileScore;
    NSNumber *_hatScore;
    NSNumber *_mediaTimestampMs;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJURect *boundingBox; // @synthesize boundingBox=_boundingBox;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *faceId; // @synthesize faceId=_faceId;
@property(readonly, copy, nonatomic) NSString *faceVersion; // @synthesize faceVersion=_faceVersion;
- (long long)faceVersionEnum;
@property(readonly, copy, nonatomic) NSNumber *gender; // @synthesize gender=_gender;
- (long long)genderEnum;
@property(readonly, copy, nonatomic) NSNumber *genderScore; // @synthesize genderScore=_genderScore;
- (float)genderScoreValue;
- (int)genderValue;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *hatScore; // @synthesize hatScore=_hatScore;
- (float)hatScoreValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceId:(id)arg1 mediaId:(id)arg2 boundingBox:(id)arg3 relativeBoundingBox:(id)arg4 mediaBytes:(id)arg5 faceVersion:(id)arg6 gender:(id)arg7 genderScore:(id)arg8 smileScore:(id)arg9 hatScore:(id)arg10 mediaTimestampMs:(id)arg11;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaBytes; // @synthesize mediaBytes=_mediaBytes;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSNumber *mediaTimestampMs; // @synthesize mediaTimestampMs=_mediaTimestampMs;
- (long long)mediaTimestampMsValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJURect *relativeBoundingBox; // @synthesize relativeBoundingBox=_relativeBoundingBox;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *smileScore; // @synthesize smileScore=_smileScore;
- (float)smileScoreValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


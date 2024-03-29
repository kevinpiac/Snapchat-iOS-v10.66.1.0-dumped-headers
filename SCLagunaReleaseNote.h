//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SCSpectaclesFirmwareVersion;

@interface SCLagunaReleaseNote : NSObject <NSCoding, NSCopying>
{
    NSString *_title;
    NSString *_body;
    NSString *_prereleaseBody;
    NSString *_thumbnailAssetName;
    NSURL *_videoURL;
    unsigned long long _type;
    NSString *_applicableClientVersion;
    NSArray *_applicableHardwareMajorNumbers;
    id <SCSpectaclesFirmwareVersion> _applicableFirmwareVersion;
    unsigned long long _index;
}

+ (_Bool)_isClientVersionValid:(id)arg1;
+ (id)_sharedVersionMatchingRegex;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *applicableClientVersion; // @synthesize applicableClientVersion=_applicableClientVersion;
@property(readonly, nonatomic) id <SCSpectaclesFirmwareVersion> applicableFirmwareVersion; // @synthesize applicableFirmwareVersion=_applicableFirmwareVersion;
@property(readonly, nonatomic) NSArray *applicableHardwareMajorNumbers; // @synthesize applicableHardwareMajorNumbers=_applicableHardwareMajorNumbers;
- (_Bool)appliesToClientUpgradeFrom:(id)arg1 to:(id)arg2;
- (_Bool)appliesToFirmwareUpgradeFrom:(id)arg1 to:(id)arg2;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersionString:(id)arg1 index:(unsigned long long)arg2 params:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)matchesHardwareVersions:(id)arg1;
@property(readonly, copy, nonatomic) NSString *prereleaseBody; // @synthesize prereleaseBody=_prereleaseBody;
@property(readonly, nonatomic) NSString *thumbnailAssetName; // @synthesize thumbnailAssetName=_thumbnailAssetName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;

@end


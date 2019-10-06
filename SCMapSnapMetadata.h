//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapSnapMetadata-Protocol.h"

@class NSString;

@interface SCMapSnapMetadata : NSObject <SCMapSnapMetadata>
{
    long long _viewableStatus;
    NSString *_storySnapId;
    NSString *_displayText;
    double _lat;
    double _lng;
    double _zoom;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewableStatus:(long long)arg1 storySnapId:(id)arg2 displayText:(id)arg3 lat:(double)arg4 lng:(double)arg5 zoom:(double)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lat; // @synthesize lat=_lat;
@property(readonly, nonatomic) double lng; // @synthesize lng=_lng;
- (_Bool)preferFasterCoding;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
@property(readonly, nonatomic) long long viewableStatus; // @synthesize viewableStatus=_viewableStatus;
@property(readonly, nonatomic) double zoom; // @synthesize zoom=_zoom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUMessagingNycStoryShareMetadataResponse-Protocol.h"

@class NSNumber, NSString, SOJUStory;

@interface SOJUMessagingNycStoryShareMetadataResponse : NSObject <SOJUMessagingNycStoryShareMetadataResponse>
{
    SOJUStory *_story;
    NSString *_status;
    NSString *_displayText;
    NSNumber *_lat;
    NSNumber *_lng;
    NSNumber *_zoom;
}

+ (_Bool)canInitFromProto;
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
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithStory:(id)arg1 status:(id)arg2 displayText:(id)arg3 lat:(id)arg4 lng:(id)arg5 zoom:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
- (double)latValue;
@property(readonly, copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
- (double)lngValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
- (long long)statusEnum;
@property(readonly, copy, nonatomic) SOJUStory *story; // @synthesize story=_story;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *zoom; // @synthesize zoom=_zoom;
- (double)zoomValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

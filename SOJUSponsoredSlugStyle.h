//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSponsoredSlugStyle-Protocol.h"

@class NSString, SOJUStrPoint;

@interface SOJUSponsoredSlugStyle : NSObject <SOJUSponsoredSlugStyle>
{
    NSString *_font;
    NSString *_textSize;
    NSString *_color;
    NSString *_dropshadowColor;
    SOJUStrPoint *_dropshadowOffset;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *dropshadowColor; // @synthesize dropshadowColor=_dropshadowColor;
@property(readonly, copy, nonatomic) SOJUStrPoint *dropshadowOffset; // @synthesize dropshadowOffset=_dropshadowOffset;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *font; // @synthesize font=_font;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFont:(id)arg1 textSize:(id)arg2 color:(id)arg3 dropshadowColor:(id)arg4 dropshadowOffset:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *textSize; // @synthesize textSize=_textSize;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

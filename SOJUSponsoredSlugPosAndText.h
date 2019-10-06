//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSponsoredSlugPosAndText-Protocol.h"

@class NSNumber, NSString, SOJUStrRect;

@interface SOJUSponsoredSlugPosAndText : NSObject <SOJUSponsoredSlugPosAndText>
{
    SOJUStrRect *_viewRect;
    NSString *_alignment;
    NSString *_position;
    NSString *_hmargin;
    NSString *_vmargin;
    NSString *_text;
    NSString *_sponsoredText;
    NSString *_sponsoredChannelText;
    NSNumber *_timeBeforeFadeout;
    NSString *_longformText;
    NSNumber *_longformTimeBeforeFadeout;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *alignment; // @synthesize alignment=_alignment;
- (long long)alignmentEnum;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *hmargin; // @synthesize hmargin=_hmargin;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithViewRect:(id)arg1 alignment:(id)arg2 position:(id)arg3 hmargin:(id)arg4 vmargin:(id)arg5 text:(id)arg6 sponsoredText:(id)arg7 sponsoredChannelText:(id)arg8 timeBeforeFadeout:(id)arg9 longformText:(id)arg10 longformTimeBeforeFadeout:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *longformText; // @synthesize longformText=_longformText;
@property(readonly, copy, nonatomic) NSNumber *longformTimeBeforeFadeout; // @synthesize longformTimeBeforeFadeout=_longformTimeBeforeFadeout;
- (int)longformTimeBeforeFadeoutValue;
@property(readonly, copy, nonatomic) NSString *position; // @synthesize position=_position;
- (long long)positionEnum;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *sponsoredChannelText; // @synthesize sponsoredChannelText=_sponsoredChannelText;
@property(readonly, copy, nonatomic) NSString *sponsoredText; // @synthesize sponsoredText=_sponsoredText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSNumber *timeBeforeFadeout; // @synthesize timeBeforeFadeout=_timeBeforeFadeout;
- (int)timeBeforeFadeoutValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) SOJUStrRect *viewRect; // @synthesize viewRect=_viewRect;
@property(readonly, copy, nonatomic) NSString *vmargin; // @synthesize vmargin=_vmargin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


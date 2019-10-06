//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJURichStoryRichStoryInteractionZoneButtonItem-Protocol.h"

@class NSNumber, NSString;

@interface SOJURichStoryRichStoryInteractionZoneButtonItem : NSObject <SOJURichStoryRichStoryInteractionZoneButtonItem>
{
    NSString *_itemIcon;
    NSString *_url;
    NSString *_title;
    NSString *_descriptionValue;
    NSString *_deepLinkUri;
    NSNumber *_deepLinkFallbackIosAppId;
    NSString *_deepLinkFallbackAndroidPackageId;
    NSString *_deepLinkFallbackWebUrl;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *deepLinkFallbackAndroidPackageId; // @synthesize deepLinkFallbackAndroidPackageId=_deepLinkFallbackAndroidPackageId;
@property(readonly, copy, nonatomic) NSNumber *deepLinkFallbackIosAppId; // @synthesize deepLinkFallbackIosAppId=_deepLinkFallbackIosAppId;
- (long long)deepLinkFallbackIosAppIdValue;
@property(readonly, copy, nonatomic) NSString *deepLinkFallbackWebUrl; // @synthesize deepLinkFallbackWebUrl=_deepLinkFallbackWebUrl;
@property(readonly, copy, nonatomic) NSString *deepLinkUri; // @synthesize deepLinkUri=_deepLinkUri;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *descriptionValue; // @synthesize descriptionValue=_descriptionValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIcon:(id)arg1 url:(id)arg2 title:(id)arg3 descriptionValue:(id)arg4 deepLinkUri:(id)arg5 deepLinkFallbackIosAppId:(id)arg6 deepLinkFallbackAndroidPackageId:(id)arg7 deepLinkFallbackWebUrl:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *itemIcon; // @synthesize itemIcon=_itemIcon;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString, SCSearchV2Location;

@interface SCSearchV2UserInfo : SCComposerMarshallableObject
{
    double _age;
    NSString *_countryCode;
    SCSearchV2Location *_location;
    NSString *_bitmojiAvatarId;
}

- (void).cxx_destruct;
@property(nonatomic) double age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)initWithAge:(double)arg1 countryCode:(id)arg2 location:(id)arg3 bitmojiAvatarId:(id)arg4;
@property(retain, nonatomic) SCSearchV2Location *location; // @synthesize location=_location;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end


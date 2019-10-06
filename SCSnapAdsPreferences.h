//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSnapAdsPreferences : NSObject <NSCopying>
{
    _Bool _audienceMatchOptOut;
    _Bool _externalActivityMatchOptOut;
}

@property(readonly, nonatomic) _Bool audienceMatchOptOut; // @synthesize audienceMatchOptOut=_audienceMatchOptOut;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool externalActivityMatchOptOut; // @synthesize externalActivityMatchOptOut=_externalActivityMatchOptOut;
- (unsigned long long)hash;
- (id)initWithAudienceMatchOptOut:(_Bool)arg1 externalActivityMatchOptOut:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;

@end


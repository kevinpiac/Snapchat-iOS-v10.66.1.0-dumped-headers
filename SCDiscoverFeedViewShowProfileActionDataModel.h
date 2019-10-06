//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedViewShowProfileActionDataModel : NSObject <NSCopying>
{
    NSString *_businessProfileId;
    NSString *_publisherId;
    NSString *_publisherNameId;
    NSString *_showId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithBusinessProfileId:(id)arg1 publisherId:(id)arg2 publisherNameId:(id)arg3 showId:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(readonly, copy, nonatomic) NSString *publisherNameId; // @synthesize publisherNameId=_publisherNameId;
@property(readonly, copy, nonatomic) NSString *showId; // @synthesize showId=_showId;

@end

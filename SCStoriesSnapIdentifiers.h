//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesSnapIdentifiers : NSObject <NSCopying>
{
    NSString *_venueId;
    NSString *_geoFilterId;
    NSString *_storyFilterId;
    NSString *_lensId;
    NSString *_placeId;
    NSString *_flushableStorySnapId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *flushableStorySnapId; // @synthesize flushableStorySnapId=_flushableStorySnapId;
@property(readonly, copy, nonatomic) NSString *geoFilterId; // @synthesize geoFilterId=_geoFilterId;
- (unsigned long long)hash;
- (id)initWithVenueId:(id)arg1 geoFilterId:(id)arg2 storyFilterId:(id)arg3 lensId:(id)arg4 placeId:(id)arg5 flushableStorySnapId:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(readonly, copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, copy, nonatomic) NSString *storyFilterId; // @synthesize storyFilterId=_storyFilterId;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;

@end


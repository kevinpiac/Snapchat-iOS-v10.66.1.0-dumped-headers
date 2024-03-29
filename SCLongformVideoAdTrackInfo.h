//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCLongformVideoAdTrackInfo : NSObject <NSCopying>
{
    long long _longformMediaDurationInMillis;
    long long _longformReportedMaxViewDurationMillis;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithLongformMediaDurationInMillis:(long long)arg1 longformReportedMaxViewDurationMillis:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long longformMediaDurationInMillis; // @synthesize longformMediaDurationInMillis=_longformMediaDurationInMillis;
@property(readonly, nonatomic) long long longformReportedMaxViewDurationMillis; // @synthesize longformReportedMaxViewDurationMillis=_longformReportedMaxViewDurationMillis;

@end


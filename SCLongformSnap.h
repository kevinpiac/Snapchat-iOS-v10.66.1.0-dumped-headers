//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCLongformSnap : NSObject <NSCopying, NSCoding>
{
    NSString *_videoId;
    NSString *_videoUrl;
    NSArray *_chapterIntervals;
    NSArray *_adIntervals;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *adIntervals; // @synthesize adIntervals=_adIntervals;
@property(readonly, copy, nonatomic) NSArray *chapterIntervals; // @synthesize chapterIntervals=_chapterIntervals;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoId:(id)arg1 videoUrl:(id)arg2 chapterIntervals:(id)arg3 adIntervals:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(readonly, copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;

@end


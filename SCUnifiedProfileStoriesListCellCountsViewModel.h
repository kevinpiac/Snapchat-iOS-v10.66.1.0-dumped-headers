//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCUnifiedProfileStoriesListCellCountsViewModel : NSObject <NSCopying>
{
    unsigned long long _viewCount;
    unsigned long long _screenshotCount;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithViewCount:(unsigned long long)arg1 screenshotCount:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;

@end

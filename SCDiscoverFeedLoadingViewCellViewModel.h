//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCDiscoverFeedLoadingViewCellViewModel : NSObject <NSCopying>
{
    struct CGSize _preferredCardSize;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithPreferredCardSize:(struct CGSize)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize preferredCardSize; // @synthesize preferredCardSize=_preferredCardSize;

@end


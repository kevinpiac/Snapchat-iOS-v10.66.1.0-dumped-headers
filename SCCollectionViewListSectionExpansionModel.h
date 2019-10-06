//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCCollectionViewListSectionExpansionModel : NSObject <NSCopying>
{
    _Bool _shouldHideShowLess;
    unsigned long long _maximumThreshold;
    unsigned long long _minimumThreshold;
    unsigned long long _incrementThreshold;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long incrementThreshold; // @synthesize incrementThreshold=_incrementThreshold;
- (id)initWithMaximumThreshold:(unsigned long long)arg1 minimumThreshold:(unsigned long long)arg2 incrementThreshold:(unsigned long long)arg3 shouldHideShowLess:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long maximumThreshold; // @synthesize maximumThreshold=_maximumThreshold;
@property(readonly, nonatomic) unsigned long long minimumThreshold; // @synthesize minimumThreshold=_minimumThreshold;
@property(readonly, nonatomic) _Bool shouldHideShowLess; // @synthesize shouldHideShowLess=_shouldHideShowLess;

@end


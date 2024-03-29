//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCDiscoverFeedSectionContentDataModel : NSObject <NSCopying>
{
    _Bool _isCarousel;
    _Bool _canHide;
    NSNumber *_feedType;
    NSString *_supplementaryTitle;
    NSString *_sectionType;
    long long _tileType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canHide; // @synthesize canHide=_canHide;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *feedType; // @synthesize feedType=_feedType;
- (unsigned long long)hash;
- (id)initWithFeedType:(id)arg1 supplementaryTitle:(id)arg2 sectionType:(id)arg3 tileType:(long long)arg4 isCarousel:(_Bool)arg5 canHide:(_Bool)arg6;
@property(readonly, nonatomic) _Bool isCarousel; // @synthesize isCarousel=_isCarousel;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSString *supplementaryTitle; // @synthesize supplementaryTitle=_supplementaryTitle;
@property(readonly, nonatomic) long long tileType; // @synthesize tileType=_tileType;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACommerceStoreCategoryEventBase.h"

@class NSNumber, NSString;

@interface SCACommerceStoreHeroImageTileTapEvent : SCACommerceStoreCategoryEventBase
{
    NSNumber *tileRow;
    NSNumber *tileColumn;
    NSString *heroImageId;
    NSString *targetCategoryId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getHeroImageId;
- (double)getPerUserSamplingRate;
- (id)getTargetCategoryId;
- (long long)getTileColumn;
- (long long)getTileRow;
- (void)setHeroImageId:(id)arg1;
- (void)setTargetCategoryId:(id)arg1;
- (void)setTileColumn:(long long)arg1;
- (void)setTileRow:(long long)arg1;

@end


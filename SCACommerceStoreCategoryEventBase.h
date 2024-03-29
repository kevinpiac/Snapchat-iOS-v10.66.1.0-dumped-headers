//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACommerceEventBase.h"

@class NSNumber, NSString;

@interface SCACommerceStoreCategoryEventBase : SCACommerceEventBase
{
    NSNumber *categoryRowIndex;
    NSNumber *totalCategories;
    NSString *categoryId;
    NSString *categoryTitle;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCategoryId;
- (long long)getCategoryRowIndex;
- (id)getCategoryTitle;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getTotalCategories;
- (void)setCategoryId:(id)arg1;
- (void)setCategoryRowIndex:(long long)arg1;
- (void)setCategoryTitle:(id)arg1;
- (void)setTotalCategories:(long long)arg1;

@end


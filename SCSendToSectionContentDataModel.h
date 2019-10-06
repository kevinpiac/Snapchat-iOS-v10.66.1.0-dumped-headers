//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSearchQuery;

@interface SCSendToSectionContentDataModel : NSObject <NSCopying>
{
    SCSearchQuery *_query;
    NSString *_sectionMetricName;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithQuery:(id)arg1 sectionMetricName:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSString *sectionMetricName; // @synthesize sectionMetricName=_sectionMetricName;

@end

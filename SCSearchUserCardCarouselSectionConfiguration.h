//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCSearchQuery, SCSectionKitHeaderModel;

@interface SCSearchUserCardCarouselSectionConfiguration : NSObject <NSCopying>
{
    SCSectionKitHeaderModel *_sectionHeaderModel;
    NSArray *_userViewModels;
    SCSearchQuery *_query;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSectionHeaderModel:(id)arg1 userViewModels:(id)arg2 query:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) SCSectionKitHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(readonly, copy, nonatomic) NSArray *userViewModels; // @synthesize userViewModels=_userViewModels;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCSearchResultSectionDescriptor;
@protocol SCCollectionViewListSectionViewMoreProviding, SCCollectionViewSectionLayoutProviding;

@protocol SCDiscoverFeedCollectionViewSectionCreating <NSObject>
- (id <SCSectionDataProviding> (^)(void))sectionDataProviderCreator;
- (NSString *)sectionTitleForDescriptor:(SCSearchResultSectionDescriptor *)arg1;

@optional
- (id <SCCollectionViewSectionLayoutProviding>)carouselSectionLayoutCalculator:(SCSearchResultSectionDescriptor *)arg1;
- (id <SCCollectionViewListSectionViewMoreProviding>)listSectionViewMoreProvider:(SCSearchResultSectionDescriptor *)arg1;
@end


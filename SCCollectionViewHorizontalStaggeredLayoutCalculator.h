//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSectionLayoutProviding-Protocol.h"

@class NSString;
@protocol SCCollectionViewSectionLayoutProvidingDataSource;

@interface SCCollectionViewHorizontalStaggeredLayoutCalculator : NSObject <SCCollectionViewSectionLayoutProviding>
{
    id <SCCollectionViewSectionLayoutProvidingDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCCollectionViewSectionLayoutProvidingDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)layoutAttributesForSectionOriginPoint:(struct CGPoint)arg1 sectionWidth:(double)arg2 minimumInteritemSpacing:(double)arg3 numberOfItems:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString, NSValue, SCCollectionViewSectionUpdateModel, SCSectionKitHeaderModel, UICollectionReusableView, UICollectionView, UICollectionViewCell, UIView;
@protocol NSCopying, SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCCollectionViewSectionSupplementaryViewProviding, SCSearchIntentHandler;

@protocol SCCollectionViewSection <NSObject>
- (UICollectionViewCell *)cellForItemAtIndexInSection:(unsigned long long)arg1;
@property(nonatomic) long long dataLoadingStatus;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED;
- (unsigned long long)numberOfCellsInSection;
- (NSDictionary *)reuseCellClassesByIdentifiers;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;

@optional
- (void)applyConfiguration:(NSObject<NSCopying> *)arg1;
- (void)collectionView:(UICollectionView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 atIndexInSection:(unsigned long long)arg3;
- (void)collectionViewDidEndDisplayingCell:(UICollectionViewCell *)arg1 atIndexInSection:(unsigned long long)arg2;
- (void)collectionViewWillDisplaySupplementaryView:(UICollectionReusableView *)arg1 forElementKind:(NSString *)arg2 atIndexInSection:(unsigned long long)arg3;
- (UIView *)customizedHeaderView;
- (long long)experimentalPagingMode;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (long long)sectionContentMode;
- (SCSectionKitHeaderModel *)sectionHeaderModel;
- (NSDictionary *)sectionInfo;
- (NSValue *)sectionInsets;
- (void)setSectionUpdatable:(_Bool)arg1;
- (void)setUp;
- (id <SCCollectionViewSectionSupplementaryViewProviding>)supplementaryViewProvider;
- (void)tearDown;
@end

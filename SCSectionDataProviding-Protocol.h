//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEventAnnouncing-Protocol.h"

@class NSArray, NSDictionary, NSObject;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@protocol SCSectionDataProviding <SCEventAnnouncing>
- (NSArray *)containerCellViewModelsForIndexPaths:(NSArray *)arg1;
- (NSDictionary *)contentCellClassesByReuseIdentifier;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer;

@optional
- (NSDictionary *)configurationBlocksByReuseIdentifier;
- (long long)dataLoadingStatus;
- (long long)experimentalPagingMode;
- (double)minimumInteritemSpacing;
- (_Bool (^)(id, id))modelCanUpdateComparator;
- (unsigned long long)numberOfSections;
- (void)setUp;
- (NSDictionary *)supplementaryViewModels;
- (void)tearDown;
@end


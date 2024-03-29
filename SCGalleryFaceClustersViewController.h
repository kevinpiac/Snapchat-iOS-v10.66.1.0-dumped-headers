//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCGalleryCollectionViewCustomizing-Protocol.h"

@class NSArray, NSDictionary, NSString, SCQueuePerformer, SCUserSession, UICollectionView, UICollectionViewFlowLayout;

@interface SCGalleryFaceClustersViewController : UIViewController <SCGalleryCollectionViewCustomizing>
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    NSDictionary *_gallerySnapClusters;
    NSArray *_clusterIdsBySize;
    NSDictionary *_gallerySnapIdToGallerySnap;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
}

- (void).cxx_destruct;
- (id)cellReuseIdentifierForSection:(long long)arg1;
@property(retain, nonatomic) NSArray *clusterIdsBySize; // @synthesize clusterIdsBySize=_clusterIdsBySize;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) NSDictionary *gallerySnapClusters; // @synthesize gallerySnapClusters=_gallerySnapClusters;
@property(retain, nonatomic) NSDictionary *gallerySnapIdToGallerySnap; // @synthesize gallerySnapIdToGallerySnap=_gallerySnapIdToGallerySnap;
- (id)initWithUserSession:(id)arg1 gallerySnapClusters:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)registerCellsForCollectionView:(id)arg1;
- (void)registerSupplementaryViewsForCollectionView:(id)arg1;
- (void)reloadCollectionView;
- (void)setGallerySnapClusters:(id)arg1 reload:(_Bool)arg2;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


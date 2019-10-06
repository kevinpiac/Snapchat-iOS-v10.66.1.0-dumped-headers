//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSIndexPath, NSIndexSet, NSString, UICollectionViewCell, UIViewController;
@protocol SCCollectionViewSection;

@protocol SCCollectionViewSectionDelegate <NSObject>
- (struct CGSize)collectionViewBoundsSizeForSection:(id <SCCollectionViewSection>)arg1;
- (void)collectionViewResultSection:(id <SCCollectionViewSection>)arg1 reloadCellsAtIndexesIfNeeded:(NSIndexSet *)arg2;
- (UICollectionViewCell *)collectionViewSection:(id <SCCollectionViewSection>)arg1 cellForItemAtIndexInSection:(unsigned long long)arg2 error:(id *)arg3;
- (UICollectionViewCell *)collectionViewSection:(id <SCCollectionViewSection>)arg1 dequeueReusableCellWithReuseIdentifier:(NSString *)arg2 forIndexInSection:(unsigned long long)arg3;
- (void)collectionViewSection:(id <SCCollectionViewSection>)arg1 didUpdateLayoutWithInteraction:(_Bool)arg2;
- (NSIndexPath *)collectionViewSection:(id <SCCollectionViewSection>)arg1 indexPathForCell:(UICollectionViewCell *)arg2;
- (void)collectionViewSection:(id <SCCollectionViewSection>)arg1 scrollToItemAtIndexInSection:(unsigned long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)collectionViewSection:(id <SCCollectionViewSection>)arg1 supplementaryViewModelsUpdated:(NSDictionary *)arg2;
- (void)collectionViewSectionUpdateIfNeeded:(id <SCCollectionViewSection>)arg1;
- (UIViewController *)presentingViewControllerForCollectionViewSection:(id <SCCollectionViewSection>)arg1;
- (struct UIEdgeInsets)sectionInsetsForCollectionViewSection:(id <SCCollectionViewSection>)arg1;
@end


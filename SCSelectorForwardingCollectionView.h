//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;

@interface SCSelectorForwardingCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <UICollectionViewDataSource> _externalDataSource;
    id <UICollectionViewDelegate> _externalDelegate;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <UICollectionViewDataSource> externalDataSource; // @synthesize externalDataSource=_externalDataSource;
@property(nonatomic) __weak id <UICollectionViewDelegate> externalDelegate; // @synthesize externalDelegate=_externalDelegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


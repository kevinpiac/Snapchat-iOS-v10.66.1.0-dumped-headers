//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsTakeOverCollectionViewMutating-Protocol.h"

@class SCBehaviorSubject, SCLazy, SCSectionBasedCollectionViewUpdater, UICollectionView;
@protocol SCActionHandling;

@interface SCAddFriendsTakeoverQuickAddCarouselController : NSObject <SCAddFriendsTakeOverCollectionViewMutating>
{
    UICollectionView *_collectionView;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    SCLazy *_sectionDataProvider;
    SCBehaviorSubject *_quickAddCarouselDisplaySubject;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (id)_quickAddCarouselSectionConfiguration;
- (id)_quickAddCarouselSectionSupplementaryViewProvider;
- (id)initWithSectionDataProvider:(id)arg1 displayDateObservable:(id)arg2 actionHandler:(id)arg3;
- (void)reloadWithCollectionView:(id)arg1 relatedUserId:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCOperaViewModel;

@interface SCBloopsFullscreenDataSource : NSObject
{
    NSArray *_bloopsModels;
    NSArray *_operaViewModels;
    unsigned long long _currentItemIndex;
    unsigned long long _scrollDirection;
    SCOperaViewModel *_rootOperaViewModel;
}

- (void).cxx_destruct;
- (id)_buildSingleViewModelWithItem:(id)arg1;
- (id)_buildViewModelPropertiesForItem:(id)arg1;
- (id)_buildViewModelsWithItems:(id)arg1;
- (void)_updateItem:(id)arg1 withLoadingState:(long long)arg2;
- (void)_updateItemsWithCurrentIndex:(unsigned long long)arg1;
- (id)initWithItems:(id)arg1 currentItemIndex:(unsigned long long)arg2;
- (unsigned long long)pageIndexFromModel:(id)arg1;
- (id)prepareItemsForPrefetching;
@property(readonly, nonatomic) SCOperaViewModel *rootOperaViewModel; // @synthesize rootOperaViewModel=_rootOperaViewModel;
- (void)setFailForBloopModel:(id)arg1;
- (unsigned long long)startToBrowsePageWithModel:(id)arg1;
- (void)updateWithBloopsReenactmentResult:(id)arg1;

@end

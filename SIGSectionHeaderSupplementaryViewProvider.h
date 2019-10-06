//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionable-Protocol.h"
#import "SCCollectionViewSectionSupplementaryViewProviding-Protocol.h"
#import "SCCollectionViewSupplementaryViewModelsConfigurable-Protocol.h"

@class NSDictionary, NSString, SIGSectionHeaderViewModel;
@protocol SCActionHandling, SCCollectionViewSectionSupplementaryViewProviderDelegate;

@interface SIGSectionHeaderSupplementaryViewProvider : NSObject <SCCollectionViewSectionSupplementaryViewProviding, SCCollectionViewSupplementaryViewModelsConfigurable, SCActionable>
{
    SIGSectionHeaderViewModel *_viewModel;
    NSDictionary *_supplementaryViewModels;
    id <SCCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)initWithHeaderViewModel:(id)arg1;
- (struct CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3;
@property(readonly, nonatomic) long long sectionHeaderDisplayStrategy;
@property(copy, nonatomic) NSDictionary *supplementaryViewModels; // @synthesize supplementaryViewModels=_supplementaryViewModels;
@property(nonatomic) __weak id <SCCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate; // @synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate;
- (id)viewClassesForSupplementaryViewsByElementKind;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


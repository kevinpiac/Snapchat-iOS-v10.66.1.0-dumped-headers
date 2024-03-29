//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSectionFastAccessIndexing-Protocol.h"

@class NSArray, NSString;
@protocol SCSendToScrollViewCoordinating;

@interface SCSendToSectionFastAccessIndexerForNonFriendsSection : NSObject <SCCollectionViewSectionFastAccessIndexing>
{
    NSArray *_containerCellViewModels;
    NSString *_indexIdentifier;
    NSString *_queryKey;
    _Bool _shouldEmitNotFoundIfEmpty;
    id <SCSendToScrollViewCoordinating> _delegate;
}

- (void).cxx_destruct;
- (id)indexForItemWithQueryKey:(id)arg1;
- (id)initWithIndexIdentifier:(id)arg1 withQueryKey:(id)arg2 shouldEmitNotFoundIfEmpty:(_Bool)arg3 delegate:(id)arg4;
- (void)setContainerCellViewModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


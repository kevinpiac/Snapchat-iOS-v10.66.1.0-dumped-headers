//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensDiscoveryCellProducerDelegate-Protocol.h"

@class NSString, SCLens, SCLensDiscoveryGroupCell;

@protocol SCLensDiscoveryGroupCellDelegate <SCLensDiscoveryCellProducerDelegate>
- (void)lensDiscoveryGroupCell:(SCLensDiscoveryGroupCell *)arg1 didChangeContentXOffset:(double)arg2;
- (void)lensDiscoveryGroupCell:(SCLensDiscoveryGroupCell *)arg1 didSelectLens:(SCLens *)arg2 inCategoryWithId:(NSString *)arg3;
- (_Bool)lensDiscoveryGroupCell:(SCLensDiscoveryGroupCell *)arg1 isObjectNewWithId:(NSString *)arg2 inCategoryWithId:(NSString *)arg3;
@end


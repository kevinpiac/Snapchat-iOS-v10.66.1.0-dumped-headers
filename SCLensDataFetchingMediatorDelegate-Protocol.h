//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLens, SCLensDataFetchingMediator;

@protocol SCLensDataFetchingMediatorDelegate <NSObject>
- (void)lensDataFetchingMediator:(SCLensDataFetchingMediator *)arg1 didUpdateContentForLens:(SCLens *)arg2 contentUpdateType:(long long)arg3;
- (void)lensDataFetchingMediatorDidStartUpdatingLensData:(SCLensDataFetchingMediator *)arg1;
- (void)lensDataFetchingMediatorDidStopUpdatingLensData:(SCLensDataFetchingMediator *)arg1;
- (void)lensDataFetchingMediatorUpdateLenses:(SCLensDataFetchingMediator *)arg1;
@end

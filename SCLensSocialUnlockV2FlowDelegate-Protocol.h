//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCLensSocialUnlockV2Flow;

@protocol SCLensSocialUnlockV2FlowDelegate <NSObject>
- (void)socialUnlockFlow:(id <SCLensSocialUnlockV2Flow>)arg1 willDismissContextCardsWithCompletion:(void (^)(void))arg2;
- (void)socialUnlockFlowDidDismissModalContent:(id <SCLensSocialUnlockV2Flow>)arg1;
- (void)socialUnlockFlowWillPresentModalContent:(id <SCLensSocialUnlockV2Flow>)arg1;
@end

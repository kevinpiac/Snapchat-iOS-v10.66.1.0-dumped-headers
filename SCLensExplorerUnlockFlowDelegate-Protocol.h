//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLens;
@protocol SCLensExplorerLensUnlockerProtocol;

@protocol SCLensExplorerUnlockFlowDelegate <NSObject>
- (void)lensExplorerLensUnlocker:(id <SCLensExplorerLensUnlockerProtocol>)arg1 didRequestToUpdateSelectLensAfterUnlock:(SCLens *)arg2;
- (void)lensExplorerLensUnlocker:(id <SCLensExplorerLensUnlockerProtocol>)arg1 didUseLens:(SCLens *)arg2;
@end


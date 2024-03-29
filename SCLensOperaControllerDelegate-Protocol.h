//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLens, SCLensOperaController;
@protocol SCLensOperaPresenterProtocol;

@protocol SCLensOperaControllerDelegate <NSObject>
- (void)lensOperaController:(SCLensOperaController *)arg1 didClosePresenter:(id <SCLensOperaPresenterProtocol>)arg2;
- (void)lensOperaController:(SCLensOperaController *)arg1 didOpenPresenter:(id <SCLensOperaPresenterProtocol>)arg2;

@optional
- (void)lensOperaController:(SCLensOperaController *)arg1 didClosePresenter:(id <SCLensOperaPresenterProtocol>)arg2 lensUnlocked:(SCLens *)arg3;
@end


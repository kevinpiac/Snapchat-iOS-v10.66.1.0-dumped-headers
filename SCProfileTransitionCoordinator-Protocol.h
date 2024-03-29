//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol SCProfileTransitionCoordinatorDataSource, SCProfileTransitionCoordinatorDelegate;

@protocol SCProfileTransitionCoordinator <NSObject>
@property(nonatomic) __weak id <SCProfileTransitionCoordinatorDataSource> dataSource;
@property(nonatomic) __weak id <SCProfileTransitionCoordinatorDelegate> delegate;
- (void)dismissProfileViewControllerAnimated:(_Bool)arg1;
- (void)dismissProfileViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
@property(readonly, nonatomic) _Bool isInteractiveTransitionInProgress;
@property(readonly, nonatomic) _Bool isPresented;
@property(readonly, nonatomic) double percentVisible;
- (void)presentProfileFromViewController:(UIViewController *)arg1 animated:(_Bool)arg2 profileType:(unsigned long long)arg3;
- (void)presentProfileFromViewController:(UIViewController *)arg1 animated:(_Bool)arg2 profileType:(unsigned long long)arg3 completion:(void (^)(void))arg4;
- (void)pushViewControllerOntoProfileViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)wireToView:(UIView *)arg1;
@end


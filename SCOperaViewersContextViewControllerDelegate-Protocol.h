//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCOperaViewersContextViewController, UIScrollView, UIView;

@protocol SCOperaViewersContextViewControllerDelegate <NSObject>
- (void)centerActionButtonPressed;
- (void)deleteButtonPressed;
- (void)didLoadContextCellAtRow:(long long)arg1;
- (void)headerAreaButtonPressed;
- (void)postButtonPressed;
- (void)saveButtonPressed;
- (void)setCenterActionButtonType:(long long)arg1;
- (void)viewersContextViewController:(SCOperaViewersContextViewController *)arg1 didTapAvatarView:(UIView *)arg2 forUsername:(NSString *)arg3 displayName:(NSString *)arg4;
- (void)viewersContextViewController:(SCOperaViewersContextViewController *)arg1 didUpdateScrollView:(UIScrollView *)arg2;
- (void)viewersContextViewController:(SCOperaViewersContextViewController *)arg1 showMiniProfileWithUsername:(NSString *)arg2 displayName:(NSString *)arg3;
@end

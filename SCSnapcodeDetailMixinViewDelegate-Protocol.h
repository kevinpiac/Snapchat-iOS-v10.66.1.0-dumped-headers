//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCScannableInfo, SCSnapcodeDetailMixinView, UIImage, UIViewController;

@protocol SCSnapcodeDetailMixinViewDelegate <NSObject>
- (void)snapcodeDetailMixinViewDidDelete:(SCSnapcodeDetailMixinView *)arg1;
- (void)snapcodeDetailMixinViewDidPresentController:(SCSnapcodeDetailMixinView *)arg1 controller:(UIViewController *)arg2;
- (void)snapcodeDetailMixinViewDidPushController:(SCSnapcodeDetailMixinView *)arg1 controller:(UIViewController *)arg2;
- (void)snapcodeDetailMixinViewDidUpdateGhostImage:(SCSnapcodeDetailMixinView *)arg1 image:(UIImage *)arg2;
- (void)snapcodeDetailMixinViewDidUpdateScannable:(SCSnapcodeDetailMixinView *)arg1 scannable:(SCScannableInfo *)arg2;
@end


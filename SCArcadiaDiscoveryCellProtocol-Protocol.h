//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensDiscoveryCellProtocol-Protocol.h"

@class NSString, UIImage, UIImageView;

@protocol SCArcadiaDiscoveryCellProtocol <SCLensDiscoveryCellProtocol>
- (void)fillViewWithLensIcon:(UIImage *)arg1 lensStatus:(long long)arg2 lensIconUrl:(NSString *)arg3;
- (UIImageView *)lensIcon;
- (NSString *)lensIconUrl;
- (long long)lensStatus;
- (void)setLensStatus:(long long)arg1;
@end


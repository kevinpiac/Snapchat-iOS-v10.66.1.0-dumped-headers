//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView;
@protocol SCSendPreviewMediaView;

@protocol SCSendPreviewViewModel <NSObject>
- (UIView<SCSendPreviewMediaView> *)mediaView;
- (long long)shareType;
- (long long)viewStyle;

@optional
- (NSString *)chatMessage;
- (double)mediaViewAspectRatio;
- (void)setPreviewBlobImage:(UIImage *)arg1;
- (_Bool)shouldPadMediaView;
- (NSString *)subtitle;
- (NSString *)title;
@end


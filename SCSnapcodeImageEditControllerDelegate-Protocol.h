//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSnapcodeImageEditController, UIImage;

@protocol SCSnapcodeImageEditControllerDelegate <NSObject>
- (void)snapcodeImageEditController:(SCSnapcodeImageEditController *)arg1 didSaveImageScreenshot:(UIImage *)arg2 selectedImage:(UIImage *)arg3 imageTransform:(struct CGAffineTransform)arg4;
- (void)snapcodeImageEditControllerDidRemoveImage:(SCSnapcodeImageEditController *)arg1;

@optional
- (void)snapcodeImageEditControllerDidCancel:(SCSnapcodeImageEditController *)arg1;
@end


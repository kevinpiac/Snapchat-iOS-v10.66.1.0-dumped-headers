//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol SCSpectaclesCustomExporting;

@protocol SCGalleryLagunaCustomExportViewControllerDelegate <NSObject>
- (void)customExportViewController:(UIViewController<SCSpectaclesCustomExporting> *)arg1 didSaveWithExportFormat:(long long)arg2;
- (void)customExportViewController:(UIViewController<SCSpectaclesCustomExporting> *)arg1 didShareWithExportFormat:(long long)arg2;
- (void)customExportViewControllerDidPressCancel:(UIViewController<SCSpectaclesCustomExporting> *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGalleryPrivateGalleryManager;

@protocol SCGalleryPrivateGalleryManagerListener <NSObject>
- (void)privateGalleryManagerDidLock:(SCGalleryPrivateGalleryManager *)arg1;
- (void)privateGalleryManagerDidSetup:(SCGalleryPrivateGalleryManager *)arg1;
- (void)privateGalleryManagerDidUnlock:(SCGalleryPrivateGalleryManager *)arg1;
- (void)privateGalleryManagerDidUpdatePassphrase:(SCGalleryPrivateGalleryManager *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EGOCipherManagedKey, SCGalleryEGOCipherKeyProvider;

@protocol SCGalleryEGOCipherKeyProviderListener <NSObject>
- (void)EGOCipherKeyProviderHasMasterKeyAvailable:(SCGalleryEGOCipherKeyProvider *)arg1 derivedKey:(EGOCipherManagedKey *)arg2 nonDerivedKey:(EGOCipherManagedKey *)arg3;
@end


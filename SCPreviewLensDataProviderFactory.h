//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewLensDataProviderFactoryProtocol-Protocol.h"

@class SCPreviewConfiguration, SCUserSession;

@interface SCPreviewLensDataProviderFactory : NSObject <SCPreviewLensDataProviderFactoryProtocol>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_previewConfiguration;
}

- (void).cxx_destruct;
- (id)_commonLensDataProviderWithConfiguration:(id)arg1 devicePosition:(unsigned long long)arg2 categoryIds:(id)arg3;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2;
- (id)lensDataProviderForLensInPreview;
- (id)lensDataProviderForSnap3DLensInFilterCarousel;
- (id)lensDataProviderForSpectaclesLensInFilterCarousel;

@end

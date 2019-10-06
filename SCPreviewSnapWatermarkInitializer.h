//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCPreviewConfiguration, SCUserSession;
@protocol SCPreviewResources;

@interface SCPreviewSnapWatermarkInitializer : SCFeatureInitializer
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    id <SCPreviewResources> _resourceProvider;
}

- (void).cxx_destruct;
- (id)createInstance;
- (_Bool)enabled;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2 resourceProvider:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLensEffectActivatorConfiguration;

@interface SCLensEffectActivatorConfigurationLoader : NSObject
{
    SCLensEffectActivatorConfiguration *_configuration;
    CDUnknownBlockType _delayedLoadingBlock;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 delayedLoadingBlock:(CDUnknownBlockType)arg2;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;

@end


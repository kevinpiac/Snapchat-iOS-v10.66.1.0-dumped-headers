//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUnlockedFilterImageProvider;
@protocol SCLensEffectActivationStateManager, SCPerforming;

@interface SCLensUnlockedFilterImageHelper : NSObject
{
    id <SCLensEffectActivationStateManager> _lensEffectActivator;
    SCUnlockedFilterImageProvider *_unlockedFilterImageProvider;
    id <SCPerforming> _filterImageDataPerformer;
}

- (void).cxx_destruct;
- (id)_geoFilterFilePath:(id)arg1;
- (id)initWithUnlockedFilterImageProvider:(id)arg1 lensEffectActivator:(id)arg2;
- (void)removeUnlockedFilterWithId:(id)arg1;
- (void)setUnlockedFilterWithId:(id)arg1 externalImageComponent:(id)arg2 videoProcessingComponent:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsAPI-Protocol.h"

@class NSString, SCBloopsPersonsSource;

@interface SCBloopsAPIDummyImpl : NSObject <SCBloopsAPI>
{
    _Bool _allowPreparePreviewsResources;
    SCBloopsPersonsSource *_personsSource;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
@property(nonatomic) _Bool allowPreparePreviewsResources; // @synthesize allowPreparePreviewsResources=_allowPreparePreviewsResources;
- (id)apiVersion;
- (void)downloadAIResourcesIfNeeded;
- (_Bool)isBloopsEnabledAndPreviewsResourcesReady;
- (_Bool)isBloopsFeatureEnabled;
- (void)isSettingsUpdateRequired:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) SCBloopsPersonsSource *personsSource; // @synthesize personsSource=_personsSource;
- (void)removeListener:(id)arg1;
- (void)resetPersonsSource;
- (void)saveMainTarget;
- (_Bool)sdkInitCompleted;
- (_Bool)searchBloopsForQuery:(id)arg1;
- (id)targetFormatVersion;
- (id)targetsConverter;
- (_Bool)targetsInitialized;
- (void)updateBloopsConfig;
- (void)updateSettingsConfig:(id)arg1;
- (void)warmUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedActionMenuDataProvider-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCFeatureSettingsManager, SCGroupUnifiedProfileDataSource;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCGroupUnifiedProfileChatSettingsDataProvider : NSObject <SCUpdateListener, SCUnifiedActionMenuDataProvider>
{
    SCGroupUnifiedProfileDataSource *_dataSource;
    SCFeatureSettingsManager *_featureSettingsManager;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithDataSource:(id)arg1 featureSettingsManager:(id)arg2;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

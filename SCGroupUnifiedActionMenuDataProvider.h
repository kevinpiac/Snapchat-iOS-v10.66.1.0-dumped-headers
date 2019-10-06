//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedActionMenuDataProvider-Protocol.h"

@class NSString, SCFeatureSettingsManager, SCGroupUnifiedProfileDataSource;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCGroupUnifiedActionMenuDataProvider : NSObject <SCUnifiedActionMenuDataProvider>
{
    NSString *_groupId;
    NSString *_groupNameToDisplay;
    NSString *_sourcePageType;
    _Bool _hideProfileOption;
    SCFeatureSettingsManager *_featureSettingsManager;
    SCGroupUnifiedProfileDataSource *_dataSource;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithGroupManager:(id)arg1 groupId:(id)arg2 sourcePageType:(id)arg3 hideProfileOption:(_Bool)arg4 featureSettingsManager:(id)arg5 dataSource:(id)arg6;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

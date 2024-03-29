//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCUnifiedActionMenuDataProvider-Protocol.h"

@class NSString;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCUnifiedProfileMyStorySettingsActionMenuDataProvider : NSObject <SCSnapchattersDataRequestListener, SCUnifiedActionMenuDataProvider>
{
    long long _storyType;
    NSString *_storyIdentifier;
    unsigned long long _unifiedProfileType;
    long long _displayedMyStoriesSetting;
    _Bool _hasSnapProProfile;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithStoriesDataSourceManager:(id)arg1 snapchattersDataTracker:(id)arg2 storyType:(long long)arg3 storyIdentifier:(id)arg4 unifiedProfileType:(unsigned long long)arg5;
- (void)setStoryPrivacyAndReload:(long long)arg1;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


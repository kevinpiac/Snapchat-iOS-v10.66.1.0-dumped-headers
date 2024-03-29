//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedActionMenuDataProvider-Protocol.h"

@class NSString, SCUnifiedProfileCharmsMenuCharmInfo;
@protocol SCUnifiedActionMenuDataProviderDelegate;

@interface SCUnifiedProfileCharmsMenuDataProvider : NSObject <SCUnifiedActionMenuDataProvider>
{
    SCUnifiedProfileCharmsMenuCharmInfo *_charmInfo;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_hideCharm;
- (id)_learnMoreCharm;
@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCharmInfo:(id)arg1;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


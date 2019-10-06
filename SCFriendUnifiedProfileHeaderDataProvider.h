//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileHeaderDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCFriendUnifiedProfileDataSource;
@protocol SCUnifiedProfileHeaderDataProvidingDelegate;

@interface SCFriendUnifiedProfileHeaderDataProvider : NSObject <SCUpdateListener, SCTraceEnabled, SCUnifiedProfileHeaderDataProviding>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    id <SCUnifiedProfileHeaderDataProvidingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnifiedProfileHeaderDataProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)headerViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


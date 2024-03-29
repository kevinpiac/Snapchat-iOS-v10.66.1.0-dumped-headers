//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedSectionCollapseCoordinating-Protocol.h"

@class NSString;
@protocol SCDiscoverFeedDataFetching, SCDiscoverFeedSectionCollapseCoordinatingDelegate, SCPerforming;

@interface SCDiscoverFeedSubscriptionSectionCollapseCoordinator : NSObject <SCDiscoverFeedSectionCollapseCoordinating>
{
    id <SCDiscoverFeedDataFetching> _dataFetching;
    long long _collapseState;
    id <SCDiscoverFeedSectionCollapseCoordinatingDelegate> _delegate;
    NSString *_sectionType;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_setCollapseState:(long long)arg1;
- (void)collapseProcessWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) long long collapseState; // @synthesize collapseState=_collapseState;
@property(nonatomic) __weak id <SCDiscoverFeedSectionCollapseCoordinatingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithSectionType:(id)arg1 dataFetching:(id)arg2;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


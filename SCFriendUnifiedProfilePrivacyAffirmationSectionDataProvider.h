//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCFriendUnifiedProfileDataSource;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCFriendUnifiedProfilePrivacyAffirmationSectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSString *_privacyText;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_friendshipCreationTime;
- (void)addListener:(id)arg1;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

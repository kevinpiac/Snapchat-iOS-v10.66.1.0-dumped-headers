//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCCognacChatDrawerCollectionViewSectionActionHandler, SCCognacChatDrawerCollectionViewSectionDataProvider, SCPreferences;
@protocol SCEventListener;

@interface SCCognacChatDrawerCollectionViewSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCCognacChatDrawerCollectionViewSectionActionHandler *_actionHandler;
    SCCognacChatDrawerCollectionViewSectionDataProvider *_dataProvider;
    SCPreferences *_preferences;
    id <SCEventListener> _sectionEventListener;
}

- (void).cxx_destruct;
- (id)initWithActionHandler:(id)arg1 dataProvider:(id)arg2 preferences:(id)arg3 sectionEventListener:(id)arg4;
- (id)sectionForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"

@class NSDictionary, NSMutableSet, NSString, SCSearchEventLogger;
@protocol SCPerforming;

@interface SCAttachmentsLogger : NSObject <SCEventListener>
{
    id <SCPerforming> _performer;
    SCSearchEventLogger *_searchEventLogger;
    NSDictionary *_samplingRates;
    NSDictionary *_loggingDestination;
    NSMutableSet *_attachmentsClipboardResultsOnScreen;
    NSMutableSet *_attachmentsPreviouslyAttachedResultsOnScreen;
    NSMutableSet *_viewedSnapsWithAttachments;
}

- (void).cxx_destruct;
- (id)_getExtraDataForEvent:(id)arg1 identifier:(id)arg2 extraData:(id)arg3;
- (_Bool)_shouldLogSampleForEvent:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithSearchEventLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


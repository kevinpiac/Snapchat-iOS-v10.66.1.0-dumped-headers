//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoryExporterDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SCUserSession;
@protocol SCExportMyStoriesManagerDelegate;

@interface SCExportMyStoriesManager : NSObject <SCStoryExporterDelegate>
{
    SCUserSession *_userSession;
    NSMutableDictionary *_myStoryExportersDictionary;
    NSMutableDictionary *_storyExporterDictionary;
    NSMutableDictionary *_saveErrorDictionary;
    NSMutableDictionary *_saveGroupDictionary;
    NSMutableDictionary *_savingLoggerSessionDictionary;
    id <SCExportMyStoriesManagerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_clearSaveErrorForMyStories:(id)arg1;
- (void)_clearSaveGroupForMyStories:(id)arg1;
- (void)_clearSavingloggerSessionForMyStories:(id)arg1;
- (id)_createSaveGroupForMyStories:(id)arg1;
- (void)_exportEntireStory:(id)arg1;
- (id)_saveErrorForMyStories:(id)arg1;
- (id)_saveGroupForMyStories:(id)arg1;
- (void)_saveMyStoriesToGallery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setSaveError:(id)arg1 forMyStories:(id)arg2;
@property(nonatomic) __weak id <SCExportMyStoriesManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleSaveEntireStory:(id)arg1;
- (void)handleSaveEntireStory:(id)arg1 saveToCameraRoll:(_Bool)arg2 saveToMemories:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;
- (_Bool)isMyStoriesSaving:(id)arg1;
- (void)storyExporter:(id)arg1 didFinishExportingToURL:(id)arg2 withError:(id)arg3;
- (void)storyExporter:(id)arg1 didProceedToProgress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


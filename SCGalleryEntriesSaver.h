//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoryExporterDelegate-Protocol.h"

@class NSMapTable, NSString;

@interface SCGalleryEntriesSaver : NSObject <SCStoryExporterDelegate>
{
    NSMapTable *_storyExporterToCompletionMap;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_saveStoryToCameraRoll:(id)arg1 cloudFiles:(id)arg2 userSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveEntryToCameraRoll:(id)arg1 cloudFiles:(id)arg2 userSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)storyExporter:(id)arg1 didFinishExportingToURL:(id)arg2 withError:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

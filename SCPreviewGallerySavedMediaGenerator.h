//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer, SCUserSession;

@interface SCPreviewGallerySavedMediaGenerator : NSObject
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_failToGenerateFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_passSanityCheckForVideoData:(id)arg1;
- (void)generateGallerySavedMediaForVideo:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

@end


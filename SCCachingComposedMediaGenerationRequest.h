//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachingMediaRequest-Protocol.h"
#import "SCProgressReporting-Protocol.h"

@class NSString, SCSentinel;
@protocol SCProgressReceiving, SCProgressReporting><SCCanceling;

@interface SCCachingComposedMediaGenerationRequest : NSObject <SCCachingMediaRequest, SCProgressReporting>
{
    SCSentinel *_sentinel;
    id <SCProgressReceiving> _progressReceiver;
    id <SCProgressReporting><SCCanceling> _downloadRequest;
}

- (void).cxx_destruct;
- (void)cancel;
@property(retain, nonatomic) id <SCProgressReporting><SCCanceling> downloadRequest; // @synthesize downloadRequest=_downloadRequest;
- (id)init;
- (_Bool)isCancelled;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

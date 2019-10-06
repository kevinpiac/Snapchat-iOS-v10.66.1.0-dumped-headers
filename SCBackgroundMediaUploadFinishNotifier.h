//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServiceNotifier-Protocol.h"

@class NSMutableArray, NSString;
@protocol SCPerforming;

@interface SCBackgroundMediaUploadFinishNotifier : NSObject <SCServiceNotifier>
{
    double _waitTime;
    NSMutableArray *_observeContexts;
    id <SCPerforming> _performer;
    unsigned long long _countOfUploadedMedia;
    unsigned long long _countOfAllMedia;
}

- (void).cxx_destruct;
- (void)_backgroundUploadFinished;
- (id)initWithSnapIds:(id)arg1;
- (double)waitUntil:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


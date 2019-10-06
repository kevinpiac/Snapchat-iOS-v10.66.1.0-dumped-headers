//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCBlizzardLogging-Protocol.h"

@class NSString, SCLogger;

@interface SCComposerBlizzardLogger : NSObject <SCCBlizzardLogging>
{
    SCLogger *_logger;
}

- (void).cxx_destruct;
- (id)initWithLogger:(id)arg1;
- (void)logBlizzardEventWithEvent:(id)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

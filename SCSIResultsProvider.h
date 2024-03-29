//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSIResultsListenerAnnouncer, SCSnapTokenManager;
@protocol SCSIResultsBackend;

@interface SCSIResultsProvider : NSObject
{
    id <SCSIResultsBackend> _backend;
    SCSnapTokenManager *_snapTokenManager;
    SCSIResultsListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_logRequest:(id)arg1 image:(id)arg2;
- (id)_requestForImage:(id)arg1 contexts:(id)arg2 gtqServeRequest:(id)arg3 location:(id)arg4 touchPoint:(struct CGPoint)arg5 isFrontFacing:(_Bool)arg6 scanSource:(int)arg7;
- (void)addListener:(id)arg1;
- (id)initWithRequestBackend:(id)arg1 snapTokenManager:(id)arg2;
- (id)performAnalysisForImage:(id)arg1 sessionIDs:(id)arg2 contexts:(id)arg3 gtqServeRequest:(id)arg4 location:(id)arg5 touchPoint:(struct CGPoint)arg6 isFrontFacing:(_Bool)arg7 scanSource:(int)arg8;
- (void)removeListener:(id)arg1;

@end


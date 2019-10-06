//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGraphVisitor.h"

@class NSLock, NSMutableSet;
@protocol SCAsyncCommandVisitorDelegate;

@interface SCAsyncCommandVisitor : SCGraphVisitor
{
    _Bool _shouldDetectCycles;
    NSMutableSet *_visitedNodes;
    NSLock *_visitorLock;
    id <SCAsyncCommandVisitorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCAsyncCommandVisitorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initDetectingCycles:(_Bool)arg1;
- (void)visit:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


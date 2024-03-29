//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGraphTraverser.h"

@class NSLock, NSMapTable;
@protocol SCConcurrentGraphTraverserDelegate;

@interface SCConcurrentGraphTraverser : SCGraphTraverser
{
    NSLock *_accessLock;
    NSMapTable *_vertexDependencyCount;
    id <SCConcurrentGraphTraverserDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_isReadyToBeVisited:(id)arg1;
- (void)_traverseConnectedVertices:(id)arg1 visitor:(id)arg2;
@property(nonatomic) __weak id <SCConcurrentGraphTraverserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)traverseGraph:(id)arg1 visitor:(id)arg2;

@end


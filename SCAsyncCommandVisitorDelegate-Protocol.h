//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCAsyncCommandVisitor, SCGraphVertex;

@protocol SCAsyncCommandVisitorDelegate <NSObject>
- (void)visitor:(SCAsyncCommandVisitor *)arg1 didVisit:(SCGraphVertex *)arg2;
@end

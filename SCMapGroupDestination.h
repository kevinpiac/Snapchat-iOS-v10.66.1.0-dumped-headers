//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapDestination-Protocol.h"

@class NSString;
@protocol SCChatGroup;

@interface SCMapGroupDestination : NSObject <SCMapDestination>
{
    id <SCChatGroup> _group;
}

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
@property(retain, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


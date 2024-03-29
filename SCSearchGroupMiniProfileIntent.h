//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchIntent-Protocol.h"

@class NSString, SCSearchMiniProfileExtraLoggingData;
@protocol SCChatGroup;

@interface SCSearchGroupMiniProfileIntent : NSObject <SCSearchIntent>
{
    id <SCChatGroup> _group;
    NSString *_groupId;
    SCSearchMiniProfileExtraLoggingData *_loggingData;
    CDUnknownBlockType _callbackBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (id)initWithGroup:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 loggingData:(id)arg3;
- (id)initWithGroup:(id)arg1 loggingData:(id)arg2;
- (id)initWithGroupId:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 loggingData:(id)arg3;
@property(readonly, nonatomic) SCSearchMiniProfileExtraLoggingData *loggingData; // @synthesize loggingData=_loggingData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


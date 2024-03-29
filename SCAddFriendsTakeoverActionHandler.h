//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCAddSnapchatterActionHandler;
@protocol SCAddFriendsTakeoverActionHandlerDelegate;

@interface SCAddFriendsTakeoverActionHandler : NSObject <SCActionHandling>
{
    SCAddSnapchatterActionHandler *_addSnapchatterActionHandler;
    id <SCAddFriendsTakeoverActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCAddFriendsTakeoverActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSnapchattersDataMutator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


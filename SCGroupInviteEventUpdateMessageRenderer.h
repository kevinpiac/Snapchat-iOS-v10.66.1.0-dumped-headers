//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"

@class SCChatSDKActionContext, SCGIEventDetailsUpdatedChatMessagePayload;

@interface SCGroupInviteEventUpdateMessageRenderer : NSObject <SCChatMessageRenderer>
{
    SCGIEventDetailsUpdatedChatMessagePayload *_message;
    SCChatSDKActionContext *_actionContext;
}

- (void).cxx_destruct;
- (void)_showInvite;
@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (id)createContentView;
- (void)didEndDisplayingContentView:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (void)prepareContentViewForReuse:(id)arg1;
- (id)reuseIdentifier;
- (void)setupContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;
- (void)willDisplayContentView:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCModalContainerViewController.h"

#import "SCComposerViewOwner-Protocol.h"
#import "SCEventProfileMembersViewContext-Protocol.h"

@class NSArray, NSString, SCGroupInviteUIDependencies;

@interface SCGroupInviteMembersViewController : SCModalContainerViewController <SCComposerViewOwner, SCEventProfileMembersViewContext>
{
    NSArray *_participants;
    SCGroupInviteUIDependencies *_dependencies;
    NSString *contextBaseUrl;
}

- (void).cxx_destruct;
- (id)composerWillCreateViewForClass:(Class)arg1 nodeId:(id)arg2;
@property(copy, nonatomic) NSString *contextBaseUrl; // @synthesize contextBaseUrl;
- (void)dismiss;
- (id)initWithParticipants:(id)arg1 dependencies:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

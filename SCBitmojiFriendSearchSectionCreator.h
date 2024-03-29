//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCLazy, SCSendToDocObjectRecipientDataSource, SCUserSession, UIColor;
@protocol SCActionHandling;

@interface SCBitmojiFriendSearchSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCUserSession *_userSession;
    SCSendToDocObjectRecipientDataSource *_recipientDataSource;
    id <SCActionHandling> _actionHandler;
    long long _recipientViewStyle;
    long long _headerViewStyle;
    UIColor *_headerTextColor;
    SCLazy *_userInfoProvider;
}

- (void).cxx_destruct;
- (id)_allFriendsSection;
- (id)_bestFriendsSection;
- (id)_personalSection;
- (id)_recentsSection;
- (id)_searchSection;
- (id)initWithUserSession:(id)arg1 recipientDataSource:(id)arg2 userInfoProvider:(id)arg3 actionHandler:(id)arg4;
- (id)sectionForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


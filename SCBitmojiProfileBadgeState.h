//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedCapturerListener-Protocol.h"

@class NSOperationQueue, NSString, SCUserSession, User;

@interface SCBitmojiProfileBadgeState : NSObject <SCManagedCapturerListener>
{
    NSOperationQueue *_utilityQueue;
    unsigned long long _numIncomingFriendsSinceLastProfileView;
    double _mostRecentIncomingFriendTimestamp;
    _Bool _hasUnviewedIAPNotification;
    CDUnknownBlockType _updateProfileBadge;
    CDUnknownBlockType _dismissAddedMeTooltip;
    User *_user;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_markProfileShown;
- (void)_reloadBadgeStateWithCount:(unsigned long long)arg1;
- (void)attemptToDismissAddedMeTooltip;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType dismissAddedMeTooltip; // @synthesize dismissAddedMeTooltip=_dismissAddedMeTooltip;
- (id)initWithUser:(id)arg1 userSession:(id)arg2;
- (void)managedCapturer:(id)arg1 didBeginAudioRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didBeginVideoRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeFlashActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeNightModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeZoomFactor:(id)arg2;
- (void)managedCapturer:(id)arg1 willCapturePhoto:(id)arg2;
- (void)profileDidHide:(id)arg1;
- (void)profileDidShow:(id)arg1;
- (void)readIAPNotification:(id)arg1;
- (void)reloadBadgeState;
@property(copy, nonatomic) CDUnknownBlockType updateProfileBadge; // @synthesize updateProfileBadge=_updateProfileBadge;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)unreadIAPNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCOurStoryContentReplacement, SCReplyParameters, SCSelectRecipientsConfiguration, SCUserSession;
@protocol SCSendToDelegate, SCSendToNavigationDelegate, SCStartChatDelegate;

@interface SCSendToConfiguration : NSObject
{
    unsigned long long _unidirectionFriendsCount;
    unsigned long long _mutualFriendsCount;
    _Bool _isNewOrHighRiskUser;
    _Bool _allowAddFriendsInSearch;
    _Bool _allowShowLastSnap;
    _Bool _allowEmptyState;
    _Bool _allowSnapStars;
    _Bool _shouldShowLastSnapSection;
    SCSelectRecipientsConfiguration *_recipientsConfiguration;
    _Bool _isOpenedFromMemoriesTabInChatDrawer;
    _Bool _isMultiSnap;
    _Bool _isBatchCapture;
    _Bool _isSnappablesSnap;
    _Bool _isSponsoredSnap;
    _Bool _is3DSnap;
    _Bool _enableChatMediaSendAlert;
    _Bool _allAreLagunaSnapsWithin24h;
    _Bool _spectaclesSnapsOnly;
    _Bool _containsSharedGallerySnap;
    _Bool _hideAddFriendsButton;
    _Bool _showsAddDuplicatePromptForMyStory;
    _Bool _isSendToOpenedFromPreview;
    SCUserSession *_userSession;
    id <SCSendToDelegate> _sendingDelegate;
    id <SCSendToNavigationDelegate> _navigationDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    long long _snapSource;
    CDUnknownBlockType _customBackButtonBlock;
    NSString *_pageType;
    NSString *_lensChallengeName;
    NSArray *_snappableFriendsUserIds;
    NSString *_captureSessionId;
    SCOurStoryContentReplacement *_ourStoryContentReplacement;
    SCReplyParameters *_replyParameters;
    double _sendToLatencyMetricStartTime;
    long long _statusBarStyle;
    NSArray *_thisChatUserIds;
    NSArray *_thisChatGroupIds;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allAreLagunaSnapsWithin24h; // @synthesize allAreLagunaSnapsWithin24h=_allAreLagunaSnapsWithin24h;
- (_Bool)allowAddFriendsInSearch;
@property(copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
@property(nonatomic) _Bool containsSharedGallerySnap; // @synthesize containsSharedGallerySnap=_containsSharedGallerySnap;
@property(copy, nonatomic) CDUnknownBlockType customBackButtonBlock; // @synthesize customBackButtonBlock=_customBackButtonBlock;
@property(nonatomic) _Bool enableChatMediaSendAlert; // @synthesize enableChatMediaSendAlert=_enableChatMediaSendAlert;
@property(nonatomic) _Bool hideAddFriendsButton; // @synthesize hideAddFriendsButton=_hideAddFriendsButton;
- (id)initForGroupStoriesWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (id)initForNewGroupViewControllerWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (id)initWithUserSession:(id)arg1 sendingDelegate:(id)arg2 navigationDelegate:(id)arg3;
@property(nonatomic) _Bool is3DSnap; // @synthesize is3DSnap=_is3DSnap;
@property(nonatomic) _Bool isBatchCapture; // @synthesize isBatchCapture=_isBatchCapture;
@property(nonatomic) _Bool isMultiSnap; // @synthesize isMultiSnap=_isMultiSnap;
- (_Bool)isNewUserSendTo;
@property(nonatomic) _Bool isOpenedFromMemoriesTabInChatDrawer; // @synthesize isOpenedFromMemoriesTabInChatDrawer=_isOpenedFromMemoriesTabInChatDrawer;
@property(nonatomic) _Bool isSendToOpenedFromPreview; // @synthesize isSendToOpenedFromPreview=_isSendToOpenedFromPreview;
@property(nonatomic) _Bool isSnappablesSnap; // @synthesize isSnappablesSnap=_isSnappablesSnap;
@property(nonatomic) _Bool isSponsoredSnap; // @synthesize isSponsoredSnap=_isSponsoredSnap;
@property(copy, nonatomic) NSString *lensChallengeName; // @synthesize lensChallengeName=_lensChallengeName;
@property(nonatomic) __weak id <SCSendToNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(copy, nonatomic) SCOurStoryContentReplacement *ourStoryContentReplacement; // @synthesize ourStoryContentReplacement=_ourStoryContentReplacement;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) SCSelectRecipientsConfiguration *recipientsConfiguration; // @dynamic recipientsConfiguration;
@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(readonly, nonatomic) double sendToLatencyMetricStartTime; // @synthesize sendToLatencyMetricStartTime=_sendToLatencyMetricStartTime;
@property(nonatomic) __weak id <SCSendToDelegate> sendingDelegate; // @synthesize sendingDelegate=_sendingDelegate;
@property(nonatomic) _Bool showsAddDuplicatePromptForMyStory; // @synthesize showsAddDuplicatePromptForMyStory=_showsAddDuplicatePromptForMyStory;
@property(nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(copy, nonatomic) NSArray *snappableFriendsUserIds; // @synthesize snappableFriendsUserIds=_snappableFriendsUserIds;
@property(nonatomic) _Bool spectaclesSnapsOnly; // @synthesize spectaclesSnapsOnly=_spectaclesSnapsOnly;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(copy, nonatomic) NSArray *thisChatGroupIds; // @synthesize thisChatGroupIds=_thisChatGroupIds;
@property(copy, nonatomic) NSArray *thisChatUserIds; // @synthesize thisChatUserIds=_thisChatUserIds;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (_Bool)shouldDisplayAllFriendsAboveGroup;
- (_Bool)shouldDisplayAllFriendsSection;
- (_Bool)shouldDisplayBestFriendsSection;
- (_Bool)shouldDisplayChatGroupSection;
- (_Bool)shouldDisplayChatMediaSendAlertSection;
- (_Bool)shouldDisplayEmptyGroupsSection;
- (_Bool)shouldDisplayFriendAToZSections;
- (_Bool)shouldDisplayLastSnapSection;
- (_Bool)shouldDisplayNewGroupsSection;
- (_Bool)shouldDisplayQuickAddFriendsSection;
- (_Bool)shouldDisplayRecentsSection;
- (_Bool)shouldDisplayShareSnapSection;
- (_Bool)shouldDisplaySnapBackSection;
- (_Bool)shouldDisplaySnapStarsSection;
- (_Bool)shouldDisplayStorySection;
- (_Bool)shouldDisplayStreakTooltip;
- (_Bool)shouldDisplayThisChatSection;
- (_Bool)shouldDisplayV11AddFriendsSection;
- (_Bool)shouldDisplayV11UpdatedSearchSections;
- (_Bool)shouldEnablePostingToAppStories;
- (_Bool)shouldEnableV11UpdatedConfirmationBarBehavior;

@end


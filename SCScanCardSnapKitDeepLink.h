//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

#import "SCEventListener-Protocol.h"
#import "SCScanCardSnapKitDeepLinkProtocol-Protocol.h"

@class NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCCreatorSettingsDataTracker, SCDeepLinkURL, SCImpalaService, SCNetworkImage, SCNetworkImageView, SCSnapKitCreativeKitWebDataLoader, SCSnapKitProtoCreativeKitWebShareMetadata, SCSnapTokenManager, UIButton;
@protocol SCImageDownloading, SCScanCardSnapKitDeepLinkDelegate, SCWebBrowsingURLChecker;

@interface SCScanCardSnapKitDeepLink : SCScanCardTableViewCell <SCScanCardSnapKitDeepLinkProtocol, SCEventListener>
{
    NSString *_deepLinkURLString;
    NSString *_publisherName;
    NSString *_publisherBusinessId;
    NSString *_showId;
    SCDeepLinkURL *_parsedDeepLinkURL;
    SCSnapKitCreativeKitWebDataLoader *_creativeKitWebDataLoader;
    NSString *_attachmentURLString;
    SCSnapKitProtoCreativeKitWebShareMetadata *_attachmentShareMetadata;
    long long _attachmentSafeBrowsingURLType;
    SCSnapTokenManager *_snapTokenManager;
    id <SCWebBrowsingURLChecker> _safeBrowsingAPI;
    id <SCImageDownloading> _imageDownloader;
    SCImpalaService *_impalaService;
    SCNetworkImageView *_networkImageView;
    SCNetworkImage *_networkImage;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
    _Bool _isSubscribedToPublisher;
    UIButton *_subscriptionButton;
    _Bool _buttonIsProcessingNetworkRequest;
    id <SCScanCardSnapKitDeepLinkDelegate> _snapKitDeepLinkDelegate;
}

- (void).cxx_destruct;
- (void)_didPressAttachToSnapButton;
- (void)_didPressFinishButton;
- (void)_didPressSendToChatButton;
- (_Bool)_hasValidAttachmentData;
- (void)_loadDataForCreativeKitWebV1;
- (void)_setSubscriptionHelper:(_Bool)arg1;
- (void)_setSubscriptionHelperFailure;
- (void)_subscribeRequestByButton;
- (void)_subscribeRequestForPublisher:(long long)arg1 shouldSubscribe:(_Bool)arg2 successCompletion:(CDUnknownBlockType)arg3 failureCompletion:(CDUnknownBlockType)arg4;
- (void)_switchToPublisher;
- (id)articleViewWithTitle:(id)arg1 aboveView:(id)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)errorViewForCard;
- (id)imageViewWithIconString:(id)arg1;
- (id)initWithDeepLinkURLString:(id)arg1 snapTokenManager:(id)arg2 safeBrowsingAPI:(id)arg3 imageDownloader:(id)arg4 impalaService:(id)arg5;
- (void)loadData;
- (id)publisherViewWithText:(id)arg1 aboveView:(id)arg2;
@property(nonatomic) __weak id <SCScanCardSnapKitDeepLinkDelegate> snapKitDeepLinkDelegate; // @synthesize snapKitDeepLinkDelegate=_snapKitDeepLinkDelegate;
- (void)subscribeButtonToTheLeftOfView:(id)arg1;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (id)updateCancelButtonStyle;
- (id)updateSendURLToChatViewAboveView:(id)arg1;
- (id)updateSendURLToSnapViewAboveView:(id)arg1;
- (void)updateSubscribeButtonBasedOnSubscriptionStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

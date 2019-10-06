//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"
#import "SCStoryShareCardViewDelegate-Protocol.h"

@class NSString, SCChatSDKActionContext, SCMapPoiShareMetadata, SCMapSnapLocationCardView, SCMapStoryViewModel, UITapGestureRecognizer;

@interface SCChatMapStoryMessageRenderer : NSObject <SCStoryShareCardViewDelegate, SCChatMessageRenderer>
{
    SCChatSDKActionContext *_actionContext;
    NSString *_conversationId;
    NSString *_messageId;
    NSString *_poiID;
    long long _state;
    SCMapPoiShareMetadata *_poiMetadata;
    SCMapStoryViewModel *_storyViewModel;
    UITapGestureRecognizer *_tapToRetryRecognizer;
    SCMapSnapLocationCardView *_locationCardView;
}

- (void).cxx_destruct;
- (id)_createFailureLocationCardViewModel;
- (id)_createLoadingLocationCardViewModel;
- (id)_createLocationCardViewModel;
- (id)_createUnavailableLocationCardViewModel;
- (id)_createViewableLocationCardViewModel;
- (void)_loadMetadataIfReady;
- (void)_setState:(long long)arg1;
- (void)_updateUI;
@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)createContentView;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)didSelectPreserveMessageForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didTapDeepLinkWithUrl:(id)arg1 additionalInfo:(id)arg2;
- (id)initWithConversationId:(id)arg1 messageId:(id)arg2 poiID:(id)arg3 state:(long long)arg4;
@property(nonatomic) __weak SCMapSnapLocationCardView *locationCardView; // @synthesize locationCardView=_locationCardView;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (id)navigationDelegate;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(retain, nonatomic) SCMapPoiShareMetadata *poiMetadata; // @synthesize poiMetadata=_poiMetadata;
- (void)prepareContentViewForReuse:(id)arg1;
- (id)presentingViewController;
- (id)reuseIdentifier;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) SCMapStoryViewModel *storyViewModel; // @synthesize storyViewModel=_storyViewModel;
@property(retain, nonatomic) UITapGestureRecognizer *tapToRetryRecognizer; // @synthesize tapToRetryRecognizer=_tapToRetryRecognizer;
- (void)setupContentView:(id)arg1;
- (void)sharedStoryPresenterDidDisappear;
- (void)sharedStoryPresenterWillAppear;
- (struct CGSize)sizeThatFits:(double)arg1;
- (id)userSession;
- (void)willDisplayContentView:(id)arg1;

@end

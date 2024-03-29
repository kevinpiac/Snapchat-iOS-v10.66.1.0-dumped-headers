//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChatBaseSnapOperaDataSource.h"

#import "SCChatConversationMetadataUpdaterListener-Protocol.h"
#import "SCChatOperaViewModelGraphDelegate-Protocol.h"

@class NSDate, NSString, SCChatOperaViewModelGraph;
@protocol SCBaseMediaMessageOperaDataSourceDelegate, SCOperaGifProvider><SCOperaImageProvider;

@interface SCChatSnapsV3OperaDataSource : SCChatBaseSnapOperaDataSource <SCChatConversationMetadataUpdaterListener, SCChatOperaViewModelGraphDelegate>
{
    NSDate *_lastMessageTimestamp;
    SCChatOperaViewModelGraph *_operaViewModelGraph;
    _Bool _isGroupConversation;
    _Bool _shouldEnableZoom;
    _Bool _needToAnimationBaseThumbnailViewWhenClosing;
    NSString *_conversationId;
    id <SCOperaGifProvider><SCOperaImageProvider> _imageProvider;
    id <SCBaseMediaMessageOperaDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_addContent:(id)arg1 sentTimestamp:(id)arg2 message:(id)arg3;
- (void)_handleConversationUpdateForConversation:(id)arg1 metadata:(id)arg2;
- (id)_operaTopSnapContentForMessage:(id)arg1 messageMetadata:(id)arg2 previousContent:(id)arg3;
- (_Bool)containsMultipleMedias;
- (id)contentByPageId:(id)arg1;
- (void)conversationDidUpdate:(id)arg1 metadata:(id)arg2;
- (id)conversationId;
@property(nonatomic) __weak id <SCBaseMediaMessageOperaDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)imageProvider;
- (id)initWithConversationId:(id)arg1 isGroupConversation:(_Bool)arg2 performer:(id)arg3 userSession:(id)arg4;
- (long long)initialMediaType;
- (_Bool)isContentRemoved:(id)arg1;
- (_Bool)isGroupConversation;
- (id)messageIdForPage:(id)arg1;
- (long long)messageType;
- (_Bool)needToAnimationBaseThumbnailViewWhenClosing;
- (long long)numberOfSnapsFromPageId:(id)arg1;
- (void)operaDataSourceReadyForPlayback;
- (void)prepareForPlayback;
- (void)prepareMediaForPresentation:(id)arg1;
- (void)removeContentByPageId:(id)arg1;
- (id)rootViewModel;
- (void)setRootIndex:(unsigned long long)arg1;
- (_Bool)shouldEnableZoom;
- (void)updateSaveButton:(id)arg1 message:(id)arg2;
- (id)viewModelForPageId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


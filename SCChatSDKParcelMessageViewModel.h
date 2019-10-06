//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

#import "SCMergeableViewModelProtocol-Protocol.h"
#import "SCStackableViewModelProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface SCChatSDKParcelMessageViewModel : SCSavableItemChatViewModel <SCStackableViewModelProtocol, SCMergeableViewModelProtocol>
{
    double _maximumWidth;
    double _totalPluginsWidth;
    NSMutableArray *_messages;
    NSMutableArray *_renderers;
    NSMutableArray *_viewModelProps;
    NSString *_messageType;
}

- (void).cxx_destruct;
- (Class)_messageHandlerClassForMessageType:(id)arg1;
- (void)addMessage:(id)arg1 viewModelProps:(id)arg2;
- (double)bodyContentWidth;
- (_Bool)canMergeNewMessage:(id)arg1;
- (_Bool)canStackNewMessage:(id)arg1;
- (_Bool)containsMessage:(id)arg1;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isMessageAtIndex:(unsigned long long)arg1 savedByUser:(id)arg2;
- (_Bool)isMessageAtIndexSaved:(unsigned long long)arg1;
- (_Bool)isSaved;
- (_Bool)isStackable;
- (_Bool)isStatusMessageViewModel;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
- (id)message;
- (id)messageAtIndex:(unsigned long long)arg1;
- (Class)messageHandlerClass;
- (id)messageIdAtIndex:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (unsigned long long)numberOfMessages;
- (double)payloadHeight;
- (id)rendererAtIndex:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *renderers; // @synthesize renderers=_renderers;
- (id)reusableCellIdentifier;
- (id)savedByUsersAtIndex:(unsigned long long)arg1 group:(id)arg2;
@property(nonatomic) double totalPluginsWidth; // @synthesize totalPluginsWidth=_totalPluginsWidth;
@property(retain, nonatomic) NSMutableArray *viewModelProps; // @synthesize viewModelProps=_viewModelProps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChatBaseMessageHandler.h"

@interface SCEraseRulesStatusMessageHandler : SCChatBaseMessageHandler
{
}

+ (id)createRendererWithMessage:(id)arg1 userIdentifier:(id)arg2 viewModelProps:(id)arg3;
+ (id)deserializeDurationFromData:(id)arg1;
+ (_Bool)isErasable;
+ (_Bool)isSavable;
+ (_Bool)isStatusMessage;
+ (id)processMessagePostReceiveHook:(id)arg1 mutateConversation:(id)arg2;
+ (Class)rendererClass;
+ (id)serializeDurationToData:(id)arg1;
+ (_Bool)shouldEnableDisplay;
+ (_Bool)shouldShowActionMenu;
+ (id)type;

@end


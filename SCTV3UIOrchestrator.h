//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCTChatPresenceAnimationsProvider, SCTV3CallPromptsAnimationsProvider, SCTV3FullscreenAnimationsProvider, SCTV3StateOfTheWorldProvider;

@interface SCTV3UIOrchestrator : NSObject
{
    id <SCTV3StateOfTheWorldProvider> _stateProvider;
    id <SCTChatPresenceAnimationsProvider> _presenceBarAnimationsProvider;
    id <SCTV3CallPromptsAnimationsProvider> _callPromptsAnimationsProvider;
    id <SCTV3FullscreenAnimationsProvider> _fullscreenAnimationsProvider;
}

- (void).cxx_destruct;
- (id)initWithStateProvider:(id)arg1;
- (void)orchestrateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCallPromptsAnimationsProvider:(id)arg1;
- (void)setFullscreenAnimationsProvider:(id)arg1;
- (void)setPresenceBarAnimationsProvider:(id)arg1;

@end

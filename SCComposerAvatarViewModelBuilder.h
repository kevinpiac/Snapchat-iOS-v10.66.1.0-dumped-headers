//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCComposerAvatarViewModelBuilder : NSObject
{
    NSString *_attributionFeature;
    NSArray *_networkingContexts;
}

- (void).cxx_destruct;
- (id)_bitmojiAvatarViewModelsFromGroupParticipants:(id)arg1;
- (id)_bitmojiAvatarViewModelsFromGroupParticipants:(id)arg1 colorOverride:(id)arg2;
- (id)initWithAttributionFeature:(id)arg1 networkingContexts:(id)arg2;
- (id)viewModelForGroupParticipants:(id)arg1 storyInfo:(id)arg2;
- (id)viewModelForUserInfo:(id)arg1 storyInfo:(id)arg2 backgroundColor:(id)arg3;

@end


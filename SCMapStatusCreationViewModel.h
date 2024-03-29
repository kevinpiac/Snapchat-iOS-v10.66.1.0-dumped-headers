//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray, NSNumber, NSString;

@interface SCMapStatusCreationViewModel : SCComposerMarshallableObject
{
    _Bool _isLoadingOptions;
    NSArray *_currentStatuses;
    NSArray *_statusOptions;
    NSString *_bitmojiAvatarId;
    NSNumber *_isGhostMode;
    NSNumber *_shouldShowOnboarding;
    NSNumber *_isPendingOnboardingFinish;
    NSNumber *_isPassportEnabled;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSArray *currentStatuses; // @synthesize currentStatuses=_currentStatuses;
- (id)initWithCurrentStatuses:(id)arg1 statusOptions:(id)arg2 isLoadingOptions:(_Bool)arg3 bitmojiAvatarId:(id)arg4 isGhostMode:(id)arg5 shouldShowOnboarding:(id)arg6 isPendingOnboardingFinish:(id)arg7 isPassportEnabled:(id)arg8;
@property(retain, nonatomic) NSNumber *isGhostMode; // @synthesize isGhostMode=_isGhostMode;
@property(nonatomic) _Bool isLoadingOptions; // @synthesize isLoadingOptions=_isLoadingOptions;
@property(retain, nonatomic) NSNumber *isPassportEnabled; // @synthesize isPassportEnabled=_isPassportEnabled;
@property(retain, nonatomic) NSNumber *isPendingOnboardingFinish; // @synthesize isPendingOnboardingFinish=_isPendingOnboardingFinish;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(retain, nonatomic) NSNumber *shouldShowOnboarding; // @synthesize shouldShowOnboarding=_shouldShowOnboarding;
@property(copy, nonatomic) NSArray *statusOptions; // @synthesize statusOptions=_statusOptions;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SOJUUnlockablesUnlockableContextBuilder : NSObject
{
    NSArray *_triggerContexts;
    NSArray *_friendContexts;
    NSArray *_cameraContexts;
    NSArray *_mediaTypeContexts;
    NSArray *_actionmojiContexts;
    NSArray *_visualContexts;
    NSArray *_lensApplicableContexts;
}

+ (id)withJUUnlockablesUnlockableContext:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setActionmojiContexts:(id)arg1;
- (id)setCameraContexts:(id)arg1;
- (id)setFriendContexts:(id)arg1;
- (id)setLensApplicableContexts:(id)arg1;
- (id)setMediaTypeContexts:(id)arg1;
- (id)setTriggerContexts:(id)arg1;
- (id)setVisualContexts:(id)arg1;

@end

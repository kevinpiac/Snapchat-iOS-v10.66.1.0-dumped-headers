//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCStackedBaseNoteCollectionViewModel;

@interface SCChatNoteDownloadItem : NSObject
{
    NSString *_mediaId;
    long long _mediaState;
    NSString *_animationMediaId;
    SCStackedBaseNoteCollectionViewModel *_viewModel;
    NSArray *_coverAnimationImages;
    double _retryDelayTime;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *animationMediaId; // @synthesize animationMediaId=_animationMediaId;
@property(retain, nonatomic) NSArray *coverAnimationImages; // @synthesize coverAnimationImages=_coverAnimationImages;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
- (id)initWithViewModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) long long mediaState; // @synthesize mediaState=_mediaState;
@property(nonatomic) double retryDelayTime; // @synthesize retryDelayTime=_retryDelayTime;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) SCStackedBaseNoteCollectionViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

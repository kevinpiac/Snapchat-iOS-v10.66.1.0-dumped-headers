//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextInputMode;
@protocol SCChatInputBarStateManagerDatasource, SCChatInputBarStateManagerDelegate;

@interface SCChatInputBarStateManager : NSObject
{
    double _lastComputedFinalTextLength;
    _Bool _isCurrentInputModeEmoji;
    unsigned long long _state;
    double _transitionToExpandedWidth;
    double _transitionToNormalWidth;
    id <SCChatInputBarStateManagerDelegate> _delegate;
    id <SCChatInputBarStateManagerDatasource> _datasource;
    UITextInputMode *_cachedInputMode;
}

- (void).cxx_destruct;
- (void)_currentInputModeDidChange:(id)arg1;
- (void)_registerNotifications;
- (unsigned long long)_stateForReplacementText:(id)arg1 range:(struct _NSRange)arg2;
@property(retain, nonatomic) UITextInputMode *cachedInputMode; // @synthesize cachedInputMode=_cachedInputMode;
@property(nonatomic) __weak id <SCChatInputBarStateManagerDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak id <SCChatInputBarStateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(nonatomic) _Bool isCurrentInputModeEmoji; // @synthesize isCurrentInputModeEmoji=_isCurrentInputModeEmoji;
- (void)resetInputMode;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double transitionToExpandedWidth; // @synthesize transitionToExpandedWidth=_transitionToExpandedWidth;
@property(nonatomic) double transitionToNormalWidth; // @synthesize transitionToNormalWidth=_transitionToNormalWidth;
- (void)updateWithReplacementText:(id)arg1 range:(struct _NSRange)arg2;

@end


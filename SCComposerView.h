//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCComposerViewComponent-Protocol.h"

@class NSString;
@protocol SCComposerViewOwner;

@interface SCComposerView : UIView <SCComposerViewComponent>
{
    _Bool _raisedWarning;
    _Bool _ownsContext;
    id <SCComposerViewOwner> _owner;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bundleName;
- (_Bool)canUseMeasurePlaceholderView;
@property(readonly, nonatomic) NSString *componentPath;
- (void)dealloc;
- (void)didMoveToComposerContext:(id)arg1 viewNode:(id)arg2 ownsContext:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithOwner:(id)arg1 allowSelfInflate:(_Bool)arg2;
- (id)initWithOwner:(id)arg1 viewModel:(id)arg2 allowSelfInflate:(_Bool)arg3;
- (id)initWithOwner:(id)arg1 viewModel:(id)arg2 componentContext:(id)arg3 allowSelfInflate:(_Bool)arg4;
- (id)initWithViewModelUntyped:(id)arg1;
- (id)initWithViewModelUntyped:(id)arg1 componentContextUntyped:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) __weak id <SCComposerViewOwner> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) _Bool ownsContext; // @synthesize ownsContext=_ownsContext;
- (void)safeAreaInsetsDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *viewName;
- (void)waitUntilInitialRenderWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)willEnqueueIntoComposerPool;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


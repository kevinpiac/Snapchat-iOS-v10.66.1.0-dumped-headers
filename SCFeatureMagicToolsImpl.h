//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureMagicTools-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSString, SCPreviewConfiguration, SCPreviewToolBar, SCPreviewToolBarButtonItem, SCPreviewView, SCUserSession;
@protocol SCFeatureMagicToolsDelegate;

@interface SCFeatureMagicToolsImpl : SCFeature <SCFeatureMagicTools, SCPreviewGestureResponder>
{
    SCPreviewConfiguration *_configuration;
    SCUserSession *_userSession;
    SCPreviewToolBar *_toolbar;
    SCPreviewView *_previewView;
    SCPreviewToolBarButtonItem *_scissorItem;
    id <SCFeatureMagicToolsDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_shouldShowCutButton;
- (void)_tapAction:(id)arg1;
- (void)activate;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak id <SCFeatureMagicToolsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

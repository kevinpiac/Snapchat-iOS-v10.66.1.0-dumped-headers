//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, FBKVOController, NSString, SCBorderedIconView, SCExtendedHitButton, SCUserSession, UIButton, UIView, UIViewController;
@protocol SCPublicContentMiniProfileControllerDelegate, SCPublicContentMiniProfileDataEntry, SCReplyDelegate;

@interface SCPublicContentMiniProfileController : NSObject
{
    SCBorderedIconView *_borderedIconView;
    id <SCPublicContentMiniProfileControllerDelegate> _delegate;
    id <SCReplyDelegate> _replyDelegate;
    UIViewController *_parentViewController;
    FBKVOController *_kvoController;
    SCUserSession *_userSession;
    NSString *_title;
    NSString *_description;
    NSString *_deeplinkURL;
    UIButton *_shareButton;
    SCExtendedHitButton *_exportButton;
    UIView *_buttonsContainer;
    _Bool _hideButtonsContainer;
    _Bool _isShareVCActive;
    long long _viewLocation;
    long long _profileType;
    _Bool _isPresented;
    _Bool _nextActionTriggered;
    _Bool _disallowActionIcons;
    id <SCPublicContentMiniProfileDataEntry> _dataEntry;
    unsigned long long _openContext;
    UIView *_baseView;
    NSString *_tileCoverId;
    CALayer *_cellLayer;
    unsigned long long _contentIndex;
    struct CGPoint _cellOrigin;
}

- (void).cxx_destruct;
- (id)_actionButtons;
- (id)_alertViewContentItems;
- (void)_didTapShareButtonAction;
- (void)_initSubViews;
- (void)_logPublicContentMiniProfileViewWithViewLocation:(long long)arg1 profileType:(long long)arg2;
- (void)_reloadData;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(readonly, nonatomic) CALayer *cellLayer; // @synthesize cellLayer=_cellLayer;
@property(readonly, nonatomic) struct CGPoint cellOrigin; // @synthesize cellOrigin=_cellOrigin;
@property(readonly, nonatomic) unsigned long long contentIndex; // @synthesize contentIndex=_contentIndex;
@property(retain, nonatomic) id <SCPublicContentMiniProfileDataEntry> dataEntry; // @synthesize dataEntry=_dataEntry;
- (void)dealloc;
@property(nonatomic) __weak id <SCPublicContentMiniProfileControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEnterBackground;
@property(nonatomic) _Bool disallowActionIcons; // @synthesize disallowActionIcons=_disallowActionIcons;
- (id)initWithDelegate:(id)arg1 parentViewController:(id)arg2 replyDelegate:(id)arg3 userSession:(id)arg4;
@property(readonly, nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(readonly, nonatomic) _Bool nextActionTriggered; // @synthesize nextActionTriggered=_nextActionTriggered;
@property(nonatomic) unsigned long long openContext; // @synthesize openContext=_openContext;
- (void)presentMiniProfileWithViewLocation:(long long)arg1 profileType:(long long)arg2;
@property(readonly, copy, nonatomic) NSString *tileCoverId; // @synthesize tileCoverId=_tileCoverId;
@property(readonly, nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;

@end

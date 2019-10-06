//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCBitmojiAvatarBuilderRouter, SCBitmojiService, SCLoadingIndicatorView, UILabel;
@protocol SCBitmojiAvatarBuilderRouterDelegate, SCDownloadableContentManaging;

@interface SCStickerPickerBitmojiEmptyPage : UIView <UIGestureRecognizerDelegate>
{
    unsigned long long _sourceType;
    SCBitmojiService *_bitmojiService;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    id <SCBitmojiAvatarBuilderRouterDelegate> _bitmojiAvatarBuilderRouterDelegate;
    SCBitmojiAvatarBuilderRouter *_bitmojiAvatarBuilderRouter;
    UIView *_textContainer;
    UILabel *_linkButton;
    UILabel *_subtitleLabel;
    _Bool _enabled;
    SCLoadingIndicatorView *_loadingIndicator;
    _Bool _displayed;
}

+ (unsigned long long)_getBitmojiLinkPage:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_bitmojiLinkSucceeded;
- (void)_handleServerError;
- (void)_linkButtonTapped:(id)arg1;
- (id)bitmojiIntroLabel;
- (id)buttonContainer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)imageContainer;
- (void)initTeaserWithContainerView:(id)arg1 sourceType:(unsigned long long)arg2 isSourceTypePreview:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 sourceType:(unsigned long long)arg2 bitmojiService:(id)arg3 experimentManager:(id)arg4 bitmojiAvatarBuilderRouterDelegate:(id)arg5 downloadableContentManager:(id)arg6 bitmojiAvatarDataProvider:(id)arg7;
@property(nonatomic, getter=isDisplayed) _Bool displayed; // @synthesize displayed=_displayed;
- (id)linkButton;
- (id)subtitleLabelWhenIsSourceTypePreview:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


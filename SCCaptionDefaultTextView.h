//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaption-Protocol.h"
#import "SCPreviewAlignableView-Protocol.h"

@class NSAttributedString, NSMutableDictionary, NSString, SCCaptionControlledView, SCDynamicCaptionStyle, SCPreviewCaptionTextView, UIColor, UIView;
@protocol SCCaptionDelegate;

@interface SCCaptionDefaultTextView : NSObject <SCCaption, SCPreviewAlignableView>
{
    NSAttributedString *_attributedTextInBigText;
    _Bool _isLagunaMedia;
    _Bool _shouldEnableUserTagging;
    double _captionFontSize;
    double _circleRadius;
    _Bool _isAnimating;
    SCDynamicCaptionStyle *_captionStyle;
    UIColor *_pickedColor;
    _Bool _colorChanged;
    long long _userTaggingStartIndex;
    long long _source;
    long long _alignment;
    long long _captionExitSource;
    NSMutableDictionary *_taggedUsers;
    UIView *_captionCarouselContainerView;
    _Bool _editing;
    long long uniqueId;
    id <SCCaptionDelegate> _delegate;
    SCCaptionControlledView *_containerView;
    double _lastVertical;
    SCPreviewCaptionTextView *_textView;
    double _keyboardHeight;
    struct UIEdgeInsets _edgeMargins;
    struct CGRect _superviewBounds;
    struct CGRect _superviewContentBounds;
}

- (void).cxx_destruct;
- (void)_adjustAnimationsSpeedForView:(id)arg1 withSpeed:(double)arg2;
- (void)_adjustKeyboardAnimationSpeed:(CDUnknownBlockType)arg1;
- (struct CGRect)_captionCarouselContainerViewFrame;
- (struct CGRect)_containerViewFrameForAnimation;
- (void)_resetLayout;
- (void)_setTextTransformWithLastTransform:(long long)arg1;
- (struct CGRect)_textViewFrameForAnimation;
- (void)addObservers;
- (void)addTaggedUser:(id)arg1;
- (void)addTaggedUsers:(id)arg1;
- (double)adjustedYOffsetForContentBounds:(double)arg1 textViewHeight:(double)arg2;
- (struct CGRect)alignableContentRect;
- (id)alignableTouchControlView;
- (long long)alignment;
- (id)attributedText;
- (long long)captionExitSource;
- (_Bool)captionPresent;
- (id)captionStyle;
- (void)colorChanged:(id)arg1;
- (void)configureTextViewBasedOnEditMode;
@property(retain, nonatomic) SCCaptionControlledView *containerView; // @synthesize containerView=_containerView;
- (struct CGRect)containerViewFrame;
- (long long)contentMargin;
- (long long)contentWidth;
- (void)dealloc;
@property(nonatomic) __weak id <SCCaptionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)deletableView;
- (void)deleteEditingTaggingUser;
- (void)didStartEditingAnimated:(_Bool)arg1;
- (void)didStopEditingAnimated:(_Bool)arg1;
@property(nonatomic) struct UIEdgeInsets edgeMargins; // @synthesize edgeMargins=_edgeMargins;
- (id)editingTextView;
- (id)initWithState:(id)arg1 delegate:(id)arg2 isLagunaMedia:(_Bool)arg3 shouldEnableUserTagging:(_Bool)arg4 shouldEnableDynamicCaption:(_Bool)arg5 initialTransform:(struct CGAffineTransform)arg6 originalContentBounds:(struct CGRect)arg7 captionCarouselContainerView:(id)arg8 superviewBounds:(struct CGRect)arg9 superviewContentBounds:(struct CGRect)arg10;
- (void)initializeViewsWithState:(id)arg1;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (_Bool)isFullscreen;
- (_Bool)isHidden;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) double lastVertical; // @synthesize lastVertical=_lastVertical;
- (long long)maxTextWidth;
- (void)pan:(id)arg1;
- (id)pickedColor;
- (void)pinch:(id)arg1;
- (void)prepareToStartEditing;
- (void)prepareToStopEditing;
- (void)removeObservers;
- (void)resizeForEditing;
- (void)resizeForViewing;
- (void)rotation:(id)arg1;
- (struct CGRect)screenshotFrame;
- (id)screenshotImageView;
- (id)searchableNameForFriendFiltering;
- (void)setAlignment;
- (void)setAlignment:(long long)arg1;
- (void)setCaptionExitSource:(long long)arg1;
- (void)setCaptionStyle:(id)arg1;
- (void)setHidden:(_Bool)arg1;
@property(nonatomic) struct CGRect superviewBounds; // @synthesize superviewBounds=_superviewBounds;
@property(nonatomic) struct CGRect superviewContentBounds; // @synthesize superviewContentBounds=_superviewContentBounds;
- (void)setText:(id)arg1;
- (void)setTextFromTagging:(id)arg1;
@property(retain, nonatomic) SCPreviewCaptionTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (id)shareLoggingParameters;
- (_Bool)shouldProcessGesture:(id)arg1;
- (void)startEditingAnimated:(_Bool)arg1;
- (id)state;
- (void)stopEditingAnimated:(_Bool)arg1;
- (void)tap:(id)arg1;
- (void)tearDownAndRemoveFromSuperview;
- (id)text;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (struct CGRect)textViewFrame;
- (void)updateAnchorState:(id)arg1;
- (id)usernamesForTagging;
- (id)view;
- (void)viewDidLayoutSubviewsWithSuperviewBounds:(struct CGRect)arg1 superviewContentBounds:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


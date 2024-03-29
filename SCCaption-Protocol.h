//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCTouchControllable-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class Friend, NSArray, NSAttributedString, NSDictionary, NSString, SCCaptionControlledView, SCCaptionState, SCDynamicCaptionStyle, UIColor, UIGestureRecognizer, UIImage, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITextView, UIView;
@protocol SCCaptionDelegate;

@protocol SCCaption <SCTouchControllable, UITextViewDelegate>
- (void)addTaggedUser:(Friend *)arg1;
- (void)addTaggedUsers:(NSArray *)arg1;
- (long long)alignment;
- (long long)captionExitSource;
- (SCDynamicCaptionStyle *)captionStyle;
- (void)deleteEditingTaggingUser;
- (UITextView *)editingTextView;
- (id)initWithState:(SCCaptionState *)arg1 delegate:(id <SCCaptionDelegate>)arg2 isLagunaMedia:(_Bool)arg3 shouldEnableUserTagging:(_Bool)arg4 shouldEnableDynamicCaption:(_Bool)arg5 initialTransform:(struct CGAffineTransform)arg6 originalContentBounds:(struct CGRect)arg7 captionCarouselContainerView:(UIView *)arg8 superviewBounds:(struct CGRect)arg9 superviewContentBounds:(struct CGRect)arg10;
- (_Bool)isEditing;
- (_Bool)isFullscreen;
- (_Bool)isHidden;
- (double)keyboardHeight;
- (UIColor *)pickedColor;
- (struct CGRect)screenshotFrame;
- (UIImage *)screenshotImageView;
- (NSString *)searchableNameForFriendFiltering;
- (void)setCaptionExitSource:(long long)arg1;
- (void)setCaptionStyle:(SCDynamicCaptionStyle *)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextFromTagging:(NSString *)arg1;
@property(nonatomic) long long uniqueId;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (NSDictionary *)shareLoggingParameters;
- (void)startEditingAnimated:(_Bool)arg1;
- (SCCaptionState *)state;
- (void)stopEditingAnimated:(_Bool)arg1;
- (void)tap:(UIGestureRecognizer *)arg1;
- (void)tearDownAndRemoveFromSuperview;
- (NSString *)text;
- (_Bool)textFrameContainsGesture:(UIGestureRecognizer *)arg1;
- (NSArray *)usernamesForTagging;
- (SCCaptionControlledView *)view;
- (void)viewDidLayoutSubviewsWithSuperviewBounds:(struct CGRect)arg1 superviewContentBounds:(struct CGRect)arg2;

@optional
- (NSAttributedString *)attributedText;
- (void)colorChanged:(UIColor *)arg1;
- (void)pinch:(UIPinchGestureRecognizer *)arg1;
- (void)rotation:(UIRotationGestureRecognizer *)arg1;
- (void)setContainerViewTransform:(struct CGAffineTransform)arg1 pauseTransform:(_Bool)arg2;
@end


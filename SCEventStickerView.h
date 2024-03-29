//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventStickerMultilineInputFieldDelegate-Protocol.h"
#import "SCEventTimeInputViewDelegate-Protocol.h"
#import "SCGroupInviteAutocompleteDataSource-Protocol.h"
#import "SCGroupInviteAutocompleteDelegate-Protocol.h"
#import "SCGroupInviteFormFieldDelegate-Protocol.h"
#import "SCGroupInviteView-Protocol.h"

@class CALayer, NSArray, NSMutableArray, NSString, SCEventStickerMultilineInputField, SCGroupInvite, SCGroupInviteAutocompleteAccessoryView, SCGroupInviteFormField, UIButton, UILabel;
@protocol SCGroupInviteVenueSearchProvider, SCGroupInviteViewDelegate;

@interface SCEventStickerView : UIView <SCGroupInviteFormFieldDelegate, SCEventStickerMultilineInputFieldDelegate, SCEventTimeInputViewDelegate, SCGroupInviteAutocompleteDelegate, SCGroupInviteAutocompleteDataSource, SCGroupInviteView>
{
    SCGroupInvite *_model;
    _Bool _editable;
    UIView *_speechBubbleArrow;
    UIView *_container;
    UIView *_topSectionBackdrop;
    UILabel *_inviteLabel;
    SCEventStickerMultilineInputField *_titleField;
    SCEventStickerMultilineInputField *_descriptionField;
    SCGroupInviteFormField *_locationField;
    SCGroupInviteFormField *_timeField;
    UIButton *_footerButton;
    NSMutableArray *_separatorLayers;
    CALayer *_outlineLayer;
    SCGroupInviteAutocompleteAccessoryView *_locationAutocompletionAccessory;
    _Bool _collapsedToShowTitleOnly;
    id <SCGroupInviteViewDelegate> _groupStickerEditingDelegate;
    id <SCGroupInviteVenueSearchProvider> _venueSearchProvider;
    NSString *_footerButtonText;
    CDUnknownBlockType _footerButtonAction;
    long long _style;
    NSString *_eventTitleFieldPlaceholder;
    NSArray *_verticallyStackedViews;
}

+ (double)heightForEventInChatAtWidth:(double)arg1 invite:(id)arg2;
+ (double)preferredWidth;
- (void).cxx_destruct;
- (void)_getTitle:(id *)arg1 andSubtitle:(id *)arg2 fromVenueModel:(id)arg3;
- (double)_heightForVerticallyStackedViewView:(id)arg1 width:(double)arg2;
- (void)_modifyGroupSticker:(CDUnknownBlockType)arg1;
- (void)_tappedFooterButton;
- (void)_updateTimeString;
- (void)_updateUI;
- (_Bool)_viewNeedsBottomSeparatorWhenVerticallyStacked:(id)arg1;
@property(nonatomic) _Bool collapsedToShowTitleOnly; // @synthesize collapsedToShowTitleOnly=_collapsedToShowTitleOnly;
- (id)customInputViewForGroupStickerFormField:(id)arg1;
- (void)eventStickerMultilineInputFieldDidEditText:(id)arg1;
- (void)eventTimeInputView:(id)arg1 endTimeDidChange:(id)arg2;
- (void)eventTimeInputView:(id)arg1 startTimeDidChange:(id)arg2;
- (void)eventTimeInputViewWantsToClearTimeRangeAndFinishEditing:(id)arg1;
@property(copy, nonatomic) NSString *eventTitleFieldPlaceholder; // @synthesize eventTitleFieldPlaceholder=_eventTitleFieldPlaceholder;
- (void)fetchCompletionsForQueryString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)focusDefaultTextField;
- (void)focusLocationField;
- (void)focusTimeField;
@property(copy, nonatomic) CDUnknownBlockType footerButtonAction; // @synthesize footerButtonAction=_footerButtonAction;
@property(copy, nonatomic) NSString *footerButtonText; // @synthesize footerButtonText=_footerButtonText;
- (void)groupInviteAutocompleteAccessoryView:(id)arg1 didTapCompletionObject:(id)arg2;
@property(nonatomic) __weak id <SCGroupInviteViewDelegate> groupStickerEditingDelegate; // @synthesize groupStickerEditingDelegate=_groupStickerEditingDelegate;
- (void)groupStickerFormField:(id)arg1 textDidChange:(id)arg2;
- (_Bool)groupStickerFormFieldShouldStartEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)inputAccessoryViewForGroupStickerFormField:(id)arg1;
- (void)layoutSubviews;
- (double)preferredWidth;
- (void)resignFocus;
- (void)setGroupStickerModel:(id)arg1 editable:(_Bool)arg2;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) id <SCGroupInviteVenueSearchProvider> venueSearchProvider; // @synthesize venueSearchProvider=_venueSearchProvider;
@property(copy, nonatomic) NSArray *verticallyStackedViews; // @synthesize verticallyStackedViews=_verticallyStackedViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)stickerModel;
- (id)subtitleForCompletionObject:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)titleForCompletionObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


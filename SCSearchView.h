//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCChatSearchTextFieldDelegate-Protocol.h"
#import "SCOverscrolling-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCBarButton, SCChatSearchTextField, SCGrowingButton, SCSearchClearButton, SCShapeView, UIFont, UIImage, UIImageView, UILabel;
@protocol SCSearchViewDelegate;

@interface SCSearchView : UIView <UITextFieldDelegate, SCTraceEnabled, SCChatSearchTextFieldDelegate, SCOverscrolling>
{
    SCBarButton *_searchButton;
    SCBarButton *_searchButtonStroked;
    SCShapeView *_dividerView;
    _Bool _editable;
    _Bool _showCloseButtonWhenEmpty;
    _Bool _shouldShowBackButton;
    _Bool _disableTextFieldFrameAutoUpdate;
    id <SCSearchViewDelegate> _delegate;
    NSString *_autocompleteText;
    NSString *_placeholderText;
    double _textFieldRightViewAlpha;
    long long _textFieldClearButtonViewMode;
    double _placeholderAlpha;
    long long _keyboardType;
    long long _keyboardAppearance;
    UIView *_textFieldContainerView;
    UIView *_rightView;
    UIFont *_textFieldFont;
    double _searchButtonPercentStroked;
    UIImageView *_searchButtonShadowView;
    UILabel *_titleLabel;
    SCChatSearchTextField *_textField;
    long long _style;
    UIView *_textFieldRightViewContainer;
    SCSearchClearButton *_clearButton;
    SCGrowingButton *_backButton;
    UIImageView *_searchIconAccessoryImageView;
}

- (void).cxx_destruct;
- (void)_layoutSearchButtonStrokedWithOriginX:(double)arg1;
- (void)_layoutSearchButtonWithOriginX:(double)arg1;
- (id)_makeSearchButton;
- (id)_makeSearchButtonStroked;
- (id)_placeholderAttributes;
- (double)_searchButtonOriginX;
- (id)_textFieldColor;
- (id)_textFieldTintColor;
- (void)_updateClearButtonModeWithText:(id)arg1;
@property(copy, nonatomic) NSString *autocompleteText; // @synthesize autocompleteText=_autocompleteText;
@property(retain, nonatomic) SCGrowingButton *backButton; // @synthesize backButton=_backButton;
- (void)backTapped:(id)arg1;
@property(retain, nonatomic) SCSearchClearButton *clearButton; // @synthesize clearButton=_clearButton;
- (void)clearButtonTapped:(id)arg1;
- (double)defaultSearchButtonPercentStroked;
@property(nonatomic) __weak id <SCSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableTextFieldFrameAutoUpdate; // @synthesize disableTextFieldFrameAutoUpdate=_disableTextFieldFrameAutoUpdate;
- (id)initWithPlaceholderText:(id)arg1;
- (id)initWithPlaceholderText:(id)arg1 style:(long long)arg2 keyboardAppearance:(long long)arg3;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isEditing) _Bool editing;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (void)layoutSubviews;
- (void)loadTextField;
- (void)performSearchButtonHighlightAnimation;
@property(nonatomic) double placeholderAlpha; // @synthesize placeholderAlpha=_placeholderAlpha;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
- (void)search:(id)arg1;
@property(readonly, nonatomic) SCBarButton *searchButton;
@property(nonatomic) double searchButtonPercentStroked; // @synthesize searchButtonPercentStroked=_searchButtonPercentStroked;
@property(retain, nonatomic) UIImageView *searchButtonShadowView; // @synthesize searchButtonShadowView=_searchButtonShadowView;
@property(readonly, nonatomic) SCBarButton *searchButtonStroked;
@property(retain, nonatomic) UIImage *searchIconAccessoryImage;
@property(retain, nonatomic) UIImageView *searchIconAccessoryImageView; // @synthesize searchIconAccessoryImageView=_searchIconAccessoryImageView;
@property(retain, nonatomic) UIView *searchInputAccessoryView;
- (void)selectAllText;
@property(nonatomic) _Bool shouldShowBackButton; // @synthesize shouldShowBackButton=_shouldShowBackButton;
@property(nonatomic) _Bool showCloseButtonWhenEmpty; // @synthesize showCloseButtonWhenEmpty=_showCloseButtonWhenEmpty;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) SCChatSearchTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) double textFieldAlpha;
@property(nonatomic) long long textFieldClearButtonViewMode; // @synthesize textFieldClearButtonViewMode=_textFieldClearButtonViewMode;
@property(retain, nonatomic) UIView *textFieldContainerView; // @synthesize textFieldContainerView=_textFieldContainerView;
@property(retain, nonatomic) UIFont *textFieldFont; // @synthesize textFieldFont=_textFieldFont;
@property(nonatomic) double textFieldRightViewAlpha; // @synthesize textFieldRightViewAlpha=_textFieldRightViewAlpha;
@property(retain, nonatomic) UIView *textFieldRightViewContainer; // @synthesize textFieldRightViewContainer=_textFieldRightViewContainer;
- (void)setTextWithoutUpdate:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)shouldLazyLoadTextField;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldDeleteCharacter:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updatePercentOverscrolled:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


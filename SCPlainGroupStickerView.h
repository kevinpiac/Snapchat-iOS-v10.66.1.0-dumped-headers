//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventStickerMultilineInputFieldDelegate-Protocol.h"
#import "SCGroupInviteView-Protocol.h"

@class NSString, SCEventStickerMultilineInputField, SCGroupInvite, UIImageView;
@protocol SCGroupInviteVenueSearchProvider, SCGroupInviteViewDelegate;

@interface SCPlainGroupStickerView : UIView <SCEventStickerMultilineInputFieldDelegate, SCGroupInviteView>
{
    UIImageView *_shape;
    SCEventStickerMultilineInputField *_textField;
    SCGroupInvite *_model;
    id <SCGroupInviteViewDelegate> _groupStickerEditingDelegate;
    id <SCGroupInviteVenueSearchProvider> _venueSearchProvider;
    NSString *_footerButtonText;
    CDUnknownBlockType _footerButtonAction;
}

- (void).cxx_destruct;
- (void)_modifyGroupSticker:(CDUnknownBlockType)arg1;
- (void)eventStickerMultilineInputFieldDidEditText:(id)arg1;
- (void)focusDefaultTextField;
@property(copy, nonatomic) CDUnknownBlockType footerButtonAction; // @synthesize footerButtonAction=_footerButtonAction;
@property(copy, nonatomic) NSString *footerButtonText; // @synthesize footerButtonText=_footerButtonText;
@property(nonatomic) __weak id <SCGroupInviteViewDelegate> groupStickerEditingDelegate; // @synthesize groupStickerEditingDelegate=_groupStickerEditingDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)preferredWidth;
- (void)resignFocus;
- (void)setGroupStickerModel:(id)arg1 editable:(_Bool)arg2;
@property(retain, nonatomic) id <SCGroupInviteVenueSearchProvider> venueSearchProvider; // @synthesize venueSearchProvider=_venueSearchProvider;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)stickerModel;

// Remaining properties
@property(nonatomic) _Bool collapsedToShowTitleOnly;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


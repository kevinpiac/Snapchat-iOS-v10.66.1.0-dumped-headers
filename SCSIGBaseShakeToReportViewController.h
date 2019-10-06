//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCS2RSubScreenViewController.h"

#import "SCC2RAttachmentDescriptionViewDelegate-Protocol.h"
#import "SCS2RFeatureSelectionDelegate-Protocol.h"
#import "SCShakeDrawOnAttachmentViewControllerDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSString, SCS2RAttachmentDescriptionView, SCShakeCaptureData, SIGActionButton, SIGTableViewCell, SIGTooltip, TTTAttributedLabel, UIView;

@interface SCSIGBaseShakeToReportViewController : SCS2RSubScreenViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, SCC2RAttachmentDescriptionViewDelegate, SCShakeDrawOnAttachmentViewControllerDelegate, SCS2RFeatureSelectionDelegate, TTTAttributedLabelDelegate>
{
    SCShakeCaptureData *_shakeCaptureData;
    NSArray *_featureNames;
    long long _reportSource;
    long long _reportType;
    SCS2RAttachmentDescriptionView *_attachmentDescription;
    UIView *_optionsView;
    SIGActionButton *_submitButton;
    long long _selectedFeatureIndex;
    SIGTableViewCell *_addAttachmentCell;
    SIGTableViewCell *_chooseTopicCell;
    TTTAttributedLabel *_infoCollectionWarning;
    SIGTooltip *_addAttachmentTooltip;
}

- (void).cxx_destruct;
- (void)_actionButtonPressed;
- (void)_addAttachmentSingleTap:(id)arg1;
- (void)_addCells:(id)arg1 toView:(id)arg2;
- (void)_addImageAttachment:(id)arg1;
- (void)_chooseTopicSingleTap:(id)arg1;
- (id)_constraintsForCell:(id)arg1 below:(id)arg2;
- (id)_getChooseTopicCellText;
- (id)_getTitleByReportSource:(long long)arg1 reportType:(long long)arg2;
- (id)_optionCells;
- (void)_setupConstraints;
- (void)attachmentDidSingleTap:(long long)arg1 attachmentView:(id)arg2 type:(unsigned long long)arg3;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)didSelectFeatureInIndex:(long long)arg1;
- (void)drawOnAttachmentViewController:(id)arg1 didChangeAttachmentImage:(id)arg2 index:(long long)arg3;
- (void)drawOnAttachmentViewControllerDidDeleteImage:(id)arg1 index:(long long)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)initWithCapturedData:(id)arg1 featureNames:(id)arg2 reportType:(long long)arg3 reportSouce:(long long)arg4;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

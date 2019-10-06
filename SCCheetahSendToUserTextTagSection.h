//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSection-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, SCCheetahSendToPreviewMessageCollector, SCCheetahSendToUserTextTagCell, SCCollectionViewSectionUpdateModel;
@protocol SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCSearchIntentHandler;

@interface SCCheetahSendToUserTextTagSection : NSObject <UITextViewDelegate, SCCollectionViewSection>
{
    SCCheetahSendToPreviewMessageCollector *_msgCollector;
    SCCheetahSendToUserTextTagCell *_userTextTagCell;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithPreviewMsgCollector:(id)arg1;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMediaChatViewModel.h"

#import "SCChatMetadataForwardable-Protocol.h"
#import "SCReportStoryMetadataParamsProvider-Protocol.h"

@class NSString, SOJUNycShare;

@interface SCMapSnapMessageViewModel : SCMediaChatViewModel <SCReportStoryMetadataParamsProvider, SCChatMetadataForwardable>
{
    SOJUNycShare *_nycShare;
}

- (void).cxx_destruct;
- (_Bool)_isViewable;
- (id)_updatedThumbnailViewModel;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)forwardButtonString;
- (id)forwardPreviewViewModel;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isReadyToForward;
- (id)mapSnapMetadata;
@property(readonly, copy, nonatomic) NSString *poiId;
- (unsigned long long)reportSnapSource;
- (id)reusableCellIdentifier;
- (id)sendTaskMetadataContainer;
- (id)storyMetadataParams;
@property(readonly, copy, nonatomic) NSString *storySnapId;
- (struct CGSize)thumbnailSize;
- (id)updatedThumbnailViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


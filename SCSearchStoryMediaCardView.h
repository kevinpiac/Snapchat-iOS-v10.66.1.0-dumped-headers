//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCTextMediaCardView.h"

#import "SCActionMenuRenderableCellContentView-Protocol.h"
#import "SCSendPreviewMediaView-Protocol.h"

@class NSString, SCSearchStoriesPresenter, UITapGestureRecognizer, UIViewController;
@protocol SCChatCellPublisherGestureDelegate;

@interface SCSearchStoryMediaCardView : SCTextMediaCardView <SCActionMenuRenderableCellContentView, SCSendPreviewMediaView>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController<SCChatCellPublisherGestureDelegate> *_parentVC;
    SCSearchStoriesPresenter *_searchStoriesPresenter;
}

- (void).cxx_destruct;
- (id)SCAMediaTypes;
- (void)_loadThumbnailWithNetworkImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadThumbnailWithThumbnailMedia:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)backgroundShapePath;
- (id)initWithParentViewController:(id)arg1;
- (void)onTap:(id)arg1;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetWithOriginalSettings;
@property(retain, nonatomic) SCSearchStoriesPresenter *searchStoriesPresenter; // @synthesize searchStoriesPresenter=_searchStoriesPresenter;
- (id)searchStoryMediaCardViewModel;
- (_Bool)shouldApplyThumbnailForLoadedViewModel:(id)arg1;
- (void)thumbnailImageWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

